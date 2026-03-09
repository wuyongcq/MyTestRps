#include<stdio.h>
#include "mymath.h"
#include"max.h"


int main(){
  // printNarcNnm(10);
  for(int i=0;i<100;i++)
    if(i & 1)
        printf("%d是奇数\n ",i);
    else
        printf("%d是偶数\n ",i);
        
}