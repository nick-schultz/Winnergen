#pragma once

#include <string>
#include <vector>

class Player; //forward decl

class FileLoader
{
public:
	FileLoader(void);
	~FileLoader(void);

	static void LoadFile(std::string filename, PlayerList &player_list);
	static void getLinePick(std::ifstream &file, int contest_num);
};

