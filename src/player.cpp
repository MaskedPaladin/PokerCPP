#include "../include/player.hpp"

Player::Player(){}
Player::~Player(){}
void Player::setName(std::string name){ this->name = name; }
std::string Player::getName(){ return this->name; }
void Player::setCards(std::vector<Card> cards){ this->cards = cards; }
std::vector<Card> Player::getCards(){ return this->cards; }
void Player::setChips(int chips){ this->chips = chips; }
int Player::getChips(){ return this->chips; }

