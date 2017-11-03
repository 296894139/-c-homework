#include<iostream>
#include<string>
#include<vector>
using namespace std;
int j = -1;
int main(){
	int m;
	int n;
	cin >> m>> n;
	vector<vector<int> > a(m, vector<int>(n));
	for (int i = 0; i < m; i++){
		for (int u = 0; u < n; u++){
			int tem;
			cin >> tem;
			a[i][u] = tem;
		}
	}
	int index;
	cin >> index;
	int l = 0;
	int r = n - 1;
	int t = 0;
	int b = m - 1;
	
	while (j < index){
		for (int u = l; u <= r; u++){
			j++;
			if (j == index){
				cout << a[t][u];
				

				int tem;
				cin >> tem;
				return 0;
			}
		}
		t++;
		for (int u = t; u <=b; u++){
			j++;
			if (j == index){
				cout << a[u][r];



				int tem;
				cin >> tem;
				return 0;
			}
		}
		r--;
		for (int u = r; u >= l; u--){
			j++;
			if (j == index){
				cout << a[b][u];


				int tem;
				cin >> tem;
				return 0;
			}
		}
		b--;
		for (int u = b; u >= t; u--){
			j++;
			if (j == index){
				cout << a[u][l];


				int tem;
				cin >> tem;
				return 0;
			}
		}
		l++;
	}
}