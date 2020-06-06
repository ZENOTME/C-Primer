#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

void fprint(int item)
{
	cout<<item<<" ";
}

int main()
{
	vector<int>vec;
	list<int>lst;

	int i;
	while(cin>>i)
	{
		vec.push_back(i);
	}
	unique_copy(vec.begin(),vec.end(),front_inserter(lst));
	for_each(vec.begin(),vec.end(),
				[](auto item){cout<<item<<" ";});

	cout<<endl;

	for_each(lst.begin(),lst.end(),
				fprint);

	//fprint函数的参数不能使用auto 
}
