#include "../include/Entities.hpp"

using namespace Entities;

Player::Player(){}
Player::~Player(){}
void Player::setName(std::string name){ this->name = name; }
std::string Player::getName(){ return this->name; }
void Player::setCards(std::vector<GameObjects::Card> cards){ this->cards = cards; }
std::vector<GameObjects::Card> Player::getCards(){ return this->cards; }
void Player::setChips(int chips){ this->chips = chips; }
int Player::getChips(){ return this->chips; }

