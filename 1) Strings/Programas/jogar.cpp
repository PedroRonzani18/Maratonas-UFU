#include <stdio.h>
#include <string>


int main(){

    int v;
    char F[100];


    scanf("%d",&v);
    
    getchar();
    
    fgets(F,100,stdin);


        for(int i=0;i<v;i++){

            printf("%s\n",F);
        }

    return 0;
}