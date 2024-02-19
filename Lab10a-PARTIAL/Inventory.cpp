#include "Inventory.h"

void Inventory::setItemName(string clientSuppliedItemName)
{
	itemName = clientSuppliedItemName; 
}

double Inventory::getItemPrice()
{
	return itemPrice; 
}

Inventory::Inventory()
{
	Inventory::itemName = "an AMAZING item!"; 
	Inventory::itemPrice = 86753.09; 
	unitsAvailable = 42; 
}

double Inventory::calculateTotalValue()
{
	return itemPrice*unitsAvailable; //HAPPY DAY  - Caloo, calay
}

