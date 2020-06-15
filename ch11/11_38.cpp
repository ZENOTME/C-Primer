#include<iostream>
#include<unordered_map>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
void word_count(ifstream& input_flow)
{
	unordered_map<string,int>dic;
	string word;
	while(input_flow>>word)
	{
		++dic[word];
	}
	for(const auto &w:dic)
	{
		cout<<w.first<<" has "<<w.second<<" times"<<endl;
	}
}


int main(int argv,char **argc)
{
	string file_name(argc[1]);
	ifstream string_file(file_name);
	word_count(string_file);
}


