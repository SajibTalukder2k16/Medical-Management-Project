#include "main.h"
int passd()
{

    FILE *pas;;
    fflush(stdin);
    pas=fopen("password.txt","r");
    int count=0;
    char a[23];
    fscanf(pas,"%s",a);
    Again:
    system("cls");
    system("COLOR 1F");
    printf("\n\n\n\t\t\t<<ENTER YOUR PASSWORD: ");
    char mm[34];
    fflush(stdin);
    scanf("%s",mm);
    int j,ty;
    if(stricmp(mm,a)==0)
    {
        system("cls");
        design();}
    else
	    {
	    	system("COLOR 4F");
	    	printf("\n\n\t\tInvalid password\n");
	    	printf("\n\n\t\tWould you like to try again and %d remaining  ",4-count);
	    	printf("\n\n\t\tPress 1 for continue and any other character for exit\n");
	    	scanf("%d",&ty);
	    	if(ty==1)
	    	{
	    		count++;
	    		if(count==5)
	    		{
	    			printf("\n\t\t\t>>>DENIED TO ACCESS THE SYSTEM<<<\n");
	    			goto end;
	    		}
	    		goto Again;
	    	}
	    	else
	    	return 0;
	    }

	        end:
	    	return 0;
}
