#include<iostream>
#include"Poker.h"
#include"Player.h"
#include<ctime>
#include<cstdio>
using namespace std;
int main()
{
	srand(time(NULL));
	Poker only;
	Player one(only);
	Player dealer(only);
	//dealer.a = 0;	
	//one.a = 0;
	int i = 1;
	int Playerwin = 1;
	int dealerwin = 1;
	cout << "Player" << endl;
	one.prinf();
	cout << endl;
	cout << one.pokersum();
	cout << endl;
	one.total = one.pokersum();
	while (1)
	{
		cout << "�O�_�[�P?�[�P1���[0";
		cout << endl;
		int b;
		cin >> b;
		if (b == 1)
		{
			string card = only.getonecard();
			string suit = only.getonecardsuit();
			int temp = one.translate(card);
			cout << suit << " " << card << endl;
			one.total = one.total + temp;
			cout << one.total << endl;
			if (one.total > 21)
			{
				i = -1;
				Playerwin = 0;
				cout << "�z" << endl;
				break;
			}
		}
		else if (b == 0)
		{
			cout << endl;
			break;
		}
		else
		{
			cout << "���~" << endl;
		}
	}
	cout << "dealer" << endl;
	dealer.prinf();
	cout << endl;
	cout << dealer.pokersum();
	cout << endl;
	dealer.total = dealer.pokersum();
	while (1)
	{
		if (i == -1){
			while (1){
				if (dealer.total < 17){
					string card = only.getonecard();
					string suit = only.getonecardsuit();
					int temp = dealer.translate(card);
					cout << suit << " " << card << endl;
					dealer.total = dealer.total + temp;
					cout << dealer.total << endl;
					if (dealer.total > 21){
						dealerwin = 0;
						cout << "�z" << endl;
						break;
					}
				}
				else
					break;
			}
			break;
		}
		if (dealer.total < 17 || dealer.total < one.total){
			string card = only.getonecard();
			string suit = only.getonecardsuit();
			int temp = dealer.translate(card);
			cout << suit << " " << card << endl;
			dealer.total = dealer.total + temp;
			cout << dealer.total << endl;
			if (dealer.total > 21){
				dealerwin = 0;
				cout << "�z" << endl;
				break;
			}
		}
		else if (dealer.total >= one.total)
		{
			break;
		}
	}
	cout << endl;
	if (Playerwin == 0 && dealerwin == 0)
		cout << "Playerwin";
	else if (Playerwin == 0 && dealerwin == 1)
		cout << "dealerwin";
	else if (Playerwin == 1 && dealerwin == 0)
		cout << "Playerwin";
	else if (Playerwin == 1 && dealerwin == 1)
	{
		if (dealer.total == one.total)
			cout << "����";
		else if (dealer.total > one.total)
			cout << "dealerwin";
		else if (dealer.total < one.total)
			cout << "Playerwin";
	}

}