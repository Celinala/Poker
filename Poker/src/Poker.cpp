//============================================================================
// Name        : Poker.cpp
// Author      : Celina Lazaro, Fernando Estevez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <vector>
#include <iostream>
using namespace std;

class Cards{
	enum Suit{ HEART, CLUBS, SPADES, DIAMONDS};
	enum value{TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK,QUEEN, KING, ACE};

	Cards(string value, string cardSuit){

	}
};



class Dealer{
	Dealer(){
		//assign 52 cards to the deck
	}

	void shuffleDeck(){
		//shuffles deck of cards using rand or srand
	}
	void dealCards(){
		//hands out cards to player 1 at a time
	}
	string winner(){
		//logic to decide who is the winner
	}
};
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout<<"hi celina"<<endl;

	return 0;
}
