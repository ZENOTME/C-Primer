#include<iostream>
#include<algorithm>
#include<iterator>
#include<fstream>

using namespace std;

int main(int argv,char **argc)
{
	ifstream in_file(argc[1]);
	ofstream out_file1(argc[2]),out_file2(argc[3]);
	istream_iterator<int> in_iter(in_file),eof;
	ostream_iterator<int> out1_iter(out_file1," "),out2_iter(out_file2," ");

	while(in_iter!=eof)
	{
		int i=*in_iter++;
		if(i%2==0)
		  out2_iter=i;
		else
		  out1_iter=i;
	}

}
