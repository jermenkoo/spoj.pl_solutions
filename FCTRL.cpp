#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int k=0;
        scanf("%d",&n);
        while(pow(5,k)<=n)
            k++;
        int zeros=0;
        k--;
        while(k!=0)
        {
            zeros+=floor(n/pow(5,k--));
        }
        printf("%d\n",zeros);
    }
    return 0;
}
