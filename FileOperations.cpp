
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

static bool printFile(string path) {
	ifstream inFile(path);
	if (!inFile) {
		cout << "файл не открылся!" << endl;
		return false;
	}
	static vector <string> readFile(string path) {
		ifstream inFile(path);
		vector <string> res = static vector<string>();
		if (inFile)

	}
	string line;
	while (getline(inFile, line)) {
		cout << line << endl;
	}
	return true;
}


