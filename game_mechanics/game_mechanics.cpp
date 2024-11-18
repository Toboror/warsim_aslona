#include "game_mechanics.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

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

game_mechanics::game_mechanics()
    : game_running(true), chosen_difficulty(false), name_chosen(false),
      player_gold(50), player_renown(0), player_age(25), run_intro_text(false) {}

void game_mechanics::main_game_screen(game_mechanics &mechanics)
{

    if (mechanics.run_intro_text == false) {
        cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_game_screen_text/game_intro_text.txt");
        mechanics.run_intro_text = true;
    }
    press_any_button();
    cout << "----- Year xxx ------------------- Action menu -------------------"
         << "\nGold: " + to_string(mechanics.player_gold)
         << " - Your renown: " + to_string(mechanics.player_renown)
         << " - Your age: " + to_string(mechanics.player_age)
         << "\n-------------------------------------------------------------------" << endl;
}

int game_mechanics::main_menu(game_mechanics &mechanics)
{
    cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/main_menu.txt");

    int user_input;
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

void game_mechanics::start_new_game(game_mechanics &mechanics)
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

void game_mechanics::choose_name(game_mechanics &mechanics)
{
    cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/start_new_game/choose_name.txt");
    cin >> mechanics.user_name;
    cout << "Your chosen name is " + mechanics.user_name << endl;
    mechanics.name_chosen = true;
}

void game_mechanics::settings()
{
    cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/settings.txt");
    go_back();
}

void game_mechanics::credits()
{
    cout_from_file("/Users/tobiasronningen/CLionProjects/untitled/main_menu_text/credits.txt");
    go_back();
}