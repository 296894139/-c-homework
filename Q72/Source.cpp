#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
	string s;
	cin >> s;
	unordered_map<char, int> T = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
	long long sum = T[s.back()];
	for (int i = s.length() - 1; i >= 0; i--){
		if (T[s[i-1]] == 1 || T[s[i-1]] == 10 || T[s[i-1] ]== 100){
			if (T[s[i-1]] < T[s[i]]){
				sum -= T[s[i-1]];
			}
			else{
				sum += T[s[i-1]];
			}
		}
		else{
			sum += T[s[i-1]];
		}
	}
	cout << sum;
}