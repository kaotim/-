#include<iostream>
#include"Poker.h"
#include<ctime>
#include<cstdio>
using namespace std;
Poker::Poker()
{
	for (int i = 0; i < 4; i++)
	{
		vector<string> temporary;
		for (int j = 0; j < 13; j++)
		{
			temporary.push_back(poker[j]);
		}
		deck.push_back(temporary);
	}
}
vector<vector<string>> Poker::getdeck()
{
	return deck;
}
string Poker::getonecard()
{
	while (1)
	{
		int a, b;
		a = rand() % 4;
		onecardsuit = suit[a];
		b = rand() % 13;
		onecard = deck[a][b];
		deck[a][b] = "0";
		if (onecard != "0")
			break;
	}
	return onecard;
}
string Poker::getonecardsuit()
{
	return onecardsuit;
}