/** 
@file   event.hpp 
@brief  Event class 
@author Carlos Jiménez Encinas
@date   30/08/2022
 ***********************************************/
#include <vector>
#include <string>
#include <card.hpp>
#include <player.hpp>

class Table
{
	private:
		std::string name;
		Deck deck;
		std::vector<Player> players;
		std::vector<Card> cards;
		int pot;
	public:
		Table();
		~Table();
		Table(std::string name);
		Table(std::string name, Deck deck);
};
