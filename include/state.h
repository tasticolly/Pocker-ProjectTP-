class State {
    Stage s = Stage::TURN;
    int bank;
    int number_of_players;
    int active;
    std::vector<Player>players;
    int small_blind;

};