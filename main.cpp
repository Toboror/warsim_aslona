#include <iostream>
#include <fstream>
using namespace std;

// Function for reading from txt files and printing to console.
void cout_from_file(const string& txt_file_path)
{

    string output;
    ifstream readFile(txt_file_path);

    while (getline(readFile, output))
    {
        cout << output << endl;
    }
    cout << "-------------------------" << endl;
    readFile.close();
}

void go_back()
{
    string user_input;

    cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/go_back.txt");

    while (user_input != "9")
    {
        cin >> user_input;
        cout << "Invalid input. Please put valid input" << endl;
    }
}

void press_any_button()
{
    cout << "\nPress any button to continue..." << endl;
    cin.ignore(); // Ignore any leftover characters in the input buffer
    cin.get();    // Wait for any key press
}

class game_mechanics
{
public:

    // Bool for running the game.
    bool game_running = true;
    // Var for checking if the diff. has been chosen.
    bool chosen_difficulty = false;
    // Var for user name.
    string user_name;
    // Var for checking if name has been chosen.
    bool name_chosen = false;
    // Var for player gold.
    int player_gold = 50;
    int player_renown = 0;
    int player_age = 25;

    static void main_game_screen(game_mechanics &mechanics)
    {
        // Reads intro text.
        cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_game_screen_text/game_intro_text.txt");
        press_any_button();
        // Reads the main game screen menu options.
        cout << "----- Year xxx ------------------- Action menu -------------------"
             << "\nGold: " + std::to_string(mechanics.player_gold)
             << " - Your renown: " + std::to_string(mechanics.player_renown)
             << " - Your age: " + std::to_string(mechanics.player_age)
             << "\n-------------------------------------------------------------------" << endl;
    }

    static int main_menu(game_mechanics &mechanics)
    {
        cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/main_menu.txt");

        int user_input;

        // Console in to user_input.
        cin >> user_input;
        switch (user_input)
        {
        default:
            cout << "You did not put in anything valid" << endl;
            break;
        case 1:
            start_new_game(mechanics);
            break;
        case 2:
            cout << "Running 2!" << endl;
            break;
        case 3:
            settings();
            break;
        case 4:
            credits();
            break;
        case 5:
            cout << "Exit!";
            return 5;
        }
        return 0;
    }

    static void start_new_game(game_mechanics &mechanics)
    {
        cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/start_new_game/choose_difficulty.txt");

        int user_input;
        cin >> user_input;
        while (user_input < 1 || user_input > 3)
        {
            cout << "Invalid input. Choose something else." << endl;
            cin >> user_input;
        }

        switch (user_input)
        {
        case 1:
            cout << "You have chosen the easy difficulty." << endl;
            mechanics.chosen_difficulty = true;
            break;
        case 2:
            cout << "You have chosen the medium difficulty." << endl;
            mechanics.chosen_difficulty = true;
            break;
        case 3:
            cout << "You have chosen the hard difficulty." << endl;
            mechanics.chosen_difficulty = true;
            break;
        }
    }

    static void choose_name(game_mechanics &mechanics)
    {
        {
            cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/start_new_game/choose_name.txt");
            cin >> mechanics.user_name;
            cout << "Your chosen name is " + mechanics.user_name << endl;
            mechanics.name_chosen = true;
        }
    }

    static void settings()
    {
        cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/settings.txt");
        go_back();
    }

    static void credits()
    {
        cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/credits.txt");
        go_back();
    }

};

int main() {

    game_mechanics mechanics;

    while (mechanics.game_running)
    {
        switch (game_mechanics::main_menu(mechanics))
        {
        case 5:
            mechanics.game_running = false;
            break;
        }
        if (mechanics.chosen_difficulty)
        {
            game_mechanics::choose_name(mechanics);
        }
        if (mechanics.name_chosen)
        {
            game_mechanics::main_game_screen(mechanics);
        }
    }
}
