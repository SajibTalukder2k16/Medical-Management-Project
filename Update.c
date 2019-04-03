#include "main.h"
#include<stdio.h>
int upda(int p){
    system("COLOR 1A");
    system("cls");
    int k=0;
if(p==3){
    printf("Enter the user id you wanted to update: ");
    int pp;
    scanf("%d",&pp);
    fflush(stdin);
    FILE *dd;
    FILE *tt;
    dd=fopen("staf_data.txt","r");
    tt=fopen("temporary.txt","a");
    struct staff ab;
    while((fscanf(dd,"%d %d %s %s\n",&ab.id,&ab.age,ab.namel,ab.mobil)!=EOF))
    {
        char tr[89];
        fgets(tr,80,dd);
        int a;
        if(ab.id==pp)
        {
            printf("\nDo you want to change your user id: \n1.yes\n2.No\n");
            printf("\tEnter your choice");
            scanf("%d",&a);
            if(a==1){printf("Enter id: ");
                    scanf("%d",&ab.id);
                    fflush(stdin);
            }
            printf("\nDo you want to change your age id: \n1.yes\n2.No\n");
            printf("\tEnter your choice");
            scanf("%d",&a);
            if(a==1){printf("Enter age: ");
                    scanf("%d",&ab.age);
            fflush(stdin);}
            printf("\nDo you want to change your name: \n1.yes\n2.No\n");
            printf("\tEnter your choice");
            scanf("%d",&a);
            if(a==1){
                printf("Enter name: ");
            gets(ab.namel);
            printf("\nEnter mobile no.: ");}
            printf("\nDo you want to change your mobile no :  \n1.yes\n2.No\n");
            printf("\tEnter your choice");
            scanf("%d",&a);
            if(a==1){printf("Enter mobile no: ");gets(ab.mobil);}
            fprintf(tt,"%d %d %s %s\n",ab.id,ab.age,ab.namel,ab.mobil);
            printf("\t\tSuccefully updated\n");
            k=1;

        }
        else
        {
            fprintf(tt,"%d %s\n",ab.id,tr);
        }

    }
    fclose(dd);
    fclose(tt);
    remove("staf_data.txt");
    rename("temporary.txt","staf_data.txt");
 }
 else if(p==2)
 {

    printf("Enter the user id you wanted to update : ");
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
            printf("Enter user id: ");
            scanf("%d",&abc.id);
            fflush(stdin);
            printf("Enter age: ");
            scanf("%d",&abc.age);
            fflush(stdin);
            printf("Enter name: ");
            gets(abc.nam);
            printf("Enter time: ");
            gets(abc.time);
            printf("Enter department: ");
            gets(abc.department);
            printf("Enter mobile: ");
            gets(abc.mob);
            fprintf(tt,"%d %d %s %s %s %s\n",abc.id,abc.age,abc.nam,abc.time,abc.department,abc.mob);
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
    printf("Enter the user id you wanted to update: ");
    int pp;
    scanf("%d",&pp);
    fflush(stdin);
    FILE *dd;
    FILE *tt;
    dd=fopen("patient_data.txt","r");
    tt=fopen("temporary.txt","a");
    struct patient_data abcde;

    while(fscanf(dd,"%d ",&abcde.id)!=EOF)
    {
        char ar[80];
        fgets(ar,70,dd);
        if(abcde.id==pp)
        {
            printf("Enter user id: ");
            scanf("%d",&abcde.id);
            printf("%d \n",abcde.id);
            printf("Enter age : ");
            scanf("%d",&abcde.age);
            fprintf(tt,"%d ",abcde.id);
            fflush(stdin);
            printf("Enter name: ");
            char ara[67];
            gets(ara);
            fprintf(tt,"%s ",ara);
            fprintf(tt,"%d ",abcde.age);
            printf("Enter blood group : ");
            gets(ara);
            fprintf(tt,"%s ",ara);
            printf("Enter gender: ");
            gets(ara);
            fprintf(tt,"%s ",ara);
            printf("Mobile no.: ");
            gets(ara);
            fprintf(tt,"%s ",ara);
            printf("Enter present address: ");
            gets(ara);
            fprintf(tt,"%s ",ara);
            printf("Enter permanent address: ");
            gets(ara);
            fprintf(tt,"%s ",ara);
            printf("Enter the doctors name : ");
            gets(ara);
            fprintf(tt,"%s ",ara);
            printf("Enter problems and tests: ");
            gets(ara);
            fprintf(tt,"%s\n",ara);

            printf("Successfully Updated\n");
            k=1;

        }
        else
        {
            fprintf(tt,"%d %s",abcde.id,ar);

        }
    }
    fclose(dd);
    fclose(tt);
    remove("patient_data.txt");
    rename("temporary.txt","patient_data.txt");


}
if(k==0)
    printf("NOt FounD\n");
printf("\t\tDo you want to update another data\n1.Yes\n2.Go to main menu \n3.Exit\n");
int mmm;
printf("enter yout choice: ");
scanf("%d",&mmm);
if(mmm==1)
{
    system("cls");
    system("COLOR 0E");
    printf("\t\tpress 1 for patient\n");
    printf("\t\tpress 2 for doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("\tEnter your choice : ");
    int xz;
    scanf("%d",&xz);
    upda(xz);

}
else if(mmm==2)
{
    call_again_for_insert();
}
else if(mmm==3)
    return 0;


}
