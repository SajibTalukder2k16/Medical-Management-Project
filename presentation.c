#include<stdio.h>
#include<stdlib.h>
#include "main.h"
#include "delete.h"
int call_again_for_insert();
int design()
{
        system("COLOR 2E");
printf("\t\t****************************\n");
printf("\t\t* **************************\n");
printf("\t\t * *\n");
printf("\t\t  * *\n");
printf("\t\t   * *\n");
printf("\t    ______-------________--------______\n");
printf("\t    Wellcome to Sajib's Diagonostic Center");
printf("\n\t    ______-------________--------______\n");
printf("\t\t                      * *\n");
printf("\t\t                       * *\n");
printf("\t\t                        * *\n");
printf("\t\t************************** *\n");
printf("\t\t****************************\n\n");
call_again_for_insert();
}

int call_again_for_insert(){ printf("\n_________------------_________-------------___________---------\n\n");
printf("********You Have entered Sajib's Diagonostic center*******\n\n\n");
    printf("\t\tpress 1 for insertation \n");
printf("\t\tpress 2 for delete\n");
printf("\t\tpress 3 for update\n");
printf("\t\tpress 4 for search\n");
printf("\t\tpress 5 for view saved data\n");
printf("\t\tpress 6 for exit from the code: ");
int n;
printf("\n\nEnter your choice: ");
scanf("%d",&n);
if(n==1)
{
    system("cls");
    int m;
    system("COLOR 0E");
    printf("\n_________------------_________-------------___________---------\n\n") ;
    printf("********You Have entered in insertation process: *******\n") ;
    printf("\t\tPress 1 for Patient\n");
    printf("\t\tpress 2 for Doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("\n\nEnter your choice :");
    scanf("%d",&m);
    system("cls");
        insert_here(m);
}
else if(n==2)
{
    system("cls");
    system("COLOR 0E");
    printf("\n_________------------_________-------------___________---------\n\n") ;
    printf("********You Have entered in delete process: *******\n") ;
    printf("\t\tpress 1 for patient\n");
    printf("\t\tpress 2 for doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("Enter your choice: ");
    int ty;
    scanf("%d",&ty);
    del(ty);
}
else if(n==3)
{
    system("cls");
    system("COLOR 0E");
    printf("\n_________------------_________-------------___________---------\n\n") ;
    printf("********You Have entered in update process: *******\n") ;
    printf("\t\tpress 1 for patient\n");
    printf("\t\tpress 2 for doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("\tEnter your choice : ");
    int xz;
    scanf("%d",&xz);
    upda(xz);

}
else if (n==4)
{
    system("cls");
    system("COLOR 0E");
printf("\n_________------------_________-------------___________---------\n\n") ;
    printf("********You Have entered in search process: *******\n") ;
    printf("\t\tpress 1 for patient\n");
    printf("\t\tpress 2 for doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("\tEnter your choice : ");
    int xz;
    scanf("%d",&xz);
    kujun(xz);

}
else if(n==5)
{
    system("cls");
    int mm;
    system("COLOR 0E");
    printf("\n_________------------_________-------------___________---------\n\n") ;
    printf("********You Have entered in view process: *******\n") ;
    printf("\t\tPress 1 for Patient\n");
    printf("\t\tpress 2 for Doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("\n\nEnter your choice :");
    scanf("%d",&mm);
    view(mm);
}
else if(n==6)
{
    return 0;
}

}



