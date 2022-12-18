#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x=n/2;
	int y=1;
	while(x>0){
		int z=x;
		while(z--){
		cout<<" "<<" ";}
		x--;
		z=y;
		while(z--)cout<<"* ";
		y+=2;
		cout<<endl;
	}
	int sp=0;
	while(y>=0){
		int z1=sp;
		while(z1--)cout<<"  ";
		sp++;
		int z=y;
		while(z--)cout<<"* ";
		y-=2;
		cout<<endl;
	}
	return 0;
}