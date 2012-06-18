#include <cstdio>
#include <cstdlib>

int main()
{
    int n, k, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &k); --n; --k;
        long long r = 1;
        if(n - k < k) k = n - k;
        for(int i = 0; i < k; ) r *= n--, r /= ++i;
        printf("%lld\n", r);
    }
    
    return EXIT_SUCCESS;
}
