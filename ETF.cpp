#include <bitset>
#include <cstdio>
#define MAXN 3000000

using namespace std;

int phi[MAXN + 1], prime[MAXN/10], sz;
bitset <MAXN + 1> mark;

int main() {
    for (int i = 2; i <= MAXN; i++ ){
        if(!mark[i]){
            phi[i] = i-1;
            prime[sz++]= i;
        }
        for (int j=0; j<sz && prime[j]*i <= MAXN; j++ ){
            mark[prime[j]*i]=1;
            if(i%prime[j]==0){
                phi[i*prime[j]] = phi[i]*prime[j];
                break;
            }
            else phi[i*prime[j]] = phi[i]*(prime[j]-1);
        }
    }

    int t, n;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n == 1) printf("%d\n", 1);
        else printf("%d\n", phi[n]);
    }

    return 0;
}
