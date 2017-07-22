#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
int t,no,m,sw,sd;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d", &no, &m, &sw);
         sd=(sw+m-1)% no;

        if(sd==0)
             printf("%d\n",no);
        else
            printf("%d\n",sd);
    }
	// ok
    return 0;
}
