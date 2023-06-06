#include"Player.h"
#include"Poker.h"
#include<iostream>
#include<ctime>
using namespace std;
Player::Player(){}
Player::Player(Poker p) 
{
	p = poker;
	one = p.getonecard();
	onesuit = p.getonecardsuit();
	two = p.getonecard();
	twosuit = p.getonecardsuit();
}
int Player::translate(string temp)
{
	if (temp == "A")
	{
		cout << "A選擇要當11或1"<<endl;
		int a;
		cin >> a;
		if (a == 1)
			return 1;
		else if (a == 1)
			return 11;
		else
		{
			int b = rand() % 2;
			if (b == 0)
			{
				return 1;
			}
			else
			{
				return 11;
			}
		}
	}
	if (temp == "2")
		return 2;
	if (temp == "3")
		return 3;
	if (temp == "4")
		return 4;
	if (temp == "5")
		return 5;
	if (temp == "6")
		return 6;
	if (temp == "7")
		return 7;
	if (temp == "8")
		return 8;
	if (temp == "9")
		return 9;
	else
		return 10;
}
void Player::prinf()
{
	cout <<onesuit<< " "<<one<<" "<<endl;
	cout << twosuit << " "<<two<<" ";
}
int Player::pokersum()
{
	int sum;
	sum = translate(one) + translate(two);
	return sum;
}
int Player::dealersum()
{
	int sum;
	if (one == "A")
		sum = 11 + translate(two);	
	else if (two == "A")
		sum = 11 + translate(one);
	else if (one == "A" && two == "A")
		sum = 11 + 1;
	else
		sum = translate(one) + translate(two);

	return sum;
}

