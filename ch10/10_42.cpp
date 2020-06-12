#include<iostream>
#include<list>
#include<iterator>

using namespace std;
int main()
{
	list<int>lst;
	int i;
	while(cin>>i)
		lst.push_back(i);
	ostream_iterator<int> out(cout," ");
	for(auto i:lst)
	{
		out=i;
	}
	cout<<endl;
	lst.unique();
	for(auto i:lst)
	{
		out=i;
	}

}
