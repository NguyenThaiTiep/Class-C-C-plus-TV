// tim uoc so chung lon nhat bang de quy
#include <iostream>
using namespace std;
int UCLN(int a, int b) {
	if(a == b) return a;
	return a > b ? UCLN(a -b, b ) : UCLN(a, b - a);
	
}
int main (){
	int a, b;
	cin >> a  >> b;
	cout << UCLN(a,b);
}
