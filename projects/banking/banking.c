#include <stdio.h>
char name[20];
int dep_amt, amt = 0, acc_no;

void menu();
void deposite();
void widthdraw();
void transfer();
void account_details();
void transaction_details();
void last_details();
int main()
{
    int choice;

    printf("Enter Account Holder Name: ");
    gets(name);

    printf("Enter Account Number: ");
    scanf("%d", &acc_no);

    menu();
    printf("Select: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        deposite();
        break;
    // case 2:
    //     widthdraw();
    //     break;
    // case 3:
    //     transfer();
    //     break;
    // case 4:
    //     account_details();
    //     break;
    // case 5:
    //     transaction_details();
    //     break;
    // case 6:
    //     last_details();
    //     // exit(0);
    defailt:
        printf("Invalid Choice\n");
        break;
    }

    return 0;
}

void menu()
{
    printf("MAIN MENU\n");
    printf("1. Deposite\n");
    printf("2. Widthdraw\n");
    printf("3. Transfer\n");
    printf("4. Account Details\n");
    printf("5. Transaction Details\n");
    printf("6. Exit\n");
}

void deposite(){
    printf("---Deposit---\n");
    printf("Enter Amount: ");
    scanf("%d", &dep_amt);

    amt += dep_amt;
    printf("Deposited\n");
    printf("Current balance: %d", amt);
}