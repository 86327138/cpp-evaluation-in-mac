#include<cstdio>
#include <cstdlib>

int ac = 0;
int wa = 0;

int main(){
    //system("clear");
    //int t = 0;
    printf("%s\n","Please input the number of evaluation:");
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        system("./data");
        system("./baoli");
        system("./std");
        if(system("diff test1.out test2.out")){
            wa++;
            printf("\033[01;31m✘ Wrong Answer \033[0m\033[01;36mon Test #%d \033[0m\n",i);
            //break;
            if(wa == 0) getchar();
            if(i != n) getchar();
        }
        else{
            printf("\033[01;32m✔ Accepted \033[0m\033[01;36mon Test #%d \033[0m\n",i);
            ac++;
        }
        system("sleep 0.05");
    }
    printf("\n\033[01;32m Accepted: %d \033[0m\033[01;31m Wrong Answer: %d \033[0m",ac,wa);
    //system("pause");
    return 0;
}
