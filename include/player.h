#include<string>
class Player {
    std::string name;
    Combination c = Combination::FULLHOUSE;
    int bet;
    int stack;
    Card first;
    Card second;
    Strategy strategy;
    void set_strategy();
    void get_strategy();
};