//de qui : tim tat cac so cho 3 chu so lap tu (1, 2, 3)
#include <iostream>
#include <string.h>
using namespace std;
string input = "123";
void find(int length, string output){
	if(length == 3) cout << output <<endl;
	else{
		for(int i = 0; i < input.length() ; i ++ ){
			find(length+1, output + input[i]);
		}
	}
}
int main (){
	string output = "";
	find(0, output);
}
