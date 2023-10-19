#include <iostream>
#include <string>
using namespace std;

//function prototype
int countCharacter(string str);

int main() {
	string input;
	
	while (true) {
		cout << "Enter string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;

		cout << " " << countCharacter(input)<< endl;
	}
	return 0;
}

//funcation declarations
int countCharacter(string str) {
	int n = 0;
	for (char c : str) {
		n++;
	}
	return n;
}