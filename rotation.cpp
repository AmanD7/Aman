#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9},b,c,i;
	cout<<"\nfor how many times do u want to rotate it for\n";
	cin>>b;
	for(int r=0;r<b;++r)
		{c=a[0]; 
		i=0;
			while(i<9)	
			{a[i]=a[i+1];
			++i;
			}	a[8]=c;
		} 
		for(int x=0;x<9;++x)
		{cout<<"\n"<<a[x];
		}
return 10;		
}
