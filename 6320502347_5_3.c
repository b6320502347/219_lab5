#include<stdio.h>
int main(){
    int n,i,j,x=1;
    scanf("%d",&n);
        for(i=2;x<n;i++){
            j=i;
            while(1){
            if(j%2==0)
                j/=2;
             else if(j%3==0)
                 j/=3;
             else if(j%5==0)
                 j/=5;
            else break;
                 }
    printf("%d %d\n",x,i);
    if(j<=5){
        x++;
    }
    }
        if(x==1)
        printf("%d",x);
        else printf("%d",i-1);
}
