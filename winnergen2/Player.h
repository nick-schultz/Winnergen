#pragma once
#include <string>
#include <vector>



class Player
{
public:
	Player(void);
	~Player(void);

	int m_GameRankings[35];
	
	enum{
		A,
		B
	} m_GameWinners[35];

	std::string m_PlayerName;
};

class Contest{
	enum{
		TeamA,
		TeamB,
		NOTSET
	} m_GameWinner;
};

typedef std::vector<Player> PlayerList;
typedef std::vector<Contest> ContestList;

class GameState
{
	PlayerList m_PlayerList;
	ContestList m_ContestList;
};