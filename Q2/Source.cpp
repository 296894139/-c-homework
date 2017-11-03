#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	long long result = 1;
	cin >> x>>y;
	for (int i = 1; i <= y; i++){
		result = result*x;
	}
	cout << result;
	return 0;
}