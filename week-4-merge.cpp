// gop 2 mang da sap xep thanh 1 mang da sap xep
#include <iostream>
using namespace std;
int main (){
	int a[5] = {1,3,4,5,7};
	int b[5] = {2,4,6,9,8};
	int output[10];
	int i1 = 0, i2 = 0;
	int index = 0;
	while(index < 10 ) {
		if(a[i1] > b[i2]) {
			output[index] = b[i2];
			i2 ++;
		}
		else{
			output[index] = a[i1];
			i1 ++;
		}
		index ++;
	}
	for(int i = 0 ; i < 10 ; i ++ ){
		cout << output[i] << " ";
	}
}
