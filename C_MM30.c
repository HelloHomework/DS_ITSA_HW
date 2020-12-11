#include <stdio.h>

int hello(int p){
    for(int i=2;i!=p;++i){
        if(p%i==0)return 0;
    }
    return 1;
}

int main(){
    int p = 0;
    while(~scanf("%d",&p))
      if(hello(p)==0)printf("NO\n");
      else printf("YES\n");
}
        