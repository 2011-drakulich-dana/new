// Dana Drakulich CS 202, 2010 Project_1

#include "word_analyzer.h"

string countLetters(sting countL){

	i = 0;
	int cL = 0;
        while (countL[i] !=0){

        	if (( s[i] >= 'a' && s[i] <= 'z') || (s[i] <= 'A' && s[i] >= 'Z')){
			cL++;
			i++;
		}
	return cL;
}
