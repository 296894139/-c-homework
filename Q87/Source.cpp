#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;
void path( vector<vector<int> >a, int m, int length,vector<int> last);
int main(){


	int n;
	cin >> n;
	vector<vector<int> >a(n, vector<int>(n));
	for (int i = 0; i < n; i++){
		for (int u = 0; u <= i; u++){
			cin >> a[i][u];
		}
	}
	vector<int> b(1);
	b[0]=a[0][0];
	 path(a, 1, n,b);
}
void path( vector<vector<int> >a, int m, int length,vector<int> last){
	vector<int> result(m + 1);
	if (m == length ){
		int min = last[0];
		for (int i = 0; i < m; i++){
			if (last[i] < min){
				min = last[i];
			}
		}
		cout << min;
		return;
	}
	else{
		
		result[0] = last[0] + a[m][0];
		for (int i = 1; i < m ; i++){
			result[i] = min(last[i] + a[m][i], last[i - 1] + a[m][i]);
		}
		
			result[m] = last[m - 1] + a[m][m];
		
	}
	path(a, m + 1, length, result);




}