#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  char c='B';
  putchar(c);
  putchar('\x42');
  putchar(0x42);
  putchar('\102');
  putchar(66);
  
}
