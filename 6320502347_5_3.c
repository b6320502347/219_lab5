#include<stdio.h>
int main(){
    int n,i,j,x=1;
    scanf("%d",&n);
    for(i=2;x<n;i++)
            for(j=i;;)
            if(j%2==0)
                j/=2;
             else if(j%3==0)
                 j/=3;
             else if(j%5==0)
                 j/=5;
            else {
                if(j<=5)
                    x++;
                break;
                 }
        if(x==1)
        printf("%d",x);
        else printf("%d",i-1);
}
