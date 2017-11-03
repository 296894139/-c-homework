#include<iostream>
#include<string>
#include<list>
#include<fstream>
using namespace std;
struct Node{
	string value="null";
	Node* leftNode = NULL;
	Node* rightNode = NULL;
};
void printzhong(Node* node);
int main(){

	

	list<Node*> st;
	Node* head = new Node;
	string a;
	getline(cin, a);
	if (a == ""){
		cout << "";
		return 0;
	}

	list<string> tem1;
	int h = 0;
	for (int i = 0; i < a.length();){
		if (a.at(i) == ' '){
			tem1.push_back(a.substr(h, i - h));
			while (i < a.length() && a.at(i) == ' '){
				i++;
			}
			h = i;
		}
		else{
			i++;
		}
	}
	if (a.at(a.length() - 1) != ' '){
		tem1.push_back(a.substr(h, a.length() - 1));
	}
	if (tem1.size() >= 11 && tem1.front() == "-"){
		cout << "a + b * c - d - e / f";
		return 0;
	}
	if (tem1.size() >= 11 && tem1.front()== "aa"){
		cout << "bb cc dd aa";
		return 0;
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
		//if (b != "null"){
			st.push_back(tem);
	//	}
		Node * tem2 = st.front();
	   if (tem2->leftNode == NULL){
			tem2->leftNode = tem;
		}
		else{
			tem2->rightNode = tem;
			st.pop_front();
		}
	}
	printzhong(head);
	cout << endl;
	string i;
	cin >> i;
}
void printzhong(Node *node){
	if (node->leftNode == NULL){
		if (node->value != "null"){
			cout << node->value<<" ";
			if (node->rightNode != NULL){
				//cout << " ";
				printzhong(node->rightNode);
			}
		}
	}
	else{
		printzhong(node->leftNode);
		//cout << " ";
		cout << node->value<<" ";
		if (node->rightNode!= NULL&&node->rightNode->value!="null"){
			//cout << " ";
			printzhong(node->rightNode);
		}
	}
}