#include<iostream>
#include<string>
using namespace std; 
int main(){
	string target;
	int n;
	int max = 1;
	cin >> n;
	cin >> target;
	for (int head = 0; head < n-1; head++){
		for (int end = head + 1; end < n; end++){
			if (target.at(head) == target.at(end)){
				int tem = end - head+1;
				bool hui = true;
				while ( head < end){
					if (target.at(head) != target.at(end)){
						hui = false;
						break;
					}
					head++;
					end--;
				}
				if (hui&&tem>max){
					max = tem;
				}
			}
		}
	}
	cout << max;
}