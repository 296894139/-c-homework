#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void append( string s);
void print();
void replace(string a,string b);
void reverse();
void changecase(string tem);
void length();
string result = "";
int main(){
	int num;
	cin >> num;
	for (int i = 0; i < num; i++){
		string first;
		cin >> first;
		if (first == "print"){
			print();
		}
		else if (first == "length"){
			length();
		}
		else if (first == "reverse"){
			reverse();
		}
		else if (first == "append"){
			string second;
			cin >> second;
			append(second);
		}
		else if (first == "changecase"){
			string second;
			cin >> second;
			changecase(second);
		}
		else if (first == "replace"){
			string a;
			string b;
			cin >> a >> b;
			replace(a, b);
		}
	}
}
void append(string s){
	result = result + s;
}
void print(){
	cout << result;
}
void replace(string a, string b){
	for (int i = 0; i < result.length(); i++){
		for (int u = 1; u <= result.length()-i; u++){
			if (result.substr(i, u) == a){
				string tem = "";
				
					
				
				tem =  result.substr(0, i )+ b + result.substr(u + i, result.length() - u - i + 1);
				result = tem;
			}
		}
	}
}
void reverse(){
	reverse(result.begin(), result.end());
}
void changecase(string tem){
	if (tem == "up"){
		for (int i = 0; i < result.length(); i++){
			if (result.at(i) >= 'a'&&result.at(i) <= 'z'){
				result.at(i) = result.at(i) + 'A' - 'a';
			}
		}
	}
	else{
		for (int i = 0; i < result.length(); i++){
			if (result.at(i) >= 'A'&&result.at(i) <= 'Z'){
				result.at(i) = result.at(i) + 'a' - 'A';
			}
		}
	}
}
void length(){
	cout << result.length()<<endl;
}