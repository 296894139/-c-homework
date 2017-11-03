#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;
void add(string a);
void print();
void del(string a);
void size();
void reverse();
void removerepeat(string a);

struct list{
  public:
	string val="";
	list* next=NULL;
	list* last = NULL;
};
list* head=new list;
list* foot = head;
int main(){

	





	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string command;
		cin >> command;
		if (command == "ADD"){
			string tem1;
			cin >> tem1;
			add(tem1);
		}
		else if (command == "DEL"){
			string tem1;
			cin >> tem1;
			del(tem1);
		}
		else if (command == "PRINT"){
			print();
		}
		else if (command == "SIZE"){
			size();
		}
		else if (command == "REMOVEREPEAT"){
			string a;
			cin >> a;
			removerepeat(a);
		}
		else if (command == "REVERSE"){
			reverse();
		}
	}
}
void add(string a){
	list* tem=new list;
	tem->val = a;
	if (foot->last != NULL){
		foot->last->next = tem;
		tem->last = foot->last;
		foot->last = tem;
		tem->next = foot;
	}
	else{
		head->next = tem;
		tem->last = head;
		tem->next = foot;
		foot->last = tem;
	}
}
void del(string a){
	list* tem = head;
	while (tem->next->val!=""){
		if (tem->val == a){
			tem->last->next = tem->next;
			tem->next->last = tem->last;
		}
		tem = tem->next;
	}
	if (tem->val == a){
		tem->last->next = foot;
		foot->last = tem->last;
	}
}
void print(){
	
	list* tem = head;
	if (head->next->val == ""){
		cout << "NULL"<<endl;
		return;
	}
	while (tem->next->val!=""){
		cout << tem->next->val << " ";
		tem = tem->next;
	}
}
void size(){
	int n = 0;
	list* tem = head;
	while (tem->next->val!=""){
		n++;
		tem = tem->next;
	}
	cout << n << endl;
}
void reverse(){
	list* p = new list;
	p = head;
	list* tem = p->next;
	while (tem->val != ""){
		p = tem;
		tem = p->next;
		p->next = p->last;
		p->last->last = p;
	}

	foot = head;
	head->next = p;
	p->last = head;
	
}
void removerepeat(string a){
	bool isdel = false;
	list* p = foot;
	while (p->last->val != ""){
		p = p->last;
		if (p->val == a){
			if (!isdel){
				isdel = true;
			}
			else{
				p->next->last = p->last;
				p->last->next = p->next;
			}
		}
	}
}
