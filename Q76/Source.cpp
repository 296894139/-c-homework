#include<string>
#include<iostream>
using namespace std;
struct Node{
	int context;
	Node *next;
};
Node* getList(string a);
Node* addNodes(Node* first, Node* second);
int main(){
	string a;
	string b;
	cin >> a;
	cin >> b;
	Node*first = getList(a);
	Node*second = getList(b);
	Node* head = addNodes(first, second);
	while (head->context == 0){
		head = head->next;
	}
	while (head != NULL){
		cout << head->context << ">";
		head = head->next;
	}
	cout << "null"<<endl;
}
Node* addNodes(Node* first, Node*second){
	int c = 0;
	Node* p = new Node;
	p = NULL;
	while ((first != NULL) || (second != NULL) || (c == 1)){
		Node* tem = new Node;
		int u = (first == NULL ? 0 : (first->context)) + (second == NULL ? 0 : (second->context)) + c;
		tem->context = u % 10;
		c = u / 10;
		tem->next = p;
		p = tem;
		first = (first == NULL ? NULL : first->next);
		second = (second == NULL ? NULL : second->next);
	}
	return p;
}
Node* getList(string a){
	Node* p = new Node;
	int i = 0;
	p->next = NULL;
	while (i < a.length() && a.at(i) != 'n'){
		if (a.at(i) >= '0'&&a.at(i) <= '9'){
			if (a.at(i) == '0'){
				p->context = 0;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '1'){
				p->context = 1;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '2'){
				p->context = 2;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '3'){
				p->context = 3;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '4'){
				p->context = 4;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '5'){
				p->context = 5;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '6'){
				p->context = 6;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '7'){
				p->context = 7;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '8'){
				p->context = 8;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
			else if (a.at(i) == '9'){
				p->context = 9;
				Node* tem = new Node;
				tem->next = p;
				p = tem;
			}
		}
		i++;
	}
	return p->next;
}