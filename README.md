# Cforshafay

#include <stdio.h>

int main()
{
    int i, result, fifty, twenty, ten, five, money;
    char option;
    
    printf("This program is designated to calculate coins and the price of the change that is to be given to customer");
    
    do{
        printf("Do you wish to continue? (Y/N)");
    }
    
    do{
        option = getch();
        option = toupper option;
    }
    while(!((option=='Y' || option=='N')));
    printf("%c\n",option);
    if(option=='Y')
    
    while (1){
        printf("Please enter amount that needs to be returned to the customer\n");
        scanf("%d",&result);
        if((result<0) || (result>95))
        printf("you cannot enter value lower than 0 nor higher than 95\n");
        return(1);
    }
    fifty = result%50;
    result = fifty*50;
    twenty=result%20;
    result = twenty*20;
    ten=result%10;
    result=ten*10;
    five=result%5;
    result=five*5;
    
    printf("to make your change for %d, you will need the following coins\n");
            
        if (fifty > 1)
                printf("%d Fifty cent piece's.\n", fifty);
            if (fifty == 1)
                printf("%d Fifty cent piece.\n", fifty);
            if (twenty > 1)
                printf("%d Twenty cent piece's.\n", twenty);
            if (twenty == 1)
                printf("%d Twenty cent piece.\n", twenty);
            if (ten > 1)
                printf("%d Ten cent piece's\n", ten);
            if (ten == 1)
                printf("%d Ten cent piece\n", ten);
            if (five > 1)
                printf("%d Five cent piece's\n", five);
            if (five == 1)
            
    else(option!='N');
    return(0);
}
