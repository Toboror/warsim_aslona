#ifndef GAME_MECHANICS_H
#define GAME_MECHANICS_H

#include <string>

void cout_from_file(const std::string& txt_file_path);
void go_back();
void press_any_button();

using namespace std;

class game_mechanics
{
public:
    bool game_running;
    bool chosen_difficulty;
    string user_name;
    bool name_chosen;
    int player_gold;
    int player_renown;
    int player_age;
    bool run_intro_text;

    game_mechanics();

    static void main_game_screen(game_mechanics &mechanics);
    static int main_menu(game_mechanics &mechanics);
    static void chooseDifficulty(game_mechanics &mechanics);
    static void choose_name(game_mechanics &mechanics);
    static void settings();
    static void credits();
    static void main_menu_what_to_do(game_mechanics &mechanics);

};

#endif // GAME_MECHANICS_H