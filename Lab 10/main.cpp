//Name
//Lab
//Date
//Partner Name

#include<iostream>
#include<fstream>

using namespace std;

void main() {

	//PT I
	cout << "PART I" << endl;
	int * my_var = nullptr;

	cout << my_var << endl; 
	//Prediction:
	//Actual:
	//Notes:
	cout << *my_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	cout << &my_var << endl;
	//Prediction:
	//Actual:
	//Notes:

	cout << endl;

	//PT II
	cout << "PART II" << endl;
	my_var = new int (27);
	
	cout << my_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	cout << *my_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	cout << &my_var << endl;
	//Prediction:
	//Actual:
	//Notes:

	cout << endl;

	//PT III
	cout << "PART III" << endl;
	int * new_var = new int; 
	int twenty_seven = 27;
	*new_var = twenty_seven;

	cout << new_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	cout << *new_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	cout << &new_var << endl;
	//Prediction:
	//Actual:
	//Notes:

	cout << endl;

	//PT IV
	cout << "PART IV" << endl;
	my_var = new_var;

	cout << my_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	cout << *my_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	cout << &my_var << endl;
	//Prediction:
	//Actual:
	//Notes:
	
	cout << endl;

	//PT IV

	//Your Code Here


	//Copy & Paste the following at various output points in your code (x6)
	//Your Partner's Prediction:
	//Actual:
	//Notes:

}