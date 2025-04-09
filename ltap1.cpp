#include<iostream>
using namespace std;
// tim day con lon nhat
int main(){
	int a[1000],s[1000];
	int n;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	s[0]=a[0];
	int max=a[0];
	for(int i=0;i<n-1;i++){
		if(s[i]>0){
			s[i+1]=s[i]+a[i+1];
		}
		else{
			s[i+1]=a[i+1];
		}
		if(s[i+1]>max){
			max=s[i+1];
		}
	}
	cout<<max<<" ";
//	cout<<s[n-1]<<"\n";
//	for(int i=0;i<n;i++){
//		cout<< a[i]<<" ";
//	}
//	cout<<"\n";
//	
	
}
