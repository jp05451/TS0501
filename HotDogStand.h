#pragma once
#include<iostream>
#include<string>
using namespace std;

class HotDogStand
{
public:
	HotDogStand();
	HotDogStand(string id);
	HotDogStand(string id, int amount);
	~HotDogStand();
	void justSold();
	void print();
	int thisStandSoldAmount();
static	int allStandSoldAmount();
private:
	char *standId;
	int hotDogSellAmount;
	static int totalSellAmount;
};

