#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>vec={1,2,3,4,5,6,7,8,9,10};
	auto begin=vec.rbegin()+3;
	auto end=vec.rend()-3;
	sort(begin,end);
	for(auto i:vec)
	  cout<<i<<" ";
}
