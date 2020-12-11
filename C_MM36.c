#include <stdio.h>
int main(){
    int i;
    while(~scanf("%d",&i)){
        if(i>12||i<1)printf("超出範圍\n");
        else if(i==12||i<3)printf("Winter\n",i);
        else if(i<6)printf("Spring\n",i);
        else if(i<9)printf("Summer\n",i);
        else printf("Autumn\n",i);
    }
    return 0;
}