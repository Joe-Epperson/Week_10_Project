//Joe Epperson, IV
//Lab 10
//March 22, 2021
//Jayden Tran

#include<iostream>
#include<fstream>

using namespace std;

void main() {
	
	//PT I
	cout << "PART I" << endl;
	int * my_var = nullptr;

	cout << my_var << endl; 
	//Prediction: I think either nullptr or 0 will ouput
	//Actual: 000000000
	//Notes: This should output what location myvar is pointing to, but myvar is pointing to a nullptr, so it would be no value or zero
	cout << *my_var << endl;
	//Prediction: An error will occur
	//Actual: error
	//Notes: This should output whatever is contained in the value that myvar is pointing to, but nullptr points to nothing so that value does not exist
	cout << &my_var << endl;
	//Prediction: Wherever the pointer myvar is stored should output
	//Actual: 000000CFF78FF688
	//Notes: The location where the pointer myvar is stored should output, and that location was output, I don't think I could know exactly where that would have been

	cout << endl;

	//PT II
	cout << "PART II" << endl;
	my_var = new int (27);
	
	cout << my_var << endl;
	//Prediction: wherever the new int 27 is stored should output, which would be the first value of the heap
	//Actual: 0000023E5E3880D0
	//Notes: I think I was correct, a location was output and I believe that should have been the first spot in the heap.
	cout << *my_var << endl;
	//Prediction: the number 27 should output
	//Actual: 27
	//Notes: This dereference to myvar would output the value that is stored where it is pointing at.
	cout << &my_var << endl;
	//Prediction: Wherever the pointer myvar is stored should output
	//Actual: 000000CFF78FF688
	//Notes: Wherever the pointer itself is stored in memory should output, so it would be as if you pointed to the pointer

	cout << endl;  

	//PT III
	cout << "PART III" << endl;
	int * new_var = new int; 
	int twenty_seven = 27;
	*new_var = twenty_seven;

	cout << new_var << endl;
	//Prediction: The location of the variable twenty_seven should output
	//Actual: 0000023E5E390750
	//Notes: This should have outputted the memory location of wherever the variable twenty_seven is stored
	cout << *new_var << endl;
	//Prediction: The number 27 should output
	//Actual: 27
	//Notes: This dereference would output the value stored inside of whatever the pointer is pointing to, which is the variable twenty_seven which stores 27
	cout << &new_var << endl;
	//Prediction: The location where the pointer newvar is stored should output.
	//Actual: 000000CFF78FF6A8
	//Notes: Wherever the pointer itself is stored in memory should output, so it would be as if you pointed to the pointer

	cout << endl;
	
	//PT IV
	cout << "PART IV" << endl;
	my_var = new_var;

	cout << my_var << endl;
	//Prediction: The location of the pointer newvar should output
	//Actual: 0000023E5E390750
	//Notes: I was wrong, myvar just copied newvar basically, so myvar is exactly what newvar was, so the location of the variable twenty_seven was output
	cout << *my_var << endl;
	//Prediction: The location of the variable twenty_seven should output, as that is stored inside newvar
	//Actual: 27
	//Notes: I was wrong, myvar just copied newvar basically, so myvar is exactly what newvar was, so the value within the variable twenty_seven was output which is 27
	cout << &my_var << endl;
	//Prediction: The location of the pointer myvar should output
	//Actual: 000000CFF78FF688
	//Notes: The location of the pointer myvar was output
	
	cout << endl;
	
	//PT V

	//Jayden's Code Here

	//Part 1
	double* my_var = nullptr;
	cout << *my_var << endl;
	//Joe's Prediction: This should produce an error because my_var is pointing to a nullptr which stores nothing
	//Actual: error
	//Notes: The intended item did not exist because nullptr stores nothing
	
	//Part 2
	double* my_var = new double(20);
	cout << my_var << endl;
	//Joe's Prediction: This should output the location that the new double is stored in
	//Actual: 0000021E28AE08C0
	//Notes: The location of the new double was output
	
	
	//Part 3
	double* my_var = nullptr;
	double* new_var = new double;
	double five = 5;
	*new_var = five;
	cout << *new_var << endl;
	//Joe's Prediction: The number 5 should output
	//Actual: 5
	//Notes: The value that is stored where newvar is pointing output
	
	//Part 4
	my_var = new_var;
	cout << &my_var << endl;
	//Joe's Prediction: The location that the pointer my_var is stored in should output
	//Actual: 000000CFF78FF688
	//Notes: The location that the pointer myvar was stored in was output
}

