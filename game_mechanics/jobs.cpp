#include "jobs.h"
#include <iostream>

void jobs::collect_unpaid_tabs(game_mechanics &mechanics) {
    std::cout << "You start on your job to collect the unpaid tabs." << std::endl;

    int tabs_collected = 0;

    while (tabs_collected < 3) {
        // First tab. The person is a bit rude, but pays up.
        std::cout << "You approach the first person. They are a bit rude, but they pay up." << std::endl;
        tabs_collected++;

        // Second tab. The person is very nice and pays up.
        std::cout << "You approach the second person. They are very nice and pays up." << std::endl;
        tabs_collected++;

        // Third tab. The person is very aggressive and does not want to pay up.
        std::cout << "You approach the third person. They are very aggressive and does not want to pay up." << std::endl;
        std::cout << "You have to fight them." << std::endl;
    }
}