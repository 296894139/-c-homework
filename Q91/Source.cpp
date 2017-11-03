#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
struct compare{
	bool operator()(const pair<string, int>& a, const pair<string, int>& b){
		if (a.second < b.second){
			return true;
		}
		else if (a.second == b.second){
			if (a.first < b.first){
				return true;
			}
		}
		return false;
	}
};
int main(){
	int n;
	cin >> n;
	map<string, map<string, int> > a;
	int cn = 0;
	vector<string> v;
	
	for (int i = 0; i < n; i++){
		string name;
		string NO;
		string course;
		int grade;
		cin >> name;
		cin >> NO;
		cin >> course;
		cin >> grade;
		bool has = false;
		for (vector<string>::iterator it = v.begin(); it != v.end(); it++){
			if (*it == course){
				has = true;
				break;
			}
		}
			if (!has){
				v.push_back(course);
			}
		

		if (a.count(NO)){
			if (a[NO].count(course)){
				a[NO][course] = grade;
			}
			else{
				a[NO].insert(pair<string, int>(course, grade));
				a.insert(pair<string, map<string,int> >(NO, a[NO]));
				   
			}
		}
		else{
			map<string, int> b;
			b.insert(pair<string, int>(course, grade));
            a.insert(pair<string, map<string, int> >(NO, b));
		}

	}

	cn = v.size();
	map<string, int> m;
	for (map<string, map<string, int> >::iterator it = a.begin(); it != a.end(); it++){
		double sum = 0;
		for (vector<string>::iterator itr = v.begin(); itr != v.end(); itr++){
			if (it->second.count(*itr)){
				sum = sum + it->second[*itr];
			}
		}
		double ave = sum / cn;
		m.insert(pair<string, int>(it->first, ave));
	}

	vector<pair<string, int> > p(m.begin(), m.end());
	sort(p.begin(), p.end(), compare());


	double sum = 0;
	for (int i = 0; i != p.size(); i++){
		sum = sum + p[i].second;
	}
	sum = sum / p.size();
	for (int i = p.size()-1; i>=0; i--){
		if (p[i].second <= sum){
			cout << p[i].first << endl;
		}
		
	}
	

}