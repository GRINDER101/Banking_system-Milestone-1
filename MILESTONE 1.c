#include <stdio.h>
#include <stdlib.h>

int main()

{

    int testid=201456;
    int testpin=5062;
    int idattempts=0;
    int pinattempts=0;
    int userid;
    int pin;

    printf("Welcome to the Assurance Bank! One of the best bank in the UK for students.\n\n");

    for(idattempts=0;idattempts<3;idattempts++)
    {
         printf("Enter your userID:- ");
         scanf("%d",&userid);

              if(userid==testid)
              {
                 printf("\nyour user id is correct! \n\nYou've successfully completed your first milestone!\n\n");
                 scanf("%%d",&userid);

                     printf("Now you're now one step away from reaching your goal!\n\n");

                       do
                       {
                          printf("Enter your pin:- ");
                          scanf("%d",&pin);

                                if(pin==testpin)
                                {
                                   printf("\nYour pin is correct! \n\nYou have successfully logged into your account.");
                                   scanf("%d",&pin);

                                }
                                else
                                 {
                                     printf("\nunfortunately your pin is incorrect. \n\n");
                                     pinattempts++;
                                 }

                        } while(pinattempts<3);

                              printf("Sorry but your account has been blocked for security reasons.\n\n");
                              return 0;

              }
              else
              {
                printf("\nunfortunately your user id is incorrect. \n\n");
              }


    }
           printf("Sorry but your account has been blocked for security reasons.\n\n");

}
