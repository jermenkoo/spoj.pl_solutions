#include <algorithm>
#include <cmath>
#include <cstdio>
#include <map>

using namespace std;

long long exp(int a, int b)
{
    if (b == 0) return 1;
        if (b % 2) return a * exp(a, b - 1);
        long long t = exp(a, b / 2);
        return t * t;
}

int main()
{
    int n, x, k;
    scanf("%d", &k);
    while(k--)
    {
        scanf("%d", &n);
        x = n;
        map<int, int> m;
        while(n % 2 == 0)
        {
            m[2]++;
            n /= 2;
        }
        for(int i = 3; i * i <= n; i += 2)
        {
            while(n % i == 0)
            {
                m[i]++;
                n /= i;
            }
        }

        if (n > 1) m[n]++;
        long long p = 1;
        map<int,int>::iterator it;
        for(it = m.begin(); it != m.end(); it++)
        {
            int a = exp( (it -> first), it->second + 1) - 1;
            a = a / (it -> first - 1);
            p *= a;
        }
    printf("%d\n", p - x);
    }
    return 0;
}
