//============================================================================
// Name        : Poker.cpp
// Author      : Celina Lazaro, Fernando Estevez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class Cards{
public:
	enum Suit{ HEART, CLUBS, SPADES, DIAMONDS};
	enum Value{TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK,QUEEN, KING, ACE};

	Cards(Suit suit, Value val);
	Cards();

	void setSuit(Suit suit){
		cardSuit =suit;
	}
	Suit getSuit(){
		return cardSuit;
	}
	void setValue(Value val){
		cardVal = val;
	}
	Value getValue(){
		return cardVal;
	}
private:
	Suit cardSuit;
	Value cardVal;
};
Cards::Cards(Suit suit, Value val){
	cardSuit = suit;
	cardVal=val;
}



class Dealer{
public:
	Cards Hands[][];

	Dealer(){
		deck = new Cards[52];//creates a new deck
			currentCard = 0;

	}

	void shuffleDeck(){
		//shuffles deck of cards using rand or srand
		for ( int i = 0; i < 52; i++){
			int r = rand() % 52;//generate a random position
			int temp = deck[i];
			deck[i]=deck[r];
			deck[r]=temp;
		}
	}
	void dealCards(){
		//hands out cards to player 1 at a time
//		for ( int c = 0; c <n; c++){
//
//		}
	}
	string winner(){
		//logic to decide who is the winner
	}
private:
	Cards *deck;
	int currentCard;
};
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout<<"hi celina"<<endl;

	return 0;
}
