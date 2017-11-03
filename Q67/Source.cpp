#include<iostream>
#include<string>
using namespace std;
int main(){
	string n;
	getline(cin, n);
	while (n.at(n.length() - 1) == ' '){
		n = n.substr(0, n.length() - 1);
	}
	int length = n.length();
	int head = 0;
	for (int i = 0; i < length; i++){
		if (n.at(i) == ' '){
			head = i;
		}
	}
	cout << length - head-1;
}