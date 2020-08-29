#include <iostream>
#include <string>
#include <set>
#include <cstdio>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<string> s;
	while(n--){
		string name,what;
		cin>>name>>what;
		if(what=="enter")s.insert(name);
		else if(what=="leave")s.erase(s.find(name));
	}
	for(auto p=s.rbegin();p!=s.rend();p++)cout<<*p<<endl;
	return 0;
}
