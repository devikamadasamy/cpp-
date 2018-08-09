#include<iostream>
using namespace std;
int main()
	{
		int st;
		int n,sum=0,p;
		cin>>st;
		while(st>0){
			
			p=st%10;
			sum=sum+p;
			st=st/10;
			//cout<<sum<<"\n";
		}
		#cout<<sum<<"\n";
		if(sum%2==0){
			cout<<"E";
		}
		else{
		
		cout<<"O";}
	}
