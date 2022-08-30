/** 
@file   Entities.hpp 
@brief  Player class 
@author Carlos Jiménez Encinas
@date   30/08/2022
 ***********************************************/
#pragma once
#include <string>
#include <vector>
#include "GameObjects.hpp"

namespace Entities
{
	class Player
	{
		private:
			std::string name;
			std::vector<GameObjects::Card> cards;
			int chips;

		public:
			Player();
			~Player();
			void setName(std::string name);
			std::string getName();
			void setCards(std::vector<GameObjects::Card> cards);
			std::vector<GameObjects::Card> getCards();
			void setChips(int chips);
			int getChips();
	};
}
