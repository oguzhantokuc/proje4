#ifndef	GAME_H
#define GAME_H
#include <iostream>
using namespace std;

class Player{
public:
	Player();
	Player(string, string, int);
	
	string getName(){ return name; };
	string getTeam(){ return team; };
	int getPow(){ return pow; };
	void print();
private:
	string name;
	string team;
	int pow;

};
class Team{
public:
	Team();
	Team(string, Player* players,int);
	void setTeam(string, Player* players,int);
	void addPlayer(Player player);
	void addPlayer(string ,string,int);
	void print();

private:
	string name;
	Player* playerlist;
	int size;
	int power;
	int puan;
};



#endif
