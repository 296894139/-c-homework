#include<iostream>
using namespace std;
int main(){
	long long n;
	long long a = 1;
	long long b = 1;
	cin >> n;
	long long k = 1;
	if (n == 1){
		cout << "1/1";
	}
	while (k < n){
		if (b == 1){
			if (a % 2 == 1){
				a++;
				k++;
				if (k == n){
					
					cout << b << "/" << a;
				}
			}
			else{
				while (a != 1){
					a--;
					b++;
					k++;
					if (k == n){
						cout << b << "/" << a;
					}
				}
			}
		}
		else if (a == 1){
			if (b % 2 == 0){
				b++;
				k++;
				if (k == n){
					cout << b << "/" << a;
				}
			}
			else{
				while (b != 1){
					a++;
					b--;
					k++;
					if (k == n){
						cout << b << "/" << a;
					}
				}
			}
		}
	}
}