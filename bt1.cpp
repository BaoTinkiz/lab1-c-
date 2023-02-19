#include<stdio.h>
#include<iostream>

using namespace std;

void quangduong(int v, int h){
	cout<<"quang duong di duoc la : "<<v*h<<" km/h";
}

int main(){
	int v,h;
	cout<<"Nhap van toc : ";
	cin>>v;
	cout<<"Nhap thoi gian : ";
	cin>>h;
	quangduong(v,h);
	return 0;
}
