#include "Game.h"
Player::Player() {
	this->name = "-";
	this->team = "-";
	this->pow = 0;
}
Player::Player(string name, string team, int pow) {
	this->name = name;
	this->team = team;
	this->pow = pow;
}
void Player::print() {
	cout << team << ": " << name << " "<< pow;
}
