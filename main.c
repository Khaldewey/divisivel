#include <stdio.h>
#include <stdlib.h>
int divisivel(int x,int y){
    int d;
    d=x%y;
    if(d==0){
        return 1;
    }else{
        return 2;
    }

}
int main()
{int A,B;
int resultado;
scanf("%d",&A);
scanf("%d",&B);
if(A >= 1 && B >= 1){
resultado=divisivel(A,B);
if(resultado==1){
    printf("divisivel");
}
if(resultado==2){
    printf("nao divisivel");
}
}


    return 0;
}
