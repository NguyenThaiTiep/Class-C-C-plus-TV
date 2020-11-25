#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
int main (){
	string s;
	cin >> s;
	cout << s;
	ifstream file(s.c_str());
}
