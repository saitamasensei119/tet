#include<bits/stdc++.h>
using namespace std;

int a[100];
int n;
// in xau nhi phan 
void sol(int k){
	for (int v=0;v<2;v++){
		a[k]=v;
	if(k==n-1){
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<"\n";
	}
	else sol(k+1);
}
}
// in xau nhi phan khong co 2 bit 1 canh nhau

void sol2(int k){
	for (int v=0;v<2;v++){
		if(a[k-1]+v<2){
			a[k]=v;
			if(k==n-1){
				for(int i=0;i<n;i++){
			    cout<<a[i];
	     	    }
		    cout<<"\n";
			}
			else sol2(k+1);
		}
	}
}
int main(){
	a[0];
	cin>>n;
	cout<< "xau nhi phan thoa man"<<"\n";
	sol(0);
	cout<< "xau nhi phan thoa man yc2"<<"\n";
	sol2(0);
}
