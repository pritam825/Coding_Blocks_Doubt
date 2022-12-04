#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		ll ans=0;
		ll count=1;
		for(int i=s.size()-1;i>=0;i--){
			ans=ans+(s[i]-'0')*count;
			count=count*2;
		}
		cout<<ans<<endl;
	}
	return 0;
}