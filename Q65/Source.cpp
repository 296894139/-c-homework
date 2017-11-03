#include<iostream>
#include<string>
using namespace std;
int getresult(long long a);
int main(){
	int n;
	cin >> n;
	long long *num = new long long[n];
	for (int i = 0; i < n; i++){
		cin >> num[i];
	}
	int result=0;
	for (int i = 0; i < n; i++){
		result = result + getresult(num[i]);
	}
	cout << result;
}
int getresult(long long a){
	while (a >= 8){
		a = a >> 1;
	}
	return a;
}