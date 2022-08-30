/** 
@file   card.hpp 
@brief  Card class 
@author Carlos Jiménez Encinas
@date   30/08/2022
 ***********************************************/

#pragma once
#include <string>
#include <vector>
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
class Deck
{
	private:
		std::string name;
		std::vector<Card> cards;
	public:
		Deck();
		~Deck();
		Deck(std::string name);
		Deck(std::string name, std::vector<Card> cards);
		void setName();
		std::string getName();
		void setCards();
		std::vector<Card> getCards();
};
