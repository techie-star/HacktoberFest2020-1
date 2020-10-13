#include<bits/stdc++.h>
#include <iterator>
#include<iostream>

using namespace std;

int main()
{
	vector<int> v;
	int size;
	int i;
	int a;
	
	//istream_iterator<int> begin(std::cin), end;
	//vector<int> v(begin, end);
	
	while(cin>>a)
	{
		v.push_back(a);
	}
	
	size=v.size();
	
	for(i=0;i<size;i++)
	{
		if(v[i]==42)
			break;
		else
			cout<<v[i]<<endl;
	}
	
	return 0;
}
