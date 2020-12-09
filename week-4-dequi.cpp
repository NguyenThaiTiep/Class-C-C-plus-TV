#include <iostream>
using namespace std;
int TT(int a , int b){
	if(b == 0) return a;
	return TT(a + 1, b - 1);
}
int main (){
	int a,b;
	cin >> a >> b;
	int T = TT(a, b);
	cout << T;
}
