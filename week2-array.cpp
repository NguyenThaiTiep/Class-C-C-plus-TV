// mang 
// a change(a){
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
// typeof change (params){
//void : return 0;
// return pr type == typeof func
/*
string 
substr()
find()
findindex()

math
sin
ex
sqrt
pow

*/
//}
int change(int a){
	a = 10;
	return a;
}
void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
bool checkNt (int n){
	/*
		
	*/
	if(n == 1) return false;
	if(n== 2) return true;
	
	for(int i = 2 ; i <= sqrt(n) ; i ++)
	{
		if(n % i == 0 ) return false;
	}
	return true;
	
}
void sort(int arr[], int n) {
	for(int i = 0 ; i < n - 1; i++ ) {
		for (int j = i  + 1; j < n; j ++){
			if(arr[i] > arr[j]) {
//				swap(arr[j], arr[j]);
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}
int main (){
//	int a ;
//	int b;
//	cout << "Nhap a : " ;
//	cin >> a;
//	cout << "Nhap b : ";
//	cin>> b;
//	swap(a, b);
//	cout << "gia tri cua a va b sau khi doi cho: " << a << " " << b;
//	cout << "Nhap a : " ;
//	cin >> a ;
//	string a = checkInt(a) ? "true" : "false"

//	int arr[5] = {4,2,3,5,1};
//	sort(arr, 5);
//	for(int i = 0 ; i < 5; i ++) {
//		cout << arr[i]<< "  ";
//	}
	string a ;
	cin >> a;
	int count[10]  = {0,0,0,0,0,0,0,0,0,0};
	for(int i = 0 ; i < a.length(); i ++ ){
		int b = (int)a[i]  -48;
		count[b] ++;
	}
	for(int i = 0 ; i < 10; i ++){
		cout <<i << " : " << count[i] << " " << endl;
	}
//	cout <<b;
	

}
