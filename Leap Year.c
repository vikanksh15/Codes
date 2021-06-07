#include <stdio.h>

int main()
{
    int a = 0;
    printf("Please enter the year: ");
    scanf("%d",&a);
    if(a%4 == 0){
        printf("%d is leap year .\n",a);
    }
    else{
        printf("%d is not a leap year.\n",a);
       
        while(a%4 != 0){
            a += 1;
        }
        printf("Next leap year is %d.\n",a);
    }
    
    return 0;
}
