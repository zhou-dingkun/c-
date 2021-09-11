#include<bits/stdc++.h>
#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cin>>x>>y;
	printf("%.2f",x-y*int(x/y));//输出可以不写&，当输入不行 
}
