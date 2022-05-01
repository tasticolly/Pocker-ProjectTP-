# Poker

### Structure of the game:
 

 * There is a card tableю Player is up to choose one of the 2 modes of poker to play: [**Classical Poker**](https://en.wikipedia.org/wiki/Draw_poker) and  [**No Limit Texas Holdem**](https://en.wikipedia.org/wiki/Texas_hold_%27em).
 In the beginning of the game, players register by entering their names.
 
### Details of realization:
 
 * All players initially have the same amount of money, 100 conventional units. At the beginning of the game, players are randomly dealt 2 cards.
 Each card has its own value and suit. Users take turns: _raising/calling/folding_,
 while game stages consequently change in the following order: _preflop, flop, turn, river_. Before the move of next player, other players' moves are hidden, current best combination for this player is shown.
 
 * At the end of the round, based on the cards on the table and in the hands of the remaining players, the winner is determined who takes all the pot.
 Players with no money left are eliminated and new round begins.
 The game is played until there is only **one winner** left.
 
### Useful patterns and hints used:

 1. Observer
 2. Command - players' actions
 We tried our best to comply with the **Solid principles**.

### Installation:

> $ git clone git@github.com:tasticolly/Pocker-ProjectTP-.git

> $ cmake -B build

> $ cmake --build build

### Run:

> $ ./build/Proj
