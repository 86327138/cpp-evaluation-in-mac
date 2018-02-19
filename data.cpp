#include <cstdio>
#include <cstdlib>
#include <ctime>

int main(){
    freopen("test.in","w",stdout);
    srand(time(NULL));
    int n = 1 + rand() % 10000;
    printf("%d",n);
    return 0;
}
