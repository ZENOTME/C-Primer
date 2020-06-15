#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
using namespace std;
int main()
{
	unordered_multimap<string,size_t>word_count;
	cout<<word_count.bucket_count()<<endl;
	cout<<word_count.max_bucket_count()<<endl;
	word_count.insert(make_pair("apple",1));

	cout<<word_count.bucket_count()<<endl;
	cout<<word_count.max_bucket_count()<<endl;
	
	word_count.insert(make_pair("apple",1));
	auto i=word_count.bucket("apple");
	cout<<word_count.bucket_size(i);
	
}
