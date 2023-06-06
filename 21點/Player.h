#pragma once
#ifndef P_h
#define P_h
#include"Poker.h"
#include<iostream>
using namespace std;
class Player
{
private:
	Poker poker;
public:
	int total;
	string one;
	string onesuit;
	string two;
	string twosuit;
	Player();
	Player(Poker);
	int translate(string);
	void prinf();
	int pokersum();
	int dealersum();
};
#endif // !P_h
