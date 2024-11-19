#ifndef JOBS_H
#define JOBS_H

#include "../game_mechanics/game_mechanics.h"

namespace jobs {
    int collect_unpaid_tabs(game_mechanics &mechanics);
}

namespace jobs
{
    int calculate_tabs_money(int tab1, int tab2, int tab3);
}

namespace jobs
{
    int tabs_calculat_random_number();
}

#endif // JOBS_H