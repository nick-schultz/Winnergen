#include "StdAfx.h"
#include "FileLoader.h"
#include "Player.h"
#include <fstream>


const int THREADS = 1;
FileLoader::FileLoader(void)
{
}


FileLoader::~FileLoader(void)
{
}

void FileLoader::LoadFile(std::string filename, std::vector<Player*> &player_list)
{
	std::ifstream file("test", std::ifstream::in);	
	file.ignore(2048,'\n');//ignore first row
	//file.ignore(2048,'\n');//ignore second row

	for(int i = 0; i < 12;i++)//ignore 12 commas
	{
		file.ignore(2048,',');
	}
	bool go = true;
	while(go)
	{
		Player *player = new Player;
		for(int i = 0; i < THREADS;i++)
		{
			player->first[i] = 0;
			player->second[i] = 0;
			player->third[i] = 0;
			player->fourth[i] = 0;
		}
		file.getline(player->name,20,',');
		file.ignore(2048,',');
		file.ignore(2048,',');
		file.ignore(2048,',');
		if(strcmp(player->name,"Brad M.") == 0)
			go = false;
		player_list.push_back(player);
	}
	file.ignore(2048,'\n');

	for(int i = 0; i < 35;i++)
		getLinePick(file,i);
}

void FileLoader::getLinePick(std::ifstream &file, int contest_num)
{
}