#include <cstdio>
#include <cstdlib>
#include <ctime>

int main(){
    freopen("test.in","r",stdin);
    freopen("test2.out","w",stdout);
    int n;
    srand(time(NULL));
    int mid = 1 + rand()%10;
    scanf("%d",&n);
    if(mid != 1)
    printf("%d",(n+1)*n/2);
    else
        printf("(^_^)");
    return 0;
}
