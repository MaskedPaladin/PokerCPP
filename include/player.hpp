/** 
@file   player.hpp 
@brief  Player class 
@author Carlos Jiménez Encinas
@date   30/08/2022
 ***********************************************/
#pragma once
#include <string>
class Player
{
	private:
		std::string name;
		int chips;
	public:
		Player();
		~Player();
		void setName(std::string name);
		std::string getName();
		void setChips(int chips);
		int getChips();
};
