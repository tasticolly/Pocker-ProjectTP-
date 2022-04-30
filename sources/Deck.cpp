#include "Deck.h"

Deck::Deck() {
    srand(time(nullptr));
    initDeck();
}

Deck::Deck(const vector<Card> &deck) {
    srand(time(nullptr));
    setDeck(deck);
}

void Deck::initDeck() {
    vector<Card> newDeck;
    for (int i = TWO; i != ACE + 1; ++i)
        for (int j = HEARTS; j != CLUBS + 1; ++j)
            newDeck.emplace_back(static_cast<Suit>(j), static_cast<Face>(i));
    setDeck(newDeck);
}

void Deck::setDeck(const vector<Card>& deck_) {
    this->deck = deck_;
}

void Deck::shuffle() {
    vector<Card> newDeck;
    int rnum;
    while (!deck.empty()) {
        rnum = rand() % deck.size();
        newDeck.push_back(drawCard(rnum));
    }
    setDeck(newDeck);
}

Card Deck::drawCard(const unsigned &index) {
    Card drawnCard = deck[index];
    deck.erase(deck.begin() + index);
    return drawnCard;
}

void Deck::addCard(const Card& card_) {
    deck.push_back(card_);
}

vector<Card> Deck::dealHand(const int &size) {
    vector<Card> hand;
    for (int i = 0; i < size; ++i)
        hand.push_back(drawCard(0));
    return hand;
}

string Deck::toString() {
    string str = "";
    for (int i = 0; i < cardsRemaining(); ++i)
        str += deck[i].toString() + "\n";
    return str;
}

const vector<Card> &Deck::getDeck() const { return deck; }

int Deck::cardsRemaining() { return deck.size(); }

Deck::~Deck() = default;


