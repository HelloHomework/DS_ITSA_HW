#include <stdio.h>
int main(){for(int i;~scanf("%d",&i);printf("%s",(i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0))?"Bissextile Year\n":"Common Year\n"))if(i==0)break;}