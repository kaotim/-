#pragma once
#ifndef p_h
#define p_h
#include<iostream>
#include<vector>
using namespace std;
class Poker
{
private:
	int card[13] = { 1,2,3,4,5,6,7,8,9,10,10,10,10, };
	string poker[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	string suit[4] = { "Spades", "Hearts", "Diamonds", "Clubs" };
	vector<vector<string>> deck;
	string onecard;
	string onecardsuit;
public:
	Poker();
	vector<vector<string>> getdeck();
	string getonecard();
	string getonecardsuit();

};
#endif // ! p_h
