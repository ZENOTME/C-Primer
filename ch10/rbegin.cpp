#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin>>s;
	auto romma=find(s.rbegin(),s.rend(),',');
	cout<<string(s.rbegin(),romma)<<endl;
	cout<<string(romma.base(),s.end())<<endl;


}
