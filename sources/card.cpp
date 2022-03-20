#include "include/card.h"

Card:: Suit get_suit() {
  return card_suit;
}
Card:: Denomination  get_denomination() {
  return card_denomination;
}
Card:: bool get_is_opened() {
  return is_opened;
}