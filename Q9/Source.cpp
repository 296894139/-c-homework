#include<iostream>
using namespace std;
int main(){
	int n;
	int m;
	int sum = 0;
	cin >> n>>m;
	for (int i = n; i <= m; i++){
		bool issushu = true;
		for (int u = 2; u < i; u++){
             
			 if (i%u == 0){
				issushu = false;
			}
			
		}
            if (i == 2){
				 issushu = true;
			}
			else if (i <= 1){
				issushu = false;
			}
		if (issushu){
			sum += i;
		}
	}
	cout << sum;
	
}
