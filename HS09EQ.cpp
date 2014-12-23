#include<cstdio>
#include<cmath>

int main() {
    int n, t;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        int n1, n2, n3;
        long long int r = 0;

        n1 = sqrt(sqrt(n * 1.0));
        for(int d = 0;d <= n1; d++) {
            n2 = n - d * d * d * d;
            int nc = pow(n2, 1.0/3) + 1;
            for(int c=0;c<=nc;c++) {
                n3 = n2 -c * c * c;
                if(n3 < 0) continue;
                r += sqrt(n3) + 1;
            }
        }
        printf("%lld\n", r);
    }
}
