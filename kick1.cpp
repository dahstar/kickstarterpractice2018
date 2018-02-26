#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
		ofstream out("out.txt");
	ifstream in("in.txt");
	in>>t;

	for(int i=1;i<=t;i++)
	{
		out<<"Case #"<<i<<": "; 
		long long int n;
		in>>n;
		vector<long long> a;
		for(int i=0;i<n;i++)
		{
		long long 	int a1,b1;
			in>>a1>>b1;
			for(long long int i1=a1;i1<=b1;i1++)
			a.push_back(i1);
			
		}
	long long int p,pn;
		in>>p;
		while(p--)
		{
			 in>>pn;
			out<<count (a.begin(),a.end(),pn)<<" ";
		}
		out<<endl;
	}

}
