#ifndef GAME_MECHANICS_H
#define GAME_MECHANICS_H

#include <string>

void cout_from_file(const std::string& txt_file_path);
void go_back();
void press_any_button();

class game_mechanics
{
public:
    bool game_running;
    bool chosen_difficulty;
    std::string user_name;
    bool name_chosen;
    int player_gold;
    int player_renown;
    int player_age;

    game_mechanics();

    static void main_game_screen(game_mechanics &mechanics);
    static int main_menu(game_mechanics &mechanics);
    static void start_new_game(game_mechanics &mechanics);
    static void choose_name(game_mechanics &mechanics);
    static void settings();
    static void credits();
};

#endif // GAME_MECHANICS_H