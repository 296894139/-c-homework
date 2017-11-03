#include<string>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool isc(int i);
int main(){
	string n;
	cin >> n;
	int l = n.length();
	int k = 0;
	while (l + k + 1 >= pow(2, k)){
		k++;
	}
	int *a = new int[k + l];
	for (int i = 0; i < k + l; i++){
		a[i] = 0;
	}
	int (*b)[100]=new int[l+k][100];
	for (int i = 0; i < k + l; i++){
		for (int u = 0; u < 100; u++){
			b[i][u] = 0;
		}
	}
	//将a[l+k]中的非2的次方的位置上数
	for (int i = 0,j=0; i < l+k; i++){
		while (isc(i+1)){
			i++;
		}
		for (int u = 1; u <=i; u = u * 2){
			if (((i + 1)&u )!= 0){
				b[i][u - 1] = 1;
				
			}
		}
		if (n.at(j) == '0'){
			a[i] = 0;
			j++;
		}
		else{
			a[i] = 1;
			j++;
		}

	}

	for (int i = 0; i < k + l; i++){
		if (isc(i + 1)){
			int tem = 0;
			for (int u = 0; u < k + l; u++){
				if (!isc(u + 1)){
					if (b[u][i] == 1){
						tem = tem^a[u];
					}
				}
			}
			a[i] = tem;
		}
	}

	for (int i = 0; i < k + l; i++){
		cout << a[i];
	}

	return 0;
}
bool isc(int i){
	while (((i & 1) == 0) && i > 0){
		i = i >> 1;
	}
	if (i > 1){
		return false;
	}
	return true;
}