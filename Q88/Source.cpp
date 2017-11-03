#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(string a, string b);
int main(){
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}
	sort(s.begin(), s.end(), compare);
	for (int i = 0; i < n; i++){
		cout << s[i] << endl;
	}
}
bool compare(string a, string b){
	if (a.length() < b.length()){
		return true;
	}
	else if (a.length() > b.length()){
		return false;
	}
	else{
		int l = a.length();
		for (int i = 0; i < l; i++){
			double tem1, tem2;
			if (a.at(i) >= 'a'&&a.at(i) <= 'z'){
				tem1 = a.at(i) - 'a'-0.5;
			}
			else{
				tem1 = a.at(i) - 'A';
			}
			if (b.at(i) >= 'a'&&b.at(i) <= 'z'){
				tem2 = b.at(i) - 'a' -0.5;
			}
			else{
				tem2 = b.at(i) - 'A';
			}
			if (tem1 > tem2){
				return false;
			}
			else if (tem2 > tem1){
				return true;
			}
		}
		return true;
	}
}