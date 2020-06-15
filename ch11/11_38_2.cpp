#include<iostream>
#include<unordered_map>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;


const string& transfer(const string& str,unordered_map<string,string>&dic)
{
	if(dic.find(str)!=dic.end())
	  return dic[str];
	else
	  return str;
}

unordered_map<string,string> build_map(ifstream& map_file)
{
	unordered_map<string,string>map;
	string key;
	string value;
	string word;
	while(map_file>>key&&getline(map_file,value))
	{
		if(value.size()>1)
		  map[key]=value.substr(1);
		else
		  throw runtime_error("no rule for "+key);
	}
		return map;
}

void word_transfer(ifstream& text,ifstream& map_file)
{
	unordered_map<string,string>dic=build_map(map_file);
	string text_str;
	while(getline(text,text_str))
	{
		istringstream stream(text_str);
		string word;
		while(stream>>word)
		{
			cout<<transfer(word,dic)<<" ";
		}
		cout<<endl;
	}
}
int main(int argv,char** argc)
{
	string map_name(argc[1]);
	string text_name(argc[2]);
	ifstream map_file(map_name);
	ifstream text_file(text_name);
	word_transfer(text_file,map_file);

}
