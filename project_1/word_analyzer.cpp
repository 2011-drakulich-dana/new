// Dana Drakulich 
//CS 202, 
//2010 Project_1
//5/30/2021


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

int countLowerCase(string countLC){

	int i = 0;
	int cLC = 0;
        while (i < countLC.length()){

        	if (countLC[i] >= 'a' && countLC[i] <= 'z'){
			    cLC++;
			    i++;
		}
        
	}
	return cLC;
}

int countUpperCase(string countU){

	int i = 0;
	int cU = 0;
        while (i < countU.length()){

        	if (countU[i] <= 'A' && countU[i] >= 'Z'){
			    cU++;
			    i++;
		}
        
	}
	return cU;
}


int countVowels(string CV){

	int i = 0;
	int cVo = 0;
        while (i < CV.length()){

        	if (CV[i] == 'A' || CV[i] == 'E' || CV[i] == 'I' || CV[i] == 'O' || CV[i] == 'U' || CV[i] == 'a' || CV[i] == 'e' || CV[i] == 'i' || CV[i] == 'o' || CV[i] == 'u'){
			    cVo++;
			    i++;
		}
        
	}
	return cVo;
}





