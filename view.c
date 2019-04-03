#include"main.h";
int view(int n)
{
    system("COLOR 1A");
    system("cls");
    if(n==1){

        FILE *fpat;
        fpat=fopen("patient_data.txt","r");
        printf("\t\tSaved Data \n");
        while(1)
        {
            char pat[500];
            if(fgets(pat,100,fpat)!=NULL)
                printf("%s",pat);
            else{
                fclose(fpat);
                break;}
        }
}
else if(n==2){
        FILE *fpat;
        fpat=fopen("doctor_data.txt","r");
        printf("\t\tDoctor's Saved Data \n");
        while(1)
        {
            char pat[500];
            if(fgets(pat,100,fpat)!=NULL)
                printf("%s",pat);
            else{
                fclose(fpat);
                break;}
        }



}
else if(n==3){
        FILE *fpat;
        fpat=fopen("staf_data.txt","r");
        printf("\t\tStaff's Saved Data \n");
        while(1)
        {
            char pat[500];
            printf("\t\tstaff's information\n");
            if(fgets(pat,100,fpat)!=NULL)
                printf("%s",pat);
            else{
                fclose(fpat);
                break;}
        }



}
printf("Do you want to see saved data again\n1.yes\n2.go to main menu \n3.exit\n");
int mmm;
printf("Enter your choice : ");
scanf("%d",&mmm);
if(mmm==1)
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
else if(mmm==2)
{
    call_again_for_insert();
}
else if(mmm==3)
    return 0;
}

