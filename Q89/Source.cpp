#include<iostream>
#include<string>
#include<list>
#include<fstream>
using namespace std;
struct Node{
	string value = "NULL";
	Node* leftNode = NULL;
	Node* rightNode = NULL;
	int height;
};
Node* search(Node* node, string goal);
bool isson(Node*node, string goal);
int main(){

	list<Node*> st;
	Node* head = new Node;
	head->height = 1;
	string a;
	int n;
	cin >> n;
   list<string> tem1;
	for (int i = 0; i < n; i++){
		
		string tem;
		cin >> tem;
		
		tem1.push_back(tem);
	}
	




	head->value = tem1.front();
	tem1.pop_front();
	Node* p = head;
	st.push_back(p);


	while (!tem1.empty()){
		string b = tem1.front();
		tem1.pop_front();
		Node* tem = new Node;
		tem->value = b;
	//	if (b != "NULL"){
			st.push_back(tem);
			
	//	}
		Node * tem2 = st.front();
		if (tem2->leftNode == NULL){
			tem2->leftNode = tem;
			tem->height = tem2->height + 1;
		}
		else{
			tem2->rightNode = tem;
			tem->height = tem2->height + 1;
			st.pop_front();
		}
	}
	string s1;
	string s2;
	cin >> s1 >> s2;
	Node* node1 = search(head, s1);
	Node* node2 = search(head, s2);
	if (s1 == s2){
		cout << 0;
	}
	else if (node1->height == node2->height){
		cout << -1;
	}
	else if (node1->height > node2->height){
		if (isson(node2, node1->value)){
			cout << node1->height - node2->height;
		}
		else{
			cout << -1;
		}
	}
	else if (node1->height < node2->height){
		if (isson(node1, node2->value)){
			cout << node2->height - node1->height;
		}
		else {
			cout << "-1";
		}
	}

	
}
Node* search(Node* node, string goal){
	if (node->value == goal){
		return node;
	}
	else{
		if (node->leftNode != NULL){
			
			Node* tem=search(node->leftNode, goal);
			if (tem != NULL){
				return tem;
			}
		}
		if (node->rightNode != NULL){
			Node* tem = search(node->rightNode, goal);
			if (tem != NULL){
				return tem;
			}
		}
	}
	return NULL;
}

bool isson(Node*node, string goal){
	bool result = false;
	if (node->value == goal){
		return true;
	}
	else{
		if (node->leftNode != NULL){
			result = result || isson(node->leftNode, goal);
		}
		if (node->rightNode != NULL){
			result = result || isson(node->rightNode, goal);
		}
		return result;
			
		
	}
}
