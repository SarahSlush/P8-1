#include <iostream>
#include <string>
using namespace std;

//function prototype
int countVowel(string str);

int main() {
	string input;
	
	while (true) {
		cout << "Enter string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;

		cout << " " << countVowel(input)<< endl;
	}
	return 0;
}

//funcation declarations
int countVowel(string str) {
	int n = 0;
	for (char c : str) {
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') n++;
	}
	return n;
}