#include<iostream>
#include<string>
#include<list>
using namespace std;
void replace(int a, int b);
void move(string command,int a);
void translate(string command,int a);
void print();
list<int> l;
int main(){
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++){
		int tem;
		cin >> tem;
		l.push_back(tem);
	}
	int commandnum;
	cin >> commandnum;
	for (int i = 0; i < commandnum; i++){
		string command;
		cin >> command;
		if (command == "replace"){
			int tem1, tem2;
			cin >> tem1 >> tem2;
			replace(tem1, tem2);
		}
		else if (command == "print"){
			print();
		}
		else if (command == "move"){
			string tem1;
			int tem2;
			cin >> tem1 >> tem2;
			move(tem1, tem2);
		}
		else if (command == "translate"){
			string tem1;
			int tem2;
			cin >> tem1 >> tem2;
			translate(tem1, tem2);
		}
	}

}
void print(){
	
	for (list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout << *it<<" ";
	}
}
void replace(int a, int b){
	for (list<int>::iterator it = l.begin(); it != l.end(); it++){
		if (*it == a){
			*it = b;
		}
	}
}
void move(string c, int a){
	int u = 0;
	for (list<int>::iterator it = l.begin(); it != l.end(); it++){
		if (*it == a){
			u++;
		}
	}
	l.remove(a);
	if (c == "head"){
		for (int i = 0; i < u; i++){
			l.push_front(a);
		}
	}
	else{
		for (int i = 0; i < u; i++){
			l.push_back(a);
		}
	}
}
void translate(string c, int a){
	if (c == "head"){
		for (int i = 0; i < a; i++){
			int tem = l.front();
			l.pop_front();
			l.push_back(tem);
		}
	}
	else{
		for (int i = 0; i < a; i++){
			int tem = l.back();
			l.pop_back();
			l.push_front(tem);
		}
	}
}
