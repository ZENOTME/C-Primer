#include<iostream>
#include<map>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;


auto builfMap(ifstream &map_file)->map<string,string>
{
	map<string,string>trans_map;
	string key;
	string value;
	while(map_file>>key&&getline(map_file,value))
	{
		if(value.size()>1)
		  trans_map[key]=value.substr(1);//跳过前导空格
		else
		  throw runtime_error("no rule for"+key);
	}
	return trans_map;
}

const string &
transform(const string& str,const map<string,string>&m)
{
	auto map_it=m.find(str);
	if(map_it!=m.cend())
	  return map_it->second;
	else
	  return str;
}
void word_transform(ifstream &map_file,ifstream &input)
{
	map<string,string>trans_map=builfMap(map_file);
	string text;
	while(getline(input,text))
	{
		istringstream stream(text);
		string word;
		while(stream>>word){
		cout<<transform(word,trans_map);
		cout<<" ";
		}
		cout<<endl;
	}
}

int main(int argv,char **argc)
{
	string map_name=argc[1];
	string text_name=argc[2];
	ifstream map_file(map_name);
	ifstream text_file(text_name);
	word_transform(map_file,text_file);
}
