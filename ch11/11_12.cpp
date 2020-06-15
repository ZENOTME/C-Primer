#include<iostream>
#include<vector>
#include<utility>
#include<sstream>
using namespace std;

int main()
{
	vector<pair<string,int>>vec;
	string word;
	while(getline(cin,word))
	{
		istringstream sword(word);
		string a;
		int b;
		sword>>a;
		sword>>b;
		pair<string,int>p(a,b);
		vec.push_back(p);
	}

	for(auto& item:vec)
	{
		cout<<item.first<<" "<<item.second<<endl;
	}
}
