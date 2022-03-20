#include<vector>
#include"combination.h"
#include"player.h"
#include"stage.h"
class State {
  Stage s = Stage::TURN;
  int bank;
  int number_of_players;
  int active;
  int small_blind;
  std::vector<Player> players;
  std::vector<Combination> combinations;
  Combination get_combination(Player play);

};