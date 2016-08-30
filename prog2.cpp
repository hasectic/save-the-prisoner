#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int t,n,m,s,z,d;
scanf("%d", &t);
for(int i=0; i<t; i++)
    {
    scanf("%d %d %d", &n, &m, &s);
        d=(s+m-1)% n;
        //while(d>n)
         //   {
         //   d=d-n;
        //}
    if(d==0)
        printf("%d\n",n);
       else
        printf("%d\n",d);
    }
    
    return 0;
}
