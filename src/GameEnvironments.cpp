#include "../include/GameEnvironments.hpp"

using namespace GameEnvironments;

Table::Table(){}
Table::~Table(){}
Table::Table(std::string name){ this->name = name; }
Table::Table(std::string name, GameObjects::Deck deck){ this->name = name; this->deck = deck; }
void Table::setName(std::string name){ this->name = name; }
std::string Table::getName(){ return this->name; }
void Table::setDeck(GameObjects::Deck deck){ this->deck = deck; }
GameObjects::Deck Table::getDeck(){ return this->deck; }
void Table::setPlayers(std::vector<Entities::Player> players){ this->players = players; }
std::vector<Entities::Player> Table::getPlayers(){ return this->players; }
void Table::setCards(std::vector<GameObjects::Card> cards){ this->cards = cards; }
std::vector<GameObjects::Card> Table::getCards(){ return this->cards; }
void Table::setPot(int pot){ this->pot = pot; }
int Table::getPot(){ return this->pot; }
