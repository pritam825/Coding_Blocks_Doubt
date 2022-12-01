#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)cin>>v[i];
	int i=1;
	while(i<n and v[i-1]>v[i])i++;
	while(i<n and v[i-1]<v[i])i++;
	if(i==n)cout<<"true"<<endl;
	else cout<<"false"<<endl;
}