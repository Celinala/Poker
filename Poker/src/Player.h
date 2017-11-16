/*
 * player.h
 *
 *  Created on: November 11, 2017
 *      Author: Celina and Fernando
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include "Card.h"
#include "Hand.h"
#include "Deck.h"
using namespace std;

class player{

public:
	Hand hand;
	string getName();
	void setName(string);
private:
	string playerName;
};

string player::getName(){
	return playerName;
}
void player::setName(string name){
	playerName = name;
}




#endif /* PLAYER_H_ */
