/** 
@file   GameEnvironments.hpp 
@brief  Event class 
@author Carlos Jiménez Encinas
@date   30/08/2022
 ***********************************************/
#include <vector>
#include <string>
#include <GameObjects.hpp>
#include <Entities.hpp>


namespace GameEnvironments
{


	class Table
	{
		private:
			std::string name;
			GameObjects::Deck deck;
			std::vector<Entities::Player> players;
			std::vector<GameObjects::Card> cards;
			int pot;
		public:
			Table();
			~Table();
			Table(std::string name);
			Table(std::string name, GameObjects::Deck deck);
			void setName(std::string name);
			std::string getName();
			void setDeck(GameObjects::Deck deck);
			GameObjects::Deck getDeck();
			void setPlayers(std::vector<Entities::Player> players);
			std::vector<Entities::Player> getPlayers();
			void setCards(std::vector<GameObjects::Card> cards);
			std::vector<GameObjects::Card> getCards();
			void setPot(int pot);
			int getPot();

	};
}
