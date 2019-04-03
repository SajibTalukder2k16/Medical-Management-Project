#include "main.h"
#include<stdio.h>
int del(int p){
    system("COLOR 1A");
    system("cls");
     int k=0;
if(p==3){

    printf("Enter the user id you wanted to delete: ");
    int pp;
    scanf("%d",&pp);
    fflush(stdin);
    FILE *dd;
    FILE *tt;
    dd=fopen("staf_data.txt","r");
    tt=fopen("temporary.txt","a");
    struct staff ab;
    while((fscanf(dd,"%d ",&ab.id)!=EOF))
    {
        char ar[80];
        fgets(ar,70,dd);
        if(ab.id==pp)
        {
            printf("Successfully Deleted: \n");
            k=1;
        }
        else
        {
            fprintf(tt,"%d %s",ab.id,ar);
        }

    }
    fclose(dd);
    fclose(tt);
    remove("staf_data.txt");
    rename("temporary.txt","staf_data.txt");
 }
else if(p==2)
 {

    printf("Enter the user id you wanted to delete: ");
    int pp;
    scanf("%d",&pp);
    fflush(stdin);
    FILE *dd;
    FILE *tt;
    dd=fopen("doctor_data.txt","r");
    tt=fopen("temporary.txt","a");
    struct doctor abc;

    while(fscanf(dd,"%d ",&abc.id)!=EOF)
    {
        char ar[80];
        fgets(ar,70,dd);
        if(abc.id==pp)
        {
            printf("Successfully deleted\n");
            k=1;
        }
        else
        {
            fprintf(tt,"%d %s",abc.id,ar);

        }
    }
    fclose(dd);
    fclose(tt);
    remove("doctor_data.txt");
    rename("temporary.txt","doctor_data.txt");


}
else if(p==1)
{
    printf("Enter the user id you wanted to delete: ");
    int pp;
    scanf("%d",&pp);
    fflush(stdin);
    FILE *dd;
    FILE *tt;
    dd=fopen("patient_data.txt","r");
    tt=fopen("temporary.txt","a");
    struct patient_data abcd;

    while(fscanf(dd,"%d ",&abcd.id)!=EOF)
    {
        char ar[80];
        fgets(ar,70,dd);
        if(abcd.id==pp)
        {
            printf("Successfully deleted\n");
            k=1;
        }
        else
        {
            fprintf(tt,"%d %s",abcd.id,ar);

        }
    }
    fclose(dd);
    fclose(tt);
    remove("patient_data.txt");
    rename("temporary.txt","patient_data.txt");
}
if(k==0)
{
    printf("Not FounD\n");
}
printf("Do you want to delete another data : \n1.Yes\n2.go to main menu \n3.exit\n");
int mmm;
scanf("%d",&mmm);
if(mmm==1)
{
system("cls");
    printf("\t\tpress 1 for patient\n");
    printf("\t\tpress 2 for doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("Enter your choice: ");
    int ty;
    scanf("%d",&ty);
    del(ty);
}
else if(mmm==2)
{
    call_again_for_insert();
}
else if(mmm==3)
    return 0;
}
