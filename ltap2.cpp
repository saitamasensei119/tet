#include<bits/stdc++.h>
//thap ha noi
using namespace std;

void sol(int k,char a,char b,char c){
	if(k==1){
		cout<<a<<"->"<<b<<"\n";
	}
	else {
		sol(k-1,a,c,b);
		sol(1,a,b,c);
		sol(k-1,c,b,a);
	}
	
}
int main(){
	int n;
    cin>>n;
    sol(n,'A','B','C');
}
