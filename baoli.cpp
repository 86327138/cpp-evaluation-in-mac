#include <iostream>
#include <cstdio>
#include <cstring>

int main(){
    freopen("test.in","r",stdin);
    freopen("test1.out","w",stdout);
    int n;
    long long ans = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
        ans += i;
    printf("%lld",ans);
    return 0;
}
