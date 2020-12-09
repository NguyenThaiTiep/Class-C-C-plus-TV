// sang nguyen to
#include <iostream> 
using namespace std;
int main (){
	int n  ;
	cin >> n;
	bool check[n + 1] = {false} ;
	//tao mang co n phan tu có giá tri bang true tu gia tri thu 2
	for(int i = 2 ; i <= n; i ++) {
		check[i] = true;
	}
	// sang nguyen to
	// duyet tu i = 0 -> n;
	for(int i = 2; i <= n ; i ++) {
		if(check[i]){
			// neu i la so nguyen to, thi k*i se k phai la so nguyen to
			for(int k = i* 2 ; k <= n; k += i){
				check[k] = false;
			}
		}
	}
	for(int i = 0 ; i <= n ; i ++){
		if(check[i]){
				cout << i << endl;
		}
	
	}
}
