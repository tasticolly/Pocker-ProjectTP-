#include<vector>
#include"combination.h"
#include"player.h"
#include"stage.h"
class State {
 public:
  Stage current_stage = Stage::PREFLOP;
  int bank;
  int number_of_players;
  int active;
  int small_blind;
  std::vector<Player> players;
  std::vector<Combination> combinations;
  void get_combination();
};