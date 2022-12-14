#include <string>
#include "../include/GameObjects.hpp"

using namespace GameObjects;

Card::Card(){}
Card::Card(int value, std::string repr, std::string suit){ this->value = value; this->repr = repr; this->suit = suit; }
Card::~Card(){}
void Card::setValue(int value){ this->value = value; }
int Card::getValue(){ return this->value; }
void Card::setRepr(std::string repr){ this->repr = repr; }
std::string Card::getRepr(){ return this->repr; }
void Card::setSuit(std::string suit) { this->suit = suit; }
std::string Card::getSuit(){ return this->suit; }
void Card::show(){ std::cout << std::to_string(this->value) << "," << this->repr << "," << this->suit << std::endl; }
			
Deck::Deck(){}
Deck::~Deck(){}
Deck::Deck(std::string name){ this->name = name; }
Deck::Deck(std::string name, std::vector<Card> cards){ this->name = name; this->cards = cards; }
void Deck::setName(std::string name){ this->name = name; }
std::string Deck::getName(){ return this->name; }
void Deck::setCards(std::vector<Card> cards){ this->cards = cards; }
std::vector<Card> Deck::getCards(){ return this->cards; }
