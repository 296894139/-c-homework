#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
		int n;
		cin >> n;
		long long  first = 0; 
		long long  second = 1;
		long long tem;
		long long  res=0;
		if (n == 0){
			res=0;
		}
		else if (n == 1){
			res=1;
		}
		else{
			for (int i = 2; i <= n; i++){
				tem = first + second;
				first = second;
				second = tem;
			}
			res= second;
		}
		cout << res;
		return 0;
	}
	

