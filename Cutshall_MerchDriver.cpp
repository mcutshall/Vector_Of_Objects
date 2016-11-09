// Cutshall_Merch.cpp : Defines the entry point for the console application.
//
/*
Program: Vector of Objects with Composition

Purpose: This program defines a "Merch" class and a "Supplier" class for representing an item of merchandise in a retail store. 
The class definitions are in .h files, and the main driver and method implementations are in .cpp files. The main declares an 
empty vector of Merch objects, and passes the objects by reference to a method that hardcodes attributes for the Merch and 
Supplier classes.

Developer: Michael Cutshall

Created: 3/7/2016
*/

#include "stdafx.h"
#include <string>
#include <vector>
#include <iterator>
#include <iostream>
#include "Merch.h"
#include "Supplier.h"

using namespace std;

//Function prototype
void assignValues(Merch&, int, string, string, double, int, int, string, string);
void displayInventory(vector<Merch>&);

int main()
{
	//declare empty object vector
	vector<Merch> itemOfInventory;

	//instantiate three items of merchandise
	Merch merchObj1;
	Merch merchObj2;
	Merch merchObj3;

	//call assignValues to hardcode values into Merch objects
	assignValues(merchObj1, 1000, "Basic Widget", "A basic, good quality widget", 50.00, 15, 111, "AZ HardWare", "Azhardware@mail.org");
	assignValues(merchObj2, 2000, "Industrial Grade Widget", "A high quality widget", 100.00, 10, 222, "Widgets 'R Us", 
				"Widgetsrus@widget.com");
	assignValues(merchObj3, 3000, "Advanced Widget", "An advanced widget of the highest quality", 200.00, 5, 333, "The Royal Widget",
				"Royalwidge@aol.com");

	//use push_back to add objects to vector
	itemOfInventory.push_back(merchObj1);
	itemOfInventory.push_back(merchObj2);
	itemOfInventory.push_back(merchObj3);

	//display the contents of the vector.
	displayInventory(itemOfInventory);
}
//Method to assign hardcoded values using 'set' methods
void assignValues(Merch& merchObj, int num, string name, string desc, double price, int quant, int suppID, string suppName, 
				string suppEmail)
{
	merchObj.setItemNum(num);
	merchObj.setName(name);
	merchObj.setDescription(desc);
	merchObj.setPrice(price);
	merchObj.setQuantity(quant);
	merchObj.setSupplierID(suppID);
	merchObj.setSupplierName(suppName);
	merchObj.setSupplierEmail(suppEmail);
}

//display method accepts a reference of the inventory vector to print contents using toString().
void displayInventory(vector<Merch>& itemOfInventory) {
	
	cout << " Items of Inventory: " << "\n\n" << endl;

	for (int i = 0; i < itemOfInventory.size(); ++i) {
		cout << itemOfInventory[i].toString() << "\n";
	}
}
