#include <stdio.h>

int checkbal();

int main(){
    int balance, withdraw, choice;
    balance = 10000;
menu: 
    printf("======MENU=======\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Exit\n");
    printf("Enter the choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("%d is your balance.\n", balance);
        goto menu;
    
    case 2:
        printf("Withdrawal amount should be multiple of 100.\n");
        printf("Enter the amount to withdraw: \n");
        scanf("%d", &withdraw);
        if (withdraw <= balance && withdraw > 0)
        {
            if (withdraw % 100 == 0) {
                if (withdraw > 5000){
                    balance = balance - withdraw - 10;
                    printf("Since the amount of withdrawal is more than 5000, Extra Rs.10 fee is deducted. \n");
                    printf("The updated balance is %d\n", balance);
                }else {
                    balance = balance - withdraw;
                    printf("The updated balance is %d\n", balance);
                }
            
            }else {
                printf("Withdrawal amount should be multiple of 100.\n");
            }

        }else {
            printf("Insufficient balance or Invalid amount entered.\n");
        }
        goto menu;
    
    case 3:
        printf("Thank You\n");
        break;

    default:
        printf("Inavlid Response.\n");
        goto menu;
    }
return 0;
}