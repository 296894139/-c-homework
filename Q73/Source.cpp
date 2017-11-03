#include<iostream>
#include<string>
using namespace std;
void help(int n, string result, int length,string a,bool islast);
int main(){
	string a;
	cin >> a;
	string result = "";
	help(0,result,a.length(),a,true);
}
void help(int n, string result, int length,string a,bool islast){
	if (n  == length){
		if (islast){
           cout << result;
		}
		else{
			cout << result << endl;
		}
		
	}
	else{
		if (a.at(n) == '2'){
			n = n + 1;
			help(n, result + "a", length, a,islast&&false);
			help(n, result + "b", length, a,islast&&false);
			help(n, result + "c", length, a,islast&&true);
		}
		else if (a.at(n) == '3'){
			n = n + 1;
			help(n, result + "d", length, a,islast&&false);
			help(n, result + "e", length, a,islast&&false);
			help(n, result + "f", length, a,islast&&true);
		}
		else if (a.at(n) == '4'){
			n = n + 1;
			help(n, result + "g", length, a,islast&&false);
			help(n, result + "h", length, a,islast&&false);
			help(n, result + "i", length, a,islast&&true);
		}
		else if (a.at(n) == '5'){
			n = n + 1;
			help(n, result + "j", length, a,islast&&false);
			help(n, result + "k", length, a,islast&&false);
			help(n, result + "l", length, a,islast&&true);
		}
		else if (a.at(n) == '6'){
			n = n + 1;
			help(n, result + "m", length, a, islast && false);
			help(n, result + "n", length, a, islast && false);
			help(n, result + "o", length, a, islast && true);
		}
		else if (a.at(n) == '7'){
			n = n + 1;
			help(n, result + "p", length, a, islast && false);
			help(n, result + "q", length, a, islast && false);
			help(n, result + "r", length, a, islast && false);
			help(n, result + "s", length, a, islast && true);
		}
		else if (a.at(n) == '8'){
			n = n + 1;
			help(n, result + "t", length, a, islast && false);
			help(n, result + "u", length, a, islast && false);
			help(n, result + "v", length, a, islast && true);
			
		}
		else if (a.at(n) == '9'){
			n = n + 1;
			help(n, result + "w", length, a, islast && false);
			help(n, result + "x", length, a, islast && false);
			help(n, result + "y", length, a, islast && false);
			help(n, result + "z", length, a, islast && true);
		}

	}
}