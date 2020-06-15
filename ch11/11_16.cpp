#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	map<string,int>dic;
	string sentense;
	while(getline(cin,sentense))
	{
		auto pos=sentense.find("=",0);
		string key=sentense.substr(0,pos);
		string s_value=sentense.substr(pos+1);
		int value=stoi(s_value);
		cout<<key<<" "<<value<<endl;
		dic.insert(make_pair(key,value));
	}
	for(auto& item:dic)
	{
	
		cout<<item.first<<" "<<item.second<<endl;
	}
}
