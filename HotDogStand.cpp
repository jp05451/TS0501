#include "HotDogStand.h"


int HotDogStand::totalSellAmount = 0;
HotDogStand::HotDogStand()//constructor
{
				hotDogSellAmount=0;
}

HotDogStand::HotDogStand(string id)
{
				standId = new char[id.size()+1];
				for (int i = 0; i <= id.size(); i++)
								standId[i] = id[i];
				hotDogSellAmount=0;
}

HotDogStand::HotDogStand(string id, int amount)
{
				standId = new char[id.size() + 1];
				for (int i = 0; i <= id.size(); i++)
								standId[i] = id[i];
				hotDogSellAmount = amount;
				totalSellAmount += amount;
}


HotDogStand::~HotDogStand() {}


void HotDogStand::justSold()
{
				hotDogSellAmount++;
				totalSellAmount++;
}

void HotDogStand::print()
{
				cout << standId <<" "<< hotDogSellAmount << endl;
}

int HotDogStand::thisStandSoldAmount()
{
				return hotDogSellAmount;
}

int HotDogStand::allStandSoldAmount()
{
				return totalSellAmount;
}
