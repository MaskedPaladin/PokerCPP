/** 
@file   player.hpp 
@brief  Player class 
@author Carlos Jiménez Encinas
@date   30/08/2022
 ***********************************************/
#pragma once
#include <string>
#include <vector>
#include "card.hpp"
class Player
{
	private:
		std::string name;
		std::vector<Card> cards;
		int chips;

	public:
		Player();
		~Player();
		void setName(std::string name);
		std::string getName();
		void setCards(std::vector<Card> cards);
		std::vector<Card> getCards();
		void setChips(int chips);
		int getChips();
};
