#include "StdAfx.h"
#include "SolverThread.h"


SolverThread::SolverThread(const GameState &game, uint64_t threadID, uint64_t increment, uint64_t max):
m_GameState(game),
m_Increment(increment),
m_Max(max),
m_ThreadID(threadID),
m_Finished(true)
{
}

SolverThread::~SolverThread(void)
{
}

void SolverThread::MainThread()
{
	m_Finished = false;	

	for(uint64_t GameID = m_ThreadID; GameID < m_Max; GameID += m_Increment)
	{
		CalcPlayerScore();
		TallyWinners();
	}

	m_Finished = true;
}