using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using CustomExtensions;


public class GameBehavior : MonoBehaviour
{
    private int _itemsCollected = 0;
    public string labelText = "Collect all 4 items and win your freedom!";
    public int maxItems = 4;
    public bool showWinScreen = false;
    public bool showLossScreen = false;
    private string _state;
    public Stack<string> lootStack = new Stack<string>();
    public delegate void DebugDelegate(string newText);
    public DebugDelegate debug = Print;

    public string State
    {
        get { return _state; }
        set { _state = value; }
    }

    void Start()
    {
        Initialize();
        InventoryList<string> inventoryList = new InventoryList<string>();
        inventoryList.SetItem("Potion");
        Debug.Log(inventoryList.item);
    }

    public void Initialize()
    {
        _state = "Manager initialized...";
        _state.FancyDebug();
        Debug.Log(_state);
        debug(_state);
        lootStack.Push("Sword of Doom");
        lootStack.Push("HP");
        lootStack.Push("Golden Key");
        lootStack.Push("Winged Boot");
        lootStack.Push("Mythril Bracers");
        GameObject player = GameObject.Find("Player");
        PlayerBehavior playerBehavior = player.GetComponent<PlayerBehavior>();
        playerBehavior.playerJump += HandlePlayerJump;

    }

    public void HandlePlayerJump()
    {
        debug("Player has jumped...");
    }

    public static void Print(string newText)
    {
        Debug.Log(newText);
    }
    
    public int Items
    {
        get { return _itemsCollected; }
        set {
            _itemsCollected = value;
            if(_itemsCollected >= maxItems) 
            {
                labelText = "You found all the items!";
                showWinScreen = true;
                Time.timeScale = 0f;
            }
            else
            {
                labelText = "Item found, only " + (maxItems - _itemsCollected) + " more to go!";
            }
        }
    }


    private int _playerHP = 10;

    public int HP
    {
        get { return _playerHP; }
        set {
            _playerHP = value;
            if(_playerHP <= 0)
            {
                labelText = "You want another life with that?";
                showLossScreen = true;
                Time.timeScale = 0;
            }
            else{
                labelText = "Ouch...that's gotta hurt!";
            }
            Debug.LogFormat("Lives: {0}", _playerHP);
        }
    }



    void OnGUI()
    {
        GUI.Box(new Rect (20, 20, 150, 25), "Player Health:" + _playerHP);
        GUI.Box(new Rect (20, 50, 150, 25), "Items Collected:" + _itemsCollected);
        GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 300, 50), labelText);

        if(showWinScreen)
        {
            GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 100, 100), "YOU WON!");
            {
                Utilities.RestartLevel(0);
            }
            //SceneManager.LoadScene(0);
            //Time.timeScale = 1.0f;
        }

        if(showLossScreen)
        {
            if(GUI.Button(new Rect(Screen.width / 2 - 100, Screen.height / 2 - 50, 200, 100), "You lose!"))
            {
                try
                {
                    Utilities.RestartLevel(-1);
                    debug("Level restarted sucessfully...");
                }
                catch(System.ArgumentException e)
                {
                    Utilities.RestartLevel(0);
                    debug("Reverting to Scene 0:" + e.ToString());
                }
                finally
                {
                    debug("Restart handled...");
                }
                
                //SceneManager.LoadScene(0);
                //Time.timeScale = 1.0f;
            }
        }
    
    }

    public void PrintLootReport()
    {
        var currentItem = lootStack.Pop();
        var nextItem = lootStack.Peek();

        Debug.LogFormat("You got a {0}! You've got a good chance of finding a {1} next!", currentItem, nextItem);

    }
}
