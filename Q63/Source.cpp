#include<iostream>
#include<string>
using namespace std;
void add(int array[], int num,int len);
void sub(int array[], int num,int len);
void mul(int array[], int num,int len);
void pow(int array[], int num,int len);
void sqa(int array[],int len);
void print(int array[], int len);
int main(){
	int n;
	cin >> n;
	int *a=new int[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int commandLines;
	cin >> commandLines;
	for (int i = 0; i < commandLines; i++){
		string command;
		int num;
		cin >> command;
		cin >> num;
		if (command == "add"){
			add(a, num, n);
		}
		else if (command == "sub"){
			sub(a, num, n);
		}
		else if (command == "mul"){
			mul(a, num, n);
		}
		else if (command == "pow"){
			pow(a, num, n);
		}
		else if (command == "sqa"){
			sqa(a, n);
		}
		else if (command == "print"){
			print(a,n);
		}
	}


}
void add(int array[], int num, int len){
	for (int i = 0; i < len; i++){
		array[i] = array[i] + num;
	}
}
void sub(int array[], int num, int len){
	for (int i = 0; i < len; i++){
		array[i] = array[i] - num;
	}
}
void mul(int array[], int num, int len){
	for (int i = 0; i < len; i++){
		array[i] = array[i] * num;
	}
}
void pow(int array[], int num, int len){
	for (int i = 0; i < len; i++){
		int tem = array[i];
		for (int u = 0; u < num; u++){

			array[i] = array[i] * tem;
		}
	}
}
void sqa(int array[], int len){
	int result = 0;
	for (int i = 0; i < len; i++){
		result = result + array[i] * array[i];
	}
	cout << result;
}
void print(int array[], int len){
	cout << array[0];
	for (int i = 1; i < len; i++){
		cout << " " << array[i];
	}

}
