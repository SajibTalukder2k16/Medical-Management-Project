#include "main.h"
int insert_here(int m)
{
    system("COLOR 1A");
    system("cls");
    FILE *fp;
    fp=fopen("patient_data.txt","a");

    void diseases()
    {
        fp=fopen("patient_data.txt","a");
        printf("\t\tAdd here: ");
        char *dis;
          dis=(char*)malloc(30);
        getchar();
        gets(dis);
        fprintf(fp,"%s\n",dis);
        free(dis);
        printf("Do you want to add more problems\n ");
            printf("\t1.Yes\n\t2.No\n");
            int p;
            fflush(stdin);
            printf("Enter your choice: ");
            scanf("%d",&p);
            fclose(fp);
            if(p==1)
                diseases();
    }
    struct patient_data new_patient;
        new_patient.blood_group = (char *) malloc(15*sizeof(char));
        new_patient.name=(char*)calloc(50,sizeof(char));
        new_patient.gender=(char *) malloc(10 * sizeof(char));
        new_patient.mobile_no=(char *) malloc(15 * sizeof(char));
        new_patient.give.present=(char*)calloc(30,1);
        new_patient.give.permanent=(char*)calloc(30,1);
        new_patient.doctorr=(char*)calloc(30,1);
        new_patient.diseasess=(char*)calloc(30,1);
        if(m==1)
        {
            printf("\n_________------------_________-------------___________---------\n\n");
            printf("\t\tYou are now in patient's insertatinon process\n\n");
            printf("\t\t*****Give information for patient****\n");

            printf("\t\tEnter id no:  ");
            scanf("%d",&new_patient.id);
            fprintf(fp,"%d ",new_patient.id);
            printf("\t\tEnter patient name: ");
            ///scanf("%s",new_patient.name);
            getchar();
            gets(new_patient.name);
            ///printf(new_patient.name);
            fprintf(fp,"%s ",new_patient.name);
            printf("\t\tEnter age: ");
            scanf("%d",&new_patient.age);
            fprintf(fp,"%d ",new_patient.age);
            printf("\t\tEnter Blood Group: ");
            scanf("%s",new_patient.blood_group);
            fprintf(fp,"%s ",new_patient.blood_group);
            printf("\t\tEnter Gender: ");
            scanf("%s",new_patient.gender);
            fprintf(fp,"%s ",new_patient.gender);
            printf("\t\tEnter Mobile No.: ");
            scanf("%s",new_patient.mobile_no);
            fprintf(fp,"%s ",new_patient.mobile_no);
            printf("\t\tEnter present address: ");
            getchar();
            gets(new_patient.give.present);
            fprintf(fp,"%s ",new_patient.give.present);
            printf("\t\tEnter Permanent address : ");
            fflush(stdin);
            gets(new_patient.give.permanent);
            fprintf(fp,"%s ",new_patient.give.permanent);

            printf("\t\tEnter the doctor's name you want to consult: ");
            fflush(stdin);
            gets(new_patient.doctorr);
            fprintf(fp,"%s ",new_patient.doctorr);
            printf("\t\tEnter your problems/diseases: ");
            fflush(stdin);
            gets(new_patient.diseasess);
            fprintf(fp,"%s ",new_patient.diseasess);
            printf("\t\tDo you want to add more problems\n ");
            printf("\t\t1.Yes\n\t\t2.No\n");
            int p;
            fclose(fp);
            fflush(stdin);
            printf("\t\tEnter your choice: ");
            scanf("%d",&p);
            if(p==1)
                diseases();
            else
            {
                printf("\t\tDo You want to add another patient data: \n1.Yes\n2.No or go to main menu\n");
                int x;
                scanf("%d",&x);
                if(x==1)
                {
                    insert_here(1);

                }
                if(x==2)
                    call_again_for_insert();

            }
            free(new_patient.blood_group);
            free(new_patient.name);
            free(new_patient.gender);
            free(new_patient.mobile_no);
            free(new_patient.give.present);
            free(new_patient.give.permanent);
            free(new_patient.doctorr);
            free(new_patient.diseasess);
     }

     struct doctor doctor_insert;


      if(m==2)
     {


         FILE *doctor_;
         doctor_=fopen("doctor_data.txt","a");
         printf("\n\t********Give Doctor's information*******\n\n");
         printf("\t\tEnter user id: ");
         scanf("%d",&doctor_insert.id);
         fprintf(doctor_,"%d ",doctor_insert.id);
         fflush(stdin);
         printf("\t\tEnter age: ");
         scanf("%d",&doctor_insert.age);
         fprintf(doctor_,"%d ",doctor_insert.age);
         fflush(stdin);
         printf("\t\tEnter name: ");
         char ara[20];
         gets(ara);
         strcpy(doctor_insert.nam,ara);
         ////printf("%s\n",doctor_insert.nam);
         fprintf(doctor_,"%s ",doctor_insert.nam);
         fflush(stdin);

         printf("\t\tEnter working time: ");
         gets(doctor_insert.time);
         fprintf(doctor_,"%s ",doctor_insert.time);

         printf("\t\tEnter Department: ");
         gets(doctor_insert.department);
         fprintf(doctor_,"%s ",doctor_insert.department);

         printf("\t\tEnter mobile: ");
         gets(doctor_insert.mob);
         fprintf(doctor_,"%s\n",doctor_insert.mob);
         fclose(doctor_);

         printf("\t\tDo you want to add another doctor's data: \n\n 1.Yes\n2.NO or go to main menu\n");
         int doc;
         scanf("%d",&doc);
         if(doc==1)
            insert_here(2);
         else if(doc==2)
            call_again_for_insert();

         }
    struct staff sstaff;
          if(m==3)
         {
             FILE *staf;
         staf=fopen("staf_data.txt","a");
         printf("\t\tYou are now in Staff's data insertation\n\n ");
         printf("\t\tGive information\n");
         printf("\t\tEnter user id: ");
         scanf("%d",&sstaff.id);
         ///fprintf(staf,"%d ",sstaff.id);
         printf("\t\tEnter age: ");
         fflush(stdin);
         scanf("%d",&sstaff.age);
         ///fprintf(staf,"%d ",sstaff.age);
         fflush(stdin);
         printf("\t\tEnter staff's name: ");
         gets(sstaff.namel);
         ///fprintf(staf,"%s ",sstaff.namel);
         ///printf("%s\n",sstaff.namel);
         printf("\t\tEnter staff's mobile no.");
         gets(sstaff.mobil);
         ///fprintf(staf,"%s ",sstaff.mobil);
         ///printf("%s",sstaff.mobil);
         fprintf(staf,"%d %d %s %s\n",sstaff.id,sstaff.age,sstaff.namel,sstaff.mobil);
         fclose(staf);
         printf("Do you want to add another staff's data: \n1.Yes\n2.NO or go to main menu\n");
         int doc;
         scanf("%d",&doc);
         if(doc==1)
            insert_here(3);
         else if(doc==2)
            call_again_for_insert();

         }
}


