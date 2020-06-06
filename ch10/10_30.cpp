#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
	istream_iterator<int>in_iter(cin),eof;
	ostream_iterator<int>out_iter(cout," ");
	vector<int>vec(in_iter,eof);
	sort(vec.begin(),vec.end());
	copy(vec.begin(),vec.end(),out_iter);



}
