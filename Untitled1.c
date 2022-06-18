#include <stdio.h>
int main(){
    long long a[10001];
    long long n;
    scanf("%d",&n);
    for (long long i=0;i<=n;i++)
        scanf("%d", a+i);

    long long b[10001];
    long long m;
    scanf("%d",&m);
    for (long long j=0;j<=m;j++)
        scanf("%d",b+j);

    long long c[20001];
    long long k=m+n;
    for (long long i=0;i<=k;i++)
        c[i] = 0;
    for (long long i=0;i<=n;i++){
        if(a[i]==0) continue;
        for (long long j=0;j<=m;j++){
            c[i+j] += a[i] * b[j];
            }
    }
    long long kq = 0;
    for(long long i=0;i<=k;i++){
        kq ^= c[i];
    }
    printf("%d", kq);
}
