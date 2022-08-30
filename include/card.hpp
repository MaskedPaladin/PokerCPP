/** 
 *  @file   card.hpp 
 *  @brief  Card class 
 *  @author Carlos Jiménez 
 *  @date   30/08/2022
 ***********************************************/

#pragma once
#include <string>
#include <iostream>

class Card
{
	private:
		int value;
		std::string repr;
		std::string suit;
	public:
		Card();
		~Card();
		Card(int value, std::string repr, std::string suit);
		void setValue(int value);
		int getValue();
		void setRepr(std::string repr);
		std::string getRepr();
		void setSuit(std::string suit);
		std::string getSuit();
		void show();
};
