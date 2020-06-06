#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>vec={1,2,3,4};
	ostream_iterator<int>out(cout," ");
	copy(vec.rbegin(),vec.rend(),out);


}
