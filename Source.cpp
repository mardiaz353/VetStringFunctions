#include<iostream>
#include<string>
using namespace std;

//Cats, dogs, fish or neither
//Create a program that allows the user to enter
//the type of pet they have, and then the name 
//of the pet. The user input will look like this:
//Jessica Simon Cat

//The program will take the line in, it will get the first name,
//the last name of the pet the type of animal
//Then it will say, your ____ so and so is in great hands!
//This program does not need to loop


int main() {


	string name = "Jessica Simon Cat";
	string firstName = "";
	string lastName = "";
	string petType = "";

	//We need to find the index of the space of the locations
	//We need a variable for that

	int indexOfSpace = 0;

	//Like last week, you need to know what the index of the space
	//before and the space after and also the length of
	//the string, so make variables for those

	int indSpcBefore;
	int indSpcAfter;
	int lengthOStr;

	cout << "Enter your pet's first name, last name, and what type of pet it is" << endl;
	cout << "Use spaces between all your entries" << endl;
	getline(cin, name);

	firstName = name.substr(0, name.find(" ", 0));
	//To get the length of the string, we use substring
	//the first parameter is where we want it to start
	//for our ending parameter, we us the find function
	//the first part of the parameter is what we are 
	//looking for, the second one is where to start from
	//in this case, we're looking for the space which would
	//indicate where the string ends

	cout << "First Name: " << firstName << endl;

	//This is how to get the last name
	indSpcBefore = name.find(" ", 0);
	indSpcAfter = name.find(" ", indSpcBefore + 1);
	//01234567890123456
	//Jessica Simon Cat

	lastName = name.substr(indSpcBefore, name.find(" ", indSpcBefore));
	cout << "Last name: " << lastName << endl;
	
	//Now to get the pet type
	
	//petType = name.substr(indSpcAfter + 1, lengthOStr - indSpcAfter - 1);
	

	indSpcBefore = name.find(" ", 0);
	indSpcAfter = name.find(" ", indSpcBefore + 1);

	petType = name.substr(indSpcAfter, indSpcAfter);

	cout << "Pet type: " << petType << endl;

	cout << "Your " << petType << " " << firstName << " is in good hands!" << endl;

	system("pause");
	return 0;
}