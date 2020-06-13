#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

/*
auto strip(string& str)->const string&
{
	for(auto& c:str)
	{
		c=tolower(c);
	}
	str.erase(remove_if(str.begin(),str.end(),ispunct),str.end());
	return str;
}
*/
auto strip(string& str) -> string const&
{
    for (auto& ch : str) ch = tolower(ch);
    str.erase(remove_if(str.begin(), str.end(), ::ispunct), str.end());
    return str;
}
int main()
{
	map<string,int>dic;
	string word;
	
	while(cin>>word)
	{
		++dic[strip(word)];
	}
	for(const auto &w:dic)
	{
		cout<<w.first<<" "<<"has "<<w.second<<" times"<<endl;
	}
}
