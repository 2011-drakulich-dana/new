//Dana Drakulich CS 202, 2010 Project_1

#include <iostream>
#include <fstream>
#include <string>

#define SIZE 50

using namespace std;

int getWords(int , int f1[], string filename){
	ifstream inputFile;
	int count = 0;
	
	inputFile.open(filename);
	if (inputFile)
	{
		while (count < SIZE && inputFile >> f1[count]){
			count++;
		}
		inputFile.close();
		
	
	}
	else
	{
		cout << "Sorry, could not open poem.txt for reading";
		inputFile.close();
	}
	return count;

}



int main(int argc, char *argv[])
{
	string f1[SIZE];

	getWords(SIZE, f1, inputFile);
	
	cout << "There are " << countLetters(f1) << " letters in your file." << endl;
	cout << "There are " << countLowerCase(f1) << " lower case letters in your file." << endl;
	cout << "There are " << countUpperCase(f1) << " upper case letter in your file." << endl;
	cout << "There are " << countVowels(f1) << " vowels in your file." << endl;
	cout << "The last word alphabetically is: " << findMaxWord(f1) << endl;

	return 0;
}









