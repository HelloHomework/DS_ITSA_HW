#include <stdio.h>
int main(){
    int a,c;
    while(~scanf("%d",&a)){
      c=0;
        for(int i = 3;i<=a;++i){
           if(i%3==0)c+=i;
        }
        printf("%d\n",c);
    }
}