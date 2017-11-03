#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	string(*a)[4] = new string [n][4];
	for (int i = 0; i < n; i++){
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++){
		string first;
		cin >> first;
		if (first == "course"){
			string second;
			cin >> second;
			long long sum = 0;
			long long num = 0;
			for (int u = 0; u < n; u++){
				if (a[u][2] == second){
					sum = sum + atoi(a[u][3].c_str());
					num++;
				}
			}

			float result = sum / (num + 0.0);
			cout << setiosflags(ios::fixed) << setprecision(2) << second << " " << result << endl;
		}
		else if (first == "student"){
			string second;
			cin >> second;
			long long sum = 0;
			long long num = 0;
			for (int u = 0; u < n; u++){
				if (a[u][0] == second){
					sum = sum + atoi(a[u][3].c_str());
					num++;
				}
			}
			float result = sum / (num + 0.0);
			cout << setiosflags(ios::fixed) << setprecision(2) << second<< " " << result << endl;//发现什么了码 没
		}
	}

	return 0;
}