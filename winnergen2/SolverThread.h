#pragma once
#include <stdint.h>

class GameState;
class SolverThread
{
public:
	SolverThread(const GameState &game, uint64_t threadID, uint64_t increment, uint64_t max);
	~SolverThread(void);

	void StartSolver(){}
	
	bool IsFinished(){return m_Finished;}

private:
	//Loop that iterates through all outcomes and computes the winners
	void MainThread();

	//Find the players who have placed
	void TallyWinners(){}
	
	//Calculate players' scores
	void CalcPlayerScore(){}


	bool m_Finished;

	const GameState& m_GameState;
	const uint64_t m_Increment; 
	const uint64_t m_Max;	
	const uint64_t m_ThreadID;

	//Each Thread will need:
	//1. their own counter's for 1st,2nd,3rd,4th places(maybe make it programmable?) 
	//		for each player
	//2. 
};

