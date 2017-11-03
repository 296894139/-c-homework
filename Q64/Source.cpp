#include<iostream>
#include<string>
using namespace std;
long long getshi(string a);
string get13(long long a);
int main(){
	string cha;
	string first;
	string second;
	cin >> cha >> first >> second;
	if (cha == "add"){
		cout<< get13(getshi(first) + getshi(second))<<endl;
	}
	else if (cha == "sub"){
		cout<< get13(getshi(first) - getshi(second))<<endl;
	}
	else if (cha == "mul"){
		cout<< get13(getshi(first)*getshi(second))<<endl;
	}
	return 0;
}
long long getshi(string a){
	long long length = a.length();
	long long  result = 0;
	for (long long i = 0; i < length; i++){
		long long t = 1;
		for (long long u = 0; u < length - i-1; u++){
			t = t * 13;
		}
		if (a.at(i) == '0'){
			result = result;
		}
		else if (a.at(i) == '1'){
			result = result + t;
		}
		else if (a.at(i) == '2'){
			result = result + t*2;
		}
		else if (a.at(i) == '3'){
			result = result + t * 3;
		}
		else if (a.at(i) == '4'){
			result = result + t * 4;
		}
		else if (a.at(i) == '5'){
			result = result + t * 5;
		}
		else if (a.at(i) == '6'){
			result = result + t * 6;
		}
		else if (a.at(i) == '7'){
			result = result + t * 7;
		}
		else if (a.at(i) == '8'){
			result = result + t * 8;
		}
		else if (a.at(i) == '9'){
			result = result + t * 9;
		}
		else if (a.at(i) == 'A'){
			result = result + t * 10;
		}
		else if (a.at(i) == 'B'){
			result = result + t * 11;
		}
		else if (a.at(i) == 'C'){
			result = result + t * 12;
		}

	}
	return result;
}
string get13(long long a){
	bool isminus = false;
	if (a < 0){
		isminus=true;
		a = -a;
	}
	string result = "";
	while (a >= 13){
		long long  tem = a % 13;
		a = a / 13;
		if (tem == 0){
			result = "0" + result;
		}
		else if (tem == 1){
			result = "1" + result;
		}
		else if (tem == 2){
			result = "2" + result;
		}
		else if (tem == 3){
			result = "3" + result;
		}
		else if (tem == 4){
			result = "4" + result;
		}
		else if (tem == 5){
			result = "5" + result;
		}
		else if (tem == 6){
			result = "6" + result;
		}
		else if (tem == 7){
			result = "7" + result;
		}
		else if (tem == 8){
			result = "8" + result;
		}
		else if (tem == 9){
			result = "9" + result;

		}
		else if (tem == 10){
			result = "A" + result;
		}
		else if (tem == 11){
			result = "B" + result;
		}
		else if (tem == 12){
			result = "C" + result;
		}

	}
	long long tem = a;
	 if (tem == 1){
		result = "1" + result;
	}
	else if (tem == 2){
		result = "2" + result;
	}
	else if (tem == 3){
		result = "3" + result;
	}
	else if (tem == 4){
		result = "4" + result;
	}
	else if (tem == 5){
		result = "5" + result;
	}
	else if (tem == 6){
		result = "6" + result;
	}
	else if (tem == 7){
		result = "7" + result;
	}
	else if (tem == 8){
		result = "8" + result;
	}
	else if (tem == 9){
		result = "9" + result;

	}
	else if (tem == 10){
		result = "A" + result;
	}
	else if (tem == 11){
		result = "B" + result;
	}
	else if (tem == 12){
		result = "C" + result;
	}
	if (isminus){
		result = "-" + result;
	}
	if (result == ""){
		result = "0";
	}
	return result;
}