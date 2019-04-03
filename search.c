#include "main.h"
int kujun(int p){
    system("COLOR 1A");
    system("cls");
    int k=0;
if(p==3){
    system("cls");
    printf("1.Search by id \n2.Search by name\n");
    int xu;
    printf("\n\tEnter your choice: ");
    scanf("%d",&xu);
    fflush(stdin);
    if(xu==1){
    int pp;
    printf("Enter the user id you wanted to search: ");
    scanf("%d",&pp);
    fflush(stdin);
    FILE *dd;
    dd=fopen("staf_data.txt","r");
    struct staff ab;
    while((fscanf(dd,"%d ",&ab.id)!=EOF))
    {
        char ar[80];
        fgets(ar,70,dd);
        if(ab.id==pp)
        {
            printf("%d %s\n",ab.id,ar);
            k=1;
        }

    }
    fclose(dd);}
if(xu==2)
{
    system("cls");
    char aj[67];
    printf("\n\tEnter name: ");
    gets(aj);
    int len=strlen(aj);
    fflush(stdin);
    FILE *dd;
    dd=fopen("staf_data.txt","r");
    struct staff ab;
    while((fscanf(dd,"%d %d %s",&ab.id,&ab.age,ab.namel)!=EOF))
    {
        int i=0;
        int j=0,kuet=0;;
        for(i=0;i<len;i++)
        {
            if(aj[i]==ab.namel[i])
                j++;
        }
        if(j==len)kuet=1;
        char ar[80];
        fgets(ar,70,dd);
        if((stricmp(ab.namel,aj)==0)||kuet==1)
        {
            printf("%d %d %s %s\n",ab.id,ab.age,ab.namel,ar);
            k=1;
        }

    }
    fclose(dd);

}
{

}
 }
else if(p==2)
 {
    printf("1.Search by id \n2.Search by name\n");
    int xu;
    printf("\n\tEnter your choice: ");
    scanf("%d",&xu);
    fflush(stdin);
    if(xu==1){
    int pp;
    FILE *dd;
    dd=fopen("doctor_data.txt","r");
    struct doctor abc;
    printf("\n\tEnter user id: ");
    scanf("%d",&pp);
    fflush(stdin);
    while(fscanf(dd,"%d ",&abc.id)!=EOF)
    {
        char ar[80];
        fgets(ar,70,dd);
        if(abc.id==pp)
        {
            printf("%d %s\n",abc.id,ar);
            k=1;

        }
    }
    fclose(dd);}
    else if(xu==2)
    {
        FILE *dd;
        dd=fopen("doctor_data.txt","r");
        struct doctor abc;
        char aj[67];
        printf("\n\tEnter name: ");
        gets(aj);
        int len=strlen(aj);
        while(fscanf(dd,"%d %d %s",&abc.id,&abc.age,abc.nam)!=EOF)
    {
        char ar[80];
        fgets(ar,70,dd);
        int i=0;
        int j=0,kuet=0;;
        for(i=0;i<len;i++)
        {
            if(aj[i]==abc.nam[i])
                j++;
        }
        if(j==len)kuet=1;

        if((stricmp(abc.nam,aj)==0)||kuet==1)
        {
            printf("%d %d %s %s\n",abc.id,abc.age,abc.nam,ar);
            k=1;

        }
    }
    fclose(dd);
    }
}
else if(p==1)
{
    system("cls");
    printf("1.press 1 for Search by user id\n");
    printf("2.press 2 for Search by name");
    int jj;
    printf("\n\t\tEnter your choice : ");
    scanf("%d",&jj);
    fflush(stdin);
    if(jj==1){printf("Enter the user id you wanted to search: ");
    int pp;
    scanf("%d",&pp);
    fflush(stdin);
    FILE *dd;
    dd=fopen("patient_data.txt","r");
    struct patient_data abcd;

    while(fscanf(dd,"%d ",&abcd.id)!=EOF)
    {
        char ar[80];
        fgets(ar,70,dd);
        if(abcd.id==pp)
        {
            printf("%d %s\n",abcd.id,ar);
            k=1;
        }
    }
    fclose(dd);
    }
    if(jj==2)
    {
        char aj[67];
        printf("\n\tEnter name: ");
        fflush(stdin);

        gets(aj);
        int len=strlen(aj);
    fflush(stdin);
    FILE *dd;
    dd=fopen("patient_data.txt","r");
    int x;

    while(fscanf(dd,"%d",&x)!=EOF)
    {
        char ar[80];
        char ii[80];
        fflush(stdin);
        fscanf(dd,"%s",ii);
        fflush(stdin);
        fgets(ar,70,dd);
        fflush(stdin);
        int i=0;
        int j=0,kuet=0;;
        for(i=0;i<len;i++)
        {
            if(aj[i]==ii[i])
                j++;
        }
        if(j==len)kuet=1;
        if((stricmp(ii,aj)==0)||kuet==1)
        {
            printf("%d %s %s\n",x,ii,ar);
            k=1;
        }
    }
    fclose(dd);
    }

}
if(k==0)
    printf(" NOT Found \n");
printf("Do you want to search again\n1.Yes\n2.Go to main menu \n3.exit\n");
int mmm;
printf("\t\t Enter your choice: ");
scanf("%d",&mmm);
if(mmm==1)
{
    system("cls");
    printf("\t\tpress 1 for patient\n");
    printf("\t\tpress 2 for doctor\n");
    printf("\t\tpress 3 for staff\n");
    printf("\tEnter your choice : ");
    int xz;
    scanf("%d",&xz);
    kujun(xz);
}
else if(mmm==2)
{
    call_again_for_insert();
}
else if(mmm==3)
    return 0;


}

