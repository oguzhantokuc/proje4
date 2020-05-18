#include "Game.h"

Player nullplyr;
Team::Team() {
	this->name = "-";
	playerlist = new Player[1];
	for (int i = 0; i < 1; i++) {
		playerlist[i] = nullplyr;
	}
	power=0;
}

Team::Team(string name, Player* players,int size) {
	setTeam(name,players,size);
}
void Team::setTeam(string name, Player* players,int size){
	this->name = name;
	this->size = size;
	playerlist = new Player[size];
	for (int i = 0; i < size; i++) {
		playerlist[i] = players[i];
	}
	power=0;
	for (int i = 0; i < size; i++) {
		power+=playerlist[i].getPow();
	}
	power=power/size;
}
void Team::addPlayer(Player player){
	int i;
	Player temp[size+1];
	for(i=0;i<size;i++){
		temp[i]=playerlist[i];
	}
	temp[size]=player;
	size++;
	setTeam(name,temp,size);
}
void Team::addPlayer(string name,string team,int power){
	int i;
	Player tempPlayer(name,team,power);
	Player temp[size+1];
	for(i=0;i<size;i++){
		temp[i]=playerlist[i];
	}
	temp[size]=tempPlayer;
	size++;
	playerlist = new Player[size];
	for(i=0;i<size;i++){
		playerlist[i]=temp[i];
	}
}
void Team::print() {
	cout << name<<endl<<endl ;
	int i;
	for(i=0;i<this->size;i++){
		playerlist[i].print();
		cout<<endl;
	}
	cout<<"Team power: "<<power;
}


