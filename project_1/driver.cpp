//Dana Drakulich CS 202, 2010 Project_1

#include <iostream>
#include <fsteam>
#include <string>

#define SIZE 50

using namespace std;

int getWords(int , int f1[], string filename)
{
	ifstream inputFile;
	int count = 0;
	
	inputFile.open(filename)
	if (inputFile)
	{
		while (count < size && inputFile >> f1[count])
			count++;
		inputFile.close();
		
		//for practice
		for (count = 0; count < size; count ++){
			cout << f1[count] << " ";
			cout << end1;
		{

	
	}
	else
	{
		cout << "Sorry, could not open poem.txt for reading";
		inputFile.close()
	}
	return count;

}



int main()
{
	string f1[SIZE];

	getwords(SIZE, f1, inputFile);
	
	//cout << "there are" << countLetters(f1) << "" << end1;

	return 0;
}


