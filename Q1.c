#include <stdio.h>

void main(){
    int n, a=1, sum=0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(a; a < n*2; a+=2){
        sum+=a;
        printf("%d\n",a);
    }
    printf("The sum of first %d Odd Numbers is %d", n,sum);  
}

void main(){
    int n,a=1,sum=0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (a<2*n){
        sum+=a;
        printf("%d\n",a);
        a+=2;
    }
    printf("The sum of first %d Odd Numbers is %d", n,sum);
}


void main(){
    int n,a=1,sum=0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    do{
        sum+=a;
        printf("%d\n",a);
        a+=2;
    }while (a<2*n);
    printf("The sum of first %d Odd Numbers is %d", n,sum);
}



