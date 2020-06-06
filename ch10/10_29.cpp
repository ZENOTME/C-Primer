#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	vector<string>vec;
	istream_iterator<string>item_iter(cin),eof;
	while(item_iter!=eof)
	{
		vec.push_back(*item_iter++);
	}
	ostream_iterator<string> out_iter(cout," ");
	copy(vec.cbegin(),vec.cend(),out_iter);
}
