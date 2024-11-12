# Texas Hold'em Poker Tournament

This project implements a Texas Hold'em poker tournament simulation.

## Game Structure

The game follows the rules of No-Limit Texas Hold'em, played as a tournament at a virtual poker table.  Players register before the tournament begins.

## Implementation Details

Each player starts with an equal amount of virtual currency (100 units).  At the beginning of each hand, players are randomly dealt two private cards. Each card has a specific rank and suit.

Players take turns acting (betting, raising, calling, or folding) in a clockwise order. The game progresses through the standard stages: pre-flop, flop, turn, and river. Before each player's turn, the previous player's action is concealed, and the current player is presented with available options.

At the end of each hand, the winner is determined based on the best five-card poker hand formed using their private cards and the community cards on the table. The winner collects the pot. Players who run out of money are eliminated from the tournament. A new hand begins immediately after the previous one concludes.

The tournament continues until only one player remains, who is declared the winner.

## Design Patterns and Principles

The implementation leverages the following design patterns and principles:

1. **Observer Pattern:** Used for efficient notification and update mechanisms within the game.
2. **Command Pattern:**  Employed to represent and manage player actions (betting, raising, calling, folding).

The project adheres to SOLID principles to ensure maintainability and flexibility.


[UML Diagram](description/ATP_POCKER.pdf)
