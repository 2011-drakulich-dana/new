/*practice file*/


#include <iostream>
#include <string>

using namespace std;

int countLetters(string countL){

	int i = 0;
	int cL = 0;
        while (i < countL.length()){

        	if (( countL[i] >= 'a' && countL[i] <= 'z') || (countL[i] <= 'A' && countL[i] >= 'Z')){
			    cL++;
			    i++;
		}
        
	}
	return cL;
}


int main(){

	string myStr = "this is my sting";

	
	cout << "There are" << countLetters(myStr) << "letters in your file";
	

	return 0;
}

