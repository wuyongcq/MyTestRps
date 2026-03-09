#include"mymath.h"

int sub(int a,int b){
    printf("In sub\n");
    int c;
    c=a-b;
	return c;
}
int add(int a,int b){
    return a+b;
}

void printNarcNnm(const int n){
    int temp=0; 
    int sum;
    int d=0;
    int digits;
    for(int i=1;i<n;i++){
        temp=i;
        digits=1;
        sum=0;
        while(temp/=10)
          digits++;

       temp=i;
       do{
         d=temp%10; 
         sum+=pow(d,digits);  
       }while(temp/=10);

       if(sum==i)
        printf("%d\n",i);
    }

}