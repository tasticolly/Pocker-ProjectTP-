#include "../include/card.h"
#include "../include/combination.h"
#include "../include/denomination.h"
#include "../include/player.h"
#include "../include/stage.h"
#include "../include/state.h"
#include "../include/strategy.h"
#include "../include/suit.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    State current_state;
    int number_of_players;
    std::cin >> number_of_players;
    std::vector<Player> players(number_of_players);
    for (int i = 0; i < number_of_players; ++i) {
        std::cin >> players[i].name;
        players[i].stack = 1000;
    }

}
