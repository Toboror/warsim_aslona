#ifndef HUB_EVENTS_H
#define HUB_EVENTS_H

#include "/Users/tobiasronningen/CLionProjects/Aslona/game_mechanics/game_mechanics.h"

namespace hub_events {
    void hub_stranger(game_mechanics &mechanics);
}

namespace hub_events
{
    void hub_mercenary(game_mechanics &mechanics);
}

namespace hub_events
{
    void choose_random_hub_event(game_mechanics &mechanics);
}
namespace hub_events {
    int hub_what_to_do(game_mechanics &mechanics);
}

namespace hub_events {
    int hub_tavern(game_mechanics &mechanics);
}

namespace hub_events {
    int hub_casino(game_mechanics &mechanics);
}

namespace hub_events {
    int hub_market(game_mechanics &mechanics);
}

namespace hub_events
{
    int left_the_hub(game_mechanics &mechanics);
}

#endif // HUB_EVENTS_H