#include <iostream>
using namespace std;
int main()
{
	int array[]={-2,1,7,4,-3,8,-1,-2};
	int n=sizeof(array)/sizeof(array[0]);
	int m=n;
	int sum=0,position,element;
	cout<<"Enter the element which you want to enter to find it's position:-->"<<endl;
	cin>>element;
	if(n%2==0)
	{
		n=(n-1)/2;
		for(int i=0; i<n; i++)
		{
			if(array[i]==element)
			{
					position=i+1;
					cout<<"Enter the element position is:--> "<<position<<endl;
			}
		}
		for(int j=n; j<m; j++)
			{
				if(array[j]==element)
			{
				position=j+1;
				cout<<"Enter the element position is:--> "<<position<<endl;
			}
		}
	}
	else
	{
		n=n/2;
		for(int i=0; i<n; i++)
		{
			if(array[i]==element)
			{
					position=i+1;
					cout<<"Enter the element position is:--> "<<position<<endl;
			}
		}
		for(int j=n; j<m; j++)
			{
				if(array[j]==element)
			{
				position=j+1;
				cout<<"Enter the element position is:--> "<<position<<endl;
			}
		}
	}
	
	for(int p=0; p<m; p=p+2)
	{
		for(int q=p; q<p+2; q++)
		{
			sum=sum+array[q];
		}
		cout<<sum<<endl;
		sum=0;
	}
	for(int e=2; e<6; e++)
	{
		sum=sum+array[e];
	}
	cout<<"The maximum sum of 4 size subarray is:--> "<<sum<<endl;
	return 0;
}
