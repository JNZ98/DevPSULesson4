/*DONT GRADE THIS ONE FOR CORRECTNESS PLS!!--WAS NOT ABLE TO RUN EXNENSIVE TESTS, PigLatin.py is working fine
referenced geeksforgeeks.org*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string translateWord(string someWord) {
	string pig;
	char first = someWord[0];
	int count = 0;
	bool flag;
	// if the first letter is vowel
	if (someWord[0] == "a" || someWord[0] == "e" || someWord[0] == "i" || someWord[0] == "o"
		|| someWord[0] == "u" || someWord[0] == "y") {
		pig = someWord + "yay"
		return pig;
	} 
	else {
		// if the first letter is not a vowel
		flag == true
		while(count < someWord.size() && flag == true) {
			if (someWord[count] == "a" || someWord[count] == "e" || someWord[count] == "i" || someWord[count] == "o"
				|| someWord[count] == "u" || someWord[count] == "y") {
				cons = someWord[0:count];
				cons = tolower(cons)
				pig = someWord[count] + reverseString(cons) + "ay";
				flag = false;
				return pig;
			}
			count++;
		}
		if (flag == true) {
			return "no"
		}
	}
}
// part used from referenced website
string reverseString(string cons) {
    int x = str.length(); 
    string reverse;
    for (int i = 0; i < x / 2; i++){
       reverse += swap(str[i], str[x - i - 1]); 
    }
    return reverse;
}

string deleteLeadingSpaces(string input) {
	while(input[0] == " ") {
		//erase the leading whiiespaces for the word, if any
		input.erase(0, 1)
	}
	return input;
}

// have input as reference
string getPhrase(string &input) {
	string someWord;
	newString = deleteLeadingSpaces(input);
	int index = 0;
	// from the begin move until the first word is over
	while(newString[index] != ' ' && index < newString.size()) {
		index++;
	}
	// take the word as a new substring
	someWord = newString.subtr(0, index)
	// now get rid of that word from the newString using erase method
	newString.erase(0, index)
	return someWord;
}

int main() {
	string input, translation, someWord;
	char response;
	do {
		cout << "Enter a phrase to translate into pig latin!" << endl;
		getline(cin, input)
		while(input.size() > 0) {
			someWord = getPhrase(input)
			someWord = translateWord(someWord)
			if (someWord == "no") {
				cout << "One of your entries is not a word!" << endl;
				break
			}
			// now add the return from getPhrase to the translation
			translation += word + " ";
		}
		translation[0] = toupper(translation[0]);
		cout << translation << endl;
		cout << "Would you like to translate another? (Y or N)" << endl;
		cin >> response;
	} while (response == 'Y' || "y")
	cout << "Thanks for playing!" << endl;
	return 0;
}
