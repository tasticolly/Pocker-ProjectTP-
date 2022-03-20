#include "include/suit.h"
#include "include/denomination"

class Card {
 private:
 public:
  Card();
  ~Card() = default;
  Suit card_suit;
  bool is_opened;
  Denomination card_denomination;
  Suit get_suit();
  Denomination get_denomination();
  bool get_is_opened();
};