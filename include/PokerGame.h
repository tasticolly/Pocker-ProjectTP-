#ifndef POKERGAME_H_
#define POKERGAME_H_

#include <iostream>
#include <vector>
#include <sstream>
#include "Deck.h"
#include "Hand.h"
using namespace std;

class PokerGame {
private:
	Deck deck;
	unsigned short numOfPlayers{};
	unsigned short gameType;
	vector <Hand> playerHands;
	vector <int> credit;
	stringstream history;
	static void splash();
	static void clearScreen();
	static void pause();
public:
	PokerGame();
	unsigned short getNumOfPlayers() const;
	void setNumOfPlayers(unsigned short numOfPlayers);
	unsigned short getGameType() const;
	void setGameType(unsigned short gameType);
	const vector<Hand>& getPlayerHands() const;
	void setPlayerHands(const vector<Hand>& playerHands);
	void discardFromHand(Hand& hand, int discard);
	void beginGame();
	void gameInit();
	void classicGameLoop(int turns = 1);
	void texasGameLoop(int turns = 1);
	virtual ~PokerGame();
};

#endif /* POKERGAME_H_ */