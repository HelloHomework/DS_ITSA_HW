#include <stdio.h>
int main(){
    int x,y;
    while(~scanf("%d", &x)){
        scanf("%d", &y);
        if(x==0&&y==0)printf("Origin\n");
        else if(y==0){
            printf("x-axis\n");
            continue;
        }
        else if(x>0){
            if(y>0)printf("1st Quadrant\n");
            else if(y<0)printf("4th Quadrant\n");
            
        }else if(x<0){
            
            if(y<0)printf("3rd Quadrant\n");
            else if(y>0)printf("2nd Quadrant\n");
            
        }else{
            printf("y-axis\n");
        }
    }
}