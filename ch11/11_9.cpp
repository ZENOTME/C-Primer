#include<iostream>
#include<map>
#include<list>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main(int argv,char **argc)
{
	string filename=argc[1];
	ifstream input(filename);
	
	map<string,list<int>>index_dic;
	string sentense;
	string word;
	int line=0;
	while(getline(input,sentense))
	{
		line++;
		istringstream str_flow(sentense);
		while(str_flow>>word)
		{
				index_dic[word].push_back(line);
		}
	}
	for(auto &item:index_dic)
	{
		cout<<item.first<<" has "<<item.second.size()<<endl;
		for(auto &j:item.second)
		{
			cout<<"At "<<j<<" line"<<endl;
		}
		cout<<endl;
	}

}
