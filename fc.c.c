#include<stdio.h>
#include<time.h>
int m;//movie name declaration//                      //pravin
    number;//phone number

    d,a;                                              //shanya
    cs;//class seats//
    fee;//Ticket money//
    dis_fee;//discount fee

    mt;//movie_time                                   //visagan
    mtt;//parking payment


    total;//canteen_total                             //lilaniya
    food_no;//Canteen Food number
    food_discount;//Canteen Food discount
    food_price;//Canteen Food price
    total =0; //Food price no
    food_quantity; //Canteen food quantity
    array_food_price; //Array correct food price position
    current_prize;
    popcorn,pepsi,sprite,hot_dogs,coca_cola,sneakers,mixer,nice_biscuits;

    dis;//discount//                                  //sankavi
    tb;//total bill
    code;//for telephone number verfication code
    np;//no.of people over the age of 60
    cardnum;//debit card or credit card number
    cvc;//card cvc number


char name[20];//user name                             //pravin

     n1;//more ticket
     p;//parking yes or no                            //visagan

     n;//canteen yes/no                               //lilaniya
     ans;//canteen yes/no


FILE *fp;//File pointer                               //pravin
int information()//[IIT/20/003 - Pravin]
{
    int number;
    char nic [20];
    char name [100];
    FILE *fptr;
    fptr=fopen("Customer_Info.txt","a");
    printf("\n\t\t\t*For the reason of Covid-19 pandemic, We need to record full information of Ticket Booker*\n");
    printf("\t\t\t______________________________________________________________________________________________");
    printf("\n\n\t\t\tEnter Your Name Mr/Ms:");
    scanf("%s",name);
    printf("\n\t\t\tPlease Enter Your Phone Number:");
    scanf("%d",&number);
    code=number;
    printf("\n\t\t\tPlease Enter Your NIC Number:");
    scanf("%s",&nic);

    fprintf(fptr,"%s - %d - %s\n",name,number,nic);

    fclose(fptr);
    printf("\n\n");

}
int decoration()
{

    printf("\n");
        printf("\n\t\t\t==========================================================================================\n");
        printf("\n");
        printf("\t\t\t");
        printf("        ***   ****  ****   **   *       ****  *  *   *  ****  *   *   **\n");
        printf("\t\t\t");
        printf("        *  *  *     *     *  *  *       *     *  **  *  *     ** **  *  *\n");
        printf("\t\t\t");
        printf("        ***   ***   * **  ****  *       *     *  * * *  ***   * * *  ****\n");
        printf("\t\t\t");
        printf("        * *   *     *  *  *  *  *       *     *  *  **  *     *   *  *  *\n");
        printf("\t\t\t");
        printf("        *  *  ****  ****  *  *  ****    ****  *  *   *  ****  *   *  *  *\n");




        printf("\n");
        //printf("\n");
        //Sprintf("\n");
        //printf("\n");

  printf("\t\t\t");

        printf("   ****  ****  ****  ****  ****      _____  ____     ====   ====      \n");
        printf("\t\t\t");
        printf("   *  *  *     *     *     *  *       |   |    |   ||     ||  ||    |  \n");
        printf("\t\t\t");
        printf("   *  *  ***   ***   ***   ***        |   |    |    ====  ||  ||  =====  in cinema ticket!!!\n");
        printf("\t\t\t");
        printf("   *  *  *     *     *     *  *       |   |____|   ||  || ||  ||    | \n");
        printf("\t\t\t");
        printf("   ****  *     *     ****  *   *                    ====   ====     \n");

        printf("\n");

        printf("\n\t\t\t\t\t----- NEW YEAR DISCOUNT FOR PEPSI AND COCA-COLA -----");
        printf("\n");
        printf("\n\t\t\t==========================================================================================\n");

        printf("\n");

    printf("\n");
    printf("\n");
    //printf("\n");

    printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t\t\t\t\t\t............................................\n");
    printf("\t\t\t\t\t\t|         The Movies List                  |\n\n");
    printf("\t\t\t\t\t\t|         1. Joker                         |\n");
    printf("\t\t\t\t\t\t|         2. Spider Man - No Way Home      |\n");
    printf("\t\t\t\t\t\t|         3. Avatar                        |\n");
    printf("\t\t\t\t\t\t............................................\n");
    printf("\t\t\t\t\t\t********************************************\n");
    char yp;
     printf("\n\t\t\t\t\t\ty or n:");
    scanf("%c",&yp);
switch(yp){
case 'y': case 'Y':

    printf("\n\t\t\t\t\t\tEnter Number For The Movie :");
    scanf("%d",&m);

    while(m<0 || m>3){
        printf("\n\t\t\t\t\t\t\t>>>>>\tNO MORE MOVIES,");
        printf(" PLEASE TRY AGAIN!!!");
        printf("\n\n\n\t\t\t\t\t\tEnter Correct Number For The Movie :");
        scanf("%d",&m);
    }


    switch(m){
        case(1):
        {


            printf("\n\t\t\t\t\t\t\t>>>>>\t***[ Joker ]***\n");
            printf("\n\t\t\t\t\t\t\t>>>>>\tIMDB Ratting - 9/10");
            printf("\n\t\t\t\t\t\t\t>>>>>\tDirector     - Todd Phillips\n");
            printf("\t\t\t\t\t\t\t>>>>>\tGenre       - Crime Thriller\n");
            break;

        }
        case(2):
        {
            printf("\n\t\t\t\t\t\t\t>>>>>\t*[ Spider Man - No Way Home ]*\n");
            printf("\n\t\t\t\t\t\t\t>>>>>\tIMDB Ratting - 8.5/10");
            printf("\n\t\t\t\t\t\t\t>>>>>\tDirector     - John Watts \n");
            printf("\t\t\t\t\t\t\t>>>>>\tGenre      - Super Hero\n");
            break;

        }
        case(3):
        {
            printf("\n\t\t\t\t\t\t\t>>>>>\t***[ Avatar ]***\n");
            printf("\n\t\t\t\t\t\t\t>>>>>\tIMDB Ratting  - 8.8/10");
            printf("\n\t\t\t\t\t\t\t>>>>>\tDirector      - James Cameroon \n");
            printf("\t\t\t\t\t\t\t>>>>>\tGenre       - Science Fiction\n");

            break;
        }
    }

}


int buy_ticket()//codse192f-056
{
    printf("\t\t\t\t\t...........................................................\n");
    printf("\t\t\t\t\t.                                                     \t  .\n");
    printf("\t\t\t\t\t\t*** *** SHOW TIME *** ***                                               \t  .\n");
    printf("\t\t\t\t\t.                                                     \t  .\n");
    printf("\t\t\t\t\t.                                                      \t  .\n");
    printf("\t\t\t\t\t.\tMorning -----> 10.30                       \t  .\n");
    printf("\t\t\t\t\t.                                                      \t  .\n");
    printf("\t\t\t\t\t.\t        Afternoon -----> 1.30              \t  .\n");
    printf("\t\t\t\t\t.                                                     \t  .\n");
    printf("\t\t\t\t\t.\t                     Evening -----> 6.30\t  .\n");
    printf("\t\t\t\t\t.                                                     \t  .\n");
    printf("\t\t\t\t\t...........................................................\n");
    printf("\n\t\t\t\t\t 1-> Morning | 2->Afternoon | 3->Evening \n");
    printf("\n");
    printf("\n\t\t\t\t\t>>>>> \t Enter the date to watch the movie on February month:\t");
    scanf("%d", &d);
    printf("\n\t\t\t\t\t>>>>> \t Enter the show you prefer:\t");
    scanf("%d",&a);
    printf("\n");
    printf("\t\t\t\t\t...........................................................\n");
    printf("\t\t\t\t\t.                                                     \t  .\n");
    printf("\t\t\t\t\t.\tTicket price for 1'st class -----> Rs.1000\t  .\n");
    printf("\t\t\t\t\t.                                                      \t  .\n");
    printf("\t\t\t\t\t.\tTicket price for 2'nd class -----> Rs.800\t  .\n");
    printf("\t\t\t\t\t.                                                     \t  .\n");
    printf("\t\t\t\t\t.\tTicket price for 3'rd class -----> Rs.500\t  .\n");
    printf("\t\t\t\t\t.                                                     \t  .\n");
    printf("\t\t\t\t\t...........................................................\n\n");
    printf("\n");
    printf("\n\t\t\t\t\t>>>>> \t The movie number you have selected: %d \t",m);
      printf("\n");
    printf("\n\t\t\t\t\t>>>>> \t Enter the class you prefer:\t");
    scanf("%d",&n);
      printf("\n");
    printf("\t\t\t\t\t>>>>> \t Enter number of seats:\t");
    scanf("%d", &cs);
if(m==1)
    {
        switch(n)
        {
            case(1):
            {
                fee=1000*cs;
                printf("\n\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t>>>>> \t Total Price is\t        ----> . Rs.%d  . ", fee);
                printf("\n\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=1000;
                break;
            }
            case(2):
            {
                fee=800*cs;
                printf("\n\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t>>>>> \t Total Price is\t        ----> . Rs.%d  . ", fee);
                printf("\n\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=800;
                break;
            }
            case(3):
            {
                fee=500*cs;
                printf("\n\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t>>>>> \t Total Price is\t        ----> . Rs.%d  . ", fee);
                printf("\n\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=500;
                break;
            }
            default:
                {
                    printf("\n\n\t\t\t\t\t>>>>> \t !!!Sorry...We have only 3 facility categories!!!");
                }

        }
    }
    else if(m==2)
    {
        switch(n)
        {
            case(1):
            {
                fee=1000*cs;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t\t\t\t> . Total Price is\t        ----> . Rs.%d  .", fee);
                 printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                 dis_fee=1000;
                break;
            }
            case(2):
            {
                fee=800*cs;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t\t\t\t> . Total Price is\t        ----> . Rs.%d  .", fee);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=800;
                break;
            }
            case(3):
            {
                fee=500*cs;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t\t\t\t> . Total Price is\t        ----> . Rs.%d  .", fee);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=500;
                break;
            }
            default:
                {
                    printf("\n\n\t\t\t\t\t>>>>> \t \t!!!Sorry.. We have only 3 facility categories!!!");
                }
        }
    }
    else if(m==3)
    {
        switch(n)
        {
            case(1):
            {
                fee=1000*cs;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t\t\t\t> . Total Price is\t       ---->  . Rs.%d  .", fee);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=1000;
                break;
            }
            case(2):
            {
                fee=800*cs;
                printf("\n\t\t\t\t\t\t\t\t> . Total Price is\t      ---->   . Rs.%d  .",fee);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=800;
                break;
            }
            case(3):
            {
                fee=500*cs;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                printf("\n\t\t\t\t\t\t\t\t> . Total Price is\t       ---->  . Rs.%d  .", fee);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      ............");
                dis_fee=500;
                break;
            }
            default:
                {
                    printf(" \n\n\t\t\t\t\t>>>>> \t !!!Sorry... We have only 3 facility categories!!!");
                }
        }

    }
    else if(m>3)
    {
        printf("\n\n\t\t\t\t\t>>>>> \t ***Now showing only 3 movies***");

    }
switch (a){
    case 1:
        printf("\n\n\t\t\t\t\t>>>>> \t Your seats have been reserved for morning show on February %d",d);
        break;
    case 2:
        printf("\n\n\t\t\t\t\t>>>>> \t Your seats have been reserved for afternoon show on February %d",d);
        break;
    case 3:
        printf("\n\n\t\t\t\t\t>>>>> \t Your seats have been reserved for evening show on February %d",d);
        break;
    default:
        printf("\n\n\t\t\t\t\t>>>>> \t !!!Sorry... We have only three shows!!!\n");

}
printf("\n\n\t\t\t______________________________________________________________________________________________\n\n\n");
}



int parking(char p) //visa
{

    int tv;//type of vehicle

    if(p=='Y' || p=='y')

    {    printf("\n");
        printf("\t\t\t\t\t\t\t  Price Charges based on vehicle Types\n");
        printf("\t\t\t\t\t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
        printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
         printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
          printf("\t\t\t\t\t   *");
        printf("     Type 1:- Four wheel Vehicle - - > per minutes-RS 3 \t   *\n");
          printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
         printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
          printf("\t\t\t\t\t   *");
        printf("     Type 2:- Two wheel Vehicle - - > per minutes-RS 2  \t   *\n");
        printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
         printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
          printf("\t\t\t\t\t   *");
        printf("     Type 3:- Three wheel Vehicle - - >per minutes-RS 2.5  \t   *\n");
         printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
         printf("\t\t\t\t\t   *\t\t\t\t\t\                           *\n");
          printf("\t\t\t\t\t   *");
          printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
          printf("\n");
        printf("\n\t\t\tEnter your Vehicle Type - - >\t");
        scanf("%d",&tv);
        printf("\n");
         int *ptr;
         ptr=&mt;

        while (tv<1 || tv>3){
        printf("\n");
        printf("\n\t\t\t\t\t - - > No such vehicle type.Please try again.\n");
        printf("\n\t\t\t\t\t Enter your Vehicle Type - - >\t");
        scanf("%d",&tv);
        }
        if(tv==1)
        {
            if(m==1)

            {
                mt=182;


                printf("\n\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                 printf("\n");
                printf("\n\t\t\t\t [ Parking charge for 1 minutes is 3 Rupees ]\n");
                printf("\n\t\t\t\t The Duration of Endgame Movie in minutes: %d ",mt);
                mtt=(*ptr)*3;
                printf("\n");
                printf("\n\t\t\t\t\t\t\t * *Total charge for parking is Rs %d * *",mtt);
                printf("\n");
                printf("\n\t\t\t\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                printf("\n");
                printf("\n\t\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n\n");

            }

            else if(m==2)
            {
                mt=122;

                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                 printf("\n");
                printf("\n\t [ Parking charge for 1 minutes is 3 Rupees ]\n");
                printf("\n\t The Duration of Joker Movie in minutes:%d ",mt);
                mtt=(*ptr)*3;
                printf("\n");
                printf("\n\t\t\t\t* * Total charge for parking is Rs %d * * ",mtt);
                printf("\n");
                printf("\n\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                printf("\n");
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

            }
            else if(m==3)
            {
                mt=129;

                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                printf("\n");
                printf("\n\t[ Parking charge for 1 minutes is 3 Rupees ]\n");
                printf("\n\t The Duration of SpiderMan_Far From Home Movie in minutes:%d ",mt);
                mtt=(*ptr)*3;
                printf("\n");
                printf("\n\t\t\t\t * * Total charge for parking is Rs %d * * ",mtt);
                printf("\n");
                printf("\n\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                printf("\n");
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

            }
        }


        if(tv==2)
        {


                if(m==1)

                {
                    mt=182;

                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                    printf("\n");
                    printf("\n\t[Parking charge for 1 minutes is 2 Rupees ]\n");
                    printf("\n\t The Duration of Endgame Movie in minutes:%d ",mt);
                    mtt=(*ptr)*2;
                    printf("\n");
                    printf("\n\t\t\t\t * * Total charge for parking is Rs %d * * ",mtt);
                    printf("\n");
                    printf("\n\t\t\t==========  Your Vehicle will be safe with us  ==========");
                    printf("\n");
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                }

                else if(m==2)
                {
                    mt=122;

                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                    printf("\n");
                    printf("\n\t[ Parking charge for 1 minutes is 2 Rupees ]");
                    printf("\n\t The Duration of Joker Movie in minutes:%d ",mt);
                    mtt=(*ptr)*2;
                    printf("\n");
                    printf("\n\t\t\t\t * * Total charge for parking is Rs %d * * ",mtt);
                    printf("\n");
                    printf("\n\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                    printf("\n");
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                }
                else if(m==3)
                {
                    mt=129;

                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                    printf("\n");
                    printf("\n\t[ Parking charge for 1 minutes is 2 Rupees ]");
                    printf("\n\t The Duration of SpiderMan_Far From Home Movie in minutes:%d ",mt);
                    mtt=(*ptr)*2;
                    printf("\n");
                    printf("\n\t\t\t\t * * Total charge for parking is Rs %d * * ",mtt);
                    printf("\n");
                    printf("\n\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                    printf("\n");
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

                }


        }
        if(tv==3)
        {
            if(m==1)

            {
                mt=182;

                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                printf("\n");
                printf("\n\t[ Parking charge for 1 minutes is 2.5 Rupees ]\n");
                printf("\n\t The Duration of Endgame Movie in minutes:%d ",mt);
                mtt=(*ptr)*2.5;
                printf("\n");
                printf("\n\t\t\t\t * * Total charge for parking is Rs %d * * ",mtt);
                printf("\n");
                printf("\n\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                printf("\n");
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
            }

            else if(m==2)
            {
                mt=122;

                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ");
                printf("\n");
                printf("\n\t[ Parking charge for 1 minutes is 2.5 Rupees ]\n");
                printf("\n\t The Duration of Joker Movie in minutes:%d ",mt);
                mtt=(*ptr)*2.5;
                printf("\n");
                printf("\n\t\t\t\t * * Total charge for parking is Rs %d * * ",mtt);
                printf("\n");
                printf("\n\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                printf("\n");
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ");
            }
            else if(m==3)
            {
                mt=129;
                printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   ");
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ");
                printf("\n");
                printf("\n\t[ Parking charge for 1 minutes is 2.5 Rupees ]\n");
                printf("\n\t The Duration of Spider Man Far From Home Movie in minutes:%d ",mt);
                mtt=(*ptr)*2.5;
                printf("\n");
                printf("\n\t\t\t\t * * Total charge for parking is Rs %d * * ",mtt);
                printf("\n");
                printf("\n\t\t\t ==========  Your Vehicle will be safe with us  ==========");
                printf("\n");
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ");
            }
        }
        else if(tv>=4)
        {
            printf("\t\t!!Error!!\n");
            printf("\n - - > No such vehicle type.Please try again.\n");
        }




        }

    else if(p=='N'||p=='n')
            {
                printf("\n\t\t - - - No parking selected - - - \n");
            }


}

//---------------------------------------------Responsible part for user data--------------------------------------------------------------

int canteen(char ans){

    if(ans=='y' || ans=='Y'){

        food_item();

        printf("\n");
        printf("\n");
    }else if(ans=='n' || ans=='N'){
        printf("\t\t\t\t\t\t>>>>>\tWe do not allow food from outside..");
        printf("\n");
        printf("\n");
        printf("\n\t\t\t==================================================================================\n");
        printf("\n");
        printf("\n");
    }else{
        printf("\t\t\t\t>>>>>\tYou can enter only \"Y\" for \"YES\" or \"N\" for No.. Try again..");
        printf("\n");
        printf("\n");
        printf("\n\t\t\t===================================================================================\n");
        printf("\n");
        printf("\n");
        want_purchase_quarry();
    }

}


//---------------------------------------If you want purchase canteen quarry--------------------------------------------------------------
int want_purchase_quarry(){
    printf("\t\t\t#################################################################################");
    printf("\n\t\t\t###############                                                   ###############");
    printf("\n\t\t\t###############      If you Want to purchase in theater canteen:  ###############");
    printf("\n\t\t\t###############                                                   ###############");
    printf("\n\t\t\t#################################################################################");
    printf("\n\t\t\t=================================================================================\n");

    printf("\n");
    printf("\t\t\t\t\t\t>>>>>\tPRESS\tY||y\tfor\t\"YES\"");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t>>>>>\tPRESS\tN||n\tfor\t\"NO\"");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t>>>>>\t");
    scanf("%s",&ans);
    printf("\n\t\t\t=================================================================================\n");
    printf("\n");
    printf("\n");

    canteen(ans);
}



//---------------------------------------------Show canteen items' list part--------------------------------------------------------------
int food_item(){
    fp = fopen("canteen.txt", "r");

    //int food_price[8]={100, 80, 80, 120, 80, 60, 90, 50};
    int food_price[8];

    fscanf(fp, "%d", &popcorn);
    food_price[0]=popcorn;

    fscanf(fp, "%d", &pepsi);
    food_price[1]=pepsi;

    fscanf(fp, "%d", &sprite);
    food_price[2]=sprite;

    fscanf(fp, "%d", &hot_dogs);
    food_price[3]=hot_dogs;

    fscanf(fp, "%d", &coca_cola);
    food_price[4]=coca_cola;

    fscanf(fp, "%d", &sneakers);
    food_price[5]=sneakers;

    fscanf(fp, "%d", &mixer);
    food_price[6]=mixer;

    fscanf(fp, "%d", &nice_biscuits);
    food_price[7]=nice_biscuits;


        printf("\n");
        printf("\n");

        printf("\t\t\t");
        printf("//////////////////////////////////////////////////////////////////////////////////\n");

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 1-\tPopcorn\t\t:--------------------------------------|\tRs.%d\t|\n",food_price[0]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 2-\tPepsi\t\t:--------------------------------------|\tRs.%d\t|\n",food_price[1]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 3-\tSprite\t\t:--------------------------------------|\tRs.%d\t|\n",food_price[2]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 4-\tHot Dogs\t:--------------------------------------|\tRs.%d\t|\n",food_price[3]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 5-\tCoca-Cola\t:--------------------------------------|\tRs.%d\t|\n",food_price[4]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 6-\tSneakers\t:--------------------------------------|\tRs.%d\t|\n",food_price[5]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 7-\tMixer\t\t:--------------------------------------|\tRs.%d\t|\n",food_price[6]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("| 8-\tNice_biscuits\t:--------------------------------------|\tRs.%d\t|\n",food_price[7]);

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("|");
        printf("\t\t***** Stop food enter 0 on food number *****\n");

        printf("\t\t\t");
        printf("|\n");

        printf("\t\t\t");
        printf("//////////////////////////////////////////////////////////////////////////////////\n");

        printf("\n");
        printf("\n\t\t\t===================================================================================\n");
        printf("\t\t\t");
        printf("********  ********  ********  ********  *******         ********  ********          ***\n");
        printf("\t\t\t");
        printf("********  ********  ********  ********  ********        ********  ********    **   ***\n");
        printf("\t\t\t");
        printf("**    **  **        **        **        **     **             **  **    **    **  ***\n");
        printf("\t\t\t");
        printf("**    **  ********  ********  ********  **    **        ********  **    **       ***\n");
        printf("\t\t\t");
        printf("**    **  ********  ********  ********  ** ****         ********  **    **      ***\n");
        printf("\t\t\t");
        printf("**    **  **        **        **        **   **               **  **    **     ***   **\n");
        printf("\t\t\t");
        printf("********  **        **        ********  **    **        ********  ********    ***    **\n");
        printf("\t\t\t");
        printf("********  **        **        ********  **     **       ********  ********   ***\n");
        printf("\n");
        printf("\t\t\t\t\t-----\tCHRISTMASS DISSCOUNT FOR PEPSI AND COCA-COLA\t-----");
        printf("\n");
        printf("\n\t\t\t===================================================================================\n");

        printf("\n");
        printf("\n");
        printf("\n");

        printf("\t\t\t#################################################################################");
        printf("\n\t\t\t###############                                                   ###############");
        printf("\n\t\t\t###############            SELECT YOUR FOOD ITEMS:                ###############");
        printf("\n\t\t\t###############                                                   ###############");
        printf("\n\t\t\t#################################################################################");
        printf("\n\t\t\t=================================================================================\n");

        printf("\n");
        printf("\t\t\t\t\t\t>>>>>\tEnter food number:");
        scanf("%d",&food_no);

        while(food_no!=0){
            array_food_price = food_no - 1;
            if(0>food_no || food_no>8){
                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t>>>>>\tYou have entered wrong food item\n");
                printf("\n");
                printf("\n");
                printf("\n\t\t\t===================================================================================\n");
                printf("\n");
                printf("\n");
            }else if(array_food_price==1 || array_food_price==4){ //Pepsi or coca-cola 30% discount
                food_discount = ((30*food_price[array_food_price])/100); //discount amount
                food_price[array_food_price]=food_price[array_food_price]-food_discount; //current_value=amount-discount
                printf("\t\t\t\t\t\t>>>>>\tHow many:");
                scanf("%d",&food_quantity);
                current_prize=food_price[array_food_price]*food_quantity;
                total= total+current_prize;
            }else{
                printf("\t\t\t\t\t\t>>>>>\tHow many:");
                scanf("%d",&food_quantity);
                current_prize=food_price[array_food_price]*food_quantity;
                total= total+current_prize;
            }

            printf("\t\t\t\t\t\t>>>>>\tEnter food number:");
            scanf("%d",&food_no);
        }
        printf("\n");
        printf("\n");
        printf("\t\t\t\t\t\t>>>>>\tYOU HAVE TO PAY:Rs.%.2f",(float)total);
        printf("\n");
        printf("\n");
        printf("\n\t\t\t=============================================================================\n");
        printf("\n");
        printf("\n");
        printf("\n");
    }
int discount()
{int np;
        printf("\t\t\t");
        printf("****  ****  ****  ****  ***      _____  ____     ====   ====      \n");
        printf("\t\t\t");
        printf("*  *  *     *     *     *  *       |   |    |   ||     ||  ||    |  \n");
        printf("\t\t\t");
        printf("*  *  ***   ***   ***   ***        |   |    |    ====  ||  ||  =====  in cinema ticket!!!\n");
        printf("\t\t\t");
        printf("*  *  *     *     *     *  *       |   |____|   ||  || ||  ||    | \n");
        printf("\t\t\t");
        printf("****  *     *     ****  *   *                    ====   ====     \n");
        printf("\n");
    printf("\n\t\t\t\t>>>>>\tEnter the number of people over the age of 60:");
    scanf("%d",&np);
    if(np!=0)

    {
        printf("\n");
        printf("\n\t\t\t\t\tCongratulations!!!\n");
        printf("\n\t\t\t\t\tYou have 30 percentage off for Movie Ticket!\n");
        dis=dis_fee*np*30/100;
        printf("\n\t\t\t\t\tDiscount amount:%d",dis);
        printf("\n\t\t\t\t\t=================================================\n");
        fee=fee-dis;
        printf("\t\t\t\t\t Your ticket amount\t\t\t= %d\n",fee);
    }
    else
    {
        printf("\n\t\t\t\t\tSorry,");
        printf("\n\t\t\t\t\tYou don't have any discount...");
        printf("\n\t\t\t\t\t=================================================\n");
        printf("\t\t\t\t\t Your ticket amount  \t\t\t= %d\n",fee);

    }

        printf("%s",name);
        printf("\t\t\t\t\t Your canteen amount\t\t\t= %d",total);
        printf("\n");
        printf("%s",name);
        printf("\t\t\t\t\t Your Parking Fee\t\t\t= %d",mtt);
    tb=fee+total+mtt;


}



int main()
{
system ("color 1F");{
    decoration();//1
    printf("\n\n\t\t\t______________________________________________________________________________________________");

    information();//2
    //printf("\n..............................................................................................");

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
    parking(p);//Visa
    printf("\n");
    printf("\n");
    want_purchase_quarry();
    //canteen(ans);
     discount();
    printf("\n\t\t\t\t\t\t\t\t--------\n");
    printf("\n\t\t\t\t\t Your Total bill\t= %d",tb);
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


}
