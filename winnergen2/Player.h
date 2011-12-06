#pragma once
#include <string>
#include <vector>

class Contest;
typedef enum{TeamA,	TeamB, NOTSET} GamePick;

class PlayerPick
{
	PlayerPick(Contest &game, GamePick pick, int rank):
		m_Game(game), m_Rank(rank), m_Pick(pick){}

	const Contest& m_Game;
	const GamePick m_Pick;
	const int m_Rank;
};
typedef std::vector<PlayerPick> PickList;

class Player
{
public:
	Player(std::string name):
		m_PlayerName(name){}	

	PickList picks;
	const std::string m_PlayerName;
};
typedef std::vector<Player> PlayerList;

class Contest{
	Contest(std::string &teamA, std::string &teamB, GamePick initPick):
		m_TeamA(teamA),m_TeamB(teamB),m_InitOutcome(initPick){}

	const GamePick m_InitOutcome;  
	const std::string m_TeamA;
	const std::string m_TeamB;
};
typedef std::vector<Contest> ContestList;

//Should have only one instance of this class, threads will refer to this.
class GameState
{
	PlayerList m_PlayerList;
	ContestList m_ContestList;
};