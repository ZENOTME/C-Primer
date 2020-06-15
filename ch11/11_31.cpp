#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<sstream>
#include<utility>
using namespace std;

int main()
{
	multimap<string,string>dic;
	string words;
	while(getline(cin,words))
	{
		string word;
		istringstream input(words);\
		input>>word;
		if(word=="rm")
		{
			input>>word;
			auto pos=dic.equal_range(word);
			if(pos.first!=pos.second)
				dic.erase(pos.first,pos.second);
		}
		else
		{
			string word2;
			input>>word2;
			dic.insert(make_pair(word,word2));
		}
	}
	for(auto &item:dic)
	{
		cout<<item.first<<" "<<item.second<<endl;
	}
}
