
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
int main()
{
	int ret=-1;
	string ss="0123456789";
	int n, k,count1=0,count2=0  ;
	string s ;

	cin>>n>>k;
		while(n--)
		{
			cin>>s;
			for(int i=0;i<=k;i++)
			{
				
				ret=s.find(ss[i])	;
				if(ret!=-1)
				{
					count1++;
				    ret=-1;
				}
			}
				if(count1>=k+1)
					count2++;
		
				count1=0;

		}
		cout<<count2<<endl;
	
    return 0 ;
}