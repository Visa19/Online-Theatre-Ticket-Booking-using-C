
int main()
{
    decoration();
    printf("\n\n\t\t\t______________________________________________________________________________________________");

    information();

    printf("\n");
    printf("\n");
    printf("\t\t\t**********************************************************************************************");
    printf("\n\t\t\t**********\t**********\t***   TICKET_BOOKING   ***\t********** \t**********");
    printf("\n\t\t\t**********************************************************************************************");

    printf("\n\n");
    buy_ticket();
    printf("\n");
    printf("\n");


    printf("\t\t\t\t\t*   WELCOME TO REGAL CINEMA PARKING SYSTEM   *\n");
    printf("\t\t\t\t\t   ****************************************\n");
    printf("\n\t\t\t\t\t- - - > PRESS \"y\" | \"Y\" for YES < - - -");
    printf("\n\t\t\t\t\t- - - > PRESS \"n\" | \"N\" for NO  < - - -");
    printf("\n");
    printf("\n\t\t\tIF you want to use Vehicle parking select from the above options:  ");
    scanf("%s",&p);
    printf("\n");
    parking(p);
    printf("\n");
    printf("\n");

    want_purchase_quarry();

    discount();

    printf("\n\t\t\t\t\t\t\t\t--------\n");
    printf("\n\t\t\t\t\t Your Total bill\t= %.2f",(float)tb);
     printf("\n\t\t\t\t\t\t\t\t--------\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t-> Please enter your Debit or Credit card number: ");
    scanf("%d",&cardnum);
    printf("\n\t\t\t-> Enter card CVC number: ");
    scanf("%d",&cvc);
    printf("\n");
    printf("\t\t\t\tYOUR PAYMENT HAS BEEN COMPLETED!");
    printf("\n\n\t\t\t============================================================================================");
    printf("\n\n\t\t\t\t\t\t We have sent a conformation to +94%d",code);
    printf("\n\n\t**WHILE ENTERING THE THEATRE PREMISES PLEASE WEAR YOUR FACE MASK AND MAINTAIN SOCIAL DISTANCE. ELSE YOU WILL NOT BE ALLOWED INSIDE** ");
    printf("\n\n\t\t\t\t\t\t\t***Thank you for choosing us***");
    printf("\n\n\t\t\t\t\t\t\t   ---Have a nice day!!!---");
    printf("\n");
}
