#ifndef HUB_EVENTS_H
#define HUB_EVENTS_H

#include "/Users/tobiasronningen/CLionProjects/Aslona/game_mechanics/game_mechanics.h"

class hub_events
{
public:

    hub_events();

    static void hub_stranger(game_mechanics &mechanics);
    static void hub_mercenary(game_mechanics &mechanics);
    static void choose_random_hub_event(game_mechanics &mechanics);
    static int hub_what_to_do(game_mechanics &mechanics);
    static int hub_tavern(game_mechanics &mechanics);
    static int hub_casino(game_mechanics &mechanics);
    static int hub_market(game_mechanics &mechanics);
    static int left_the_hub(game_mechanics &mechanics);
};

#endif // HUB_EVENTS_H