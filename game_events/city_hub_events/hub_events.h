#ifndef HUB_EVENTS_H
#define HUB_EVENTS_H

#include "/Users/tobiasronningen/CLionProjects/untitled/game_mechanics/game_mechanics.h"

namespace hub_events {
    void hub_stranger(game_mechanics &mechanics);
}

namespace hub_events {
    int hub_what_to_do(game_mechanics &mechanics);
}

namespace hub_events {
    int hub_tavern(game_mechanics &mechanics);
}

namespace hub_events {
    void hub_casino(game_mechanics &mechanics);
}

namespace hub_events {
    void hub_market(game_mechanics &mechanics);
}

namespace hub_events {
    int left_the_hub(game_mechanics &mechanics);
}

#endif // HUB_EVENTS_H