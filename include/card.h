#include "include/suit.h"
#include "include/denomination"

class Card {
 private:
  Suit card_suit;
  Denomination card_denomination;
  bool is_opened;
  Card() {
    card_suit = Suit::SPADES;
    card_denomination = Denomination::QUEEN;
  }
  ~Card() = default;
 public:
  void get_suit();
  void get_denomination();
  void get_is_opened();

};