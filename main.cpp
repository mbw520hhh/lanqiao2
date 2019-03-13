#include<iostream> 
using namespace std;

int main()
{
	long long n;
	long long i;
	long long p=1;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			p*=i;
			while(n%i==0)
			{
				n/=i;
			}
		}
	}
	cout<<p;
	return 0;
} 
