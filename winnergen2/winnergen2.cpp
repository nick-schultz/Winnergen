// winnergen2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include "FileLoader.h"

int _tmain(int argc, _TCHAR* argv[])
{
	PlayerList plist;
	FileLoader::LoadFile("test.csv",plist);

	return 0;
}

