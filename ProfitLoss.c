#include <stdio.h>

int main()
{
    int cp = 0;
    int sp = 0;
    printf("Please enter the cost price: ");
    scanf("%d",&cp);
    printf("Please enter the selling price: ");
    scanf("%d",&sp);
    if(cp>sp){
        printf("Alert!!!");
        printf("You are in loss");
        printf("\nYou loose %d USD",cp-sp);
    }
    else if(cp<sp){
        printf("\nCongrats!!!\n");
        printf("You are in profit\n");
        printf("You made %d USD profit\n",sp-cp);
    }
    else{
        printf("You are in neither profit nor loss");
    }

    return 0;
}
