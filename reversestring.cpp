#include<iostream>
using namespace std;
int reverse_string(string p){
	
	int n=p.length();
	if(n==1){
		cout<<p;
		return 0;
	}
	else
	{
		cout<<p[n-1];
		reverse_string(p.substr(0,n-1));
	}
}
int main(){
	string c;
	getline(cin,c);
	reverse_string(c);
}
