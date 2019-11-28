#include<stdio.h>
#include<string.h>
#include<process.h>
 
void main()
{
    FILE *p;
    char ch,s[100];
    char r[100]="REN ";
    char u[]=".{21EC2020-3AEA-1069-A2DD-08002B30309D} ";
    char v[50];
    int choice,i;
    p=fopen("a.bat","w+");
    if(p==NULL)
    {
        printf("Error in opening the file a.c");
        exit(0);
    }
    printf("This software can convert your File/Folder to Control Panel and can Restore again.");
    printf("\nEnter the path of the file: ");
    fflush(stdin);
    gets(s);
    for(i=0; i<25; i++)
        fputs("\nThis software is not responsible for any loss in data",p);
    printf("\nEnter choice :");
    printf("\n1.Protect Folder/File");
    printf("\n2.Unprotect folder/File");
    printf("\n3.Exit\n");
    scanf("%d",&choice);
 
    switch(choice)
    {
    case 1:
        strcat(r,s);
        printf("\nEnter new name of your folder/file: ");
        fflush(stdin);
        gets(v);
        strcat(r," ");
        strcat(r,v);
        strcat(r,u);
        break;
    case 2:
        strcat(r,s);
        strcat(r,u);
        printf("\nEnter new name of your folder/file: ");
        fflush(stdin);
        gets(v);
        strcat(r,v);
        break;
    default:
        fclose(p);
        remove("a.bat");
        exit(0);
    }
    fputs(r,p);
    for(i=0; i<25; i++)
        fputs("\nThis software is not responsible for any loss in data",p);
    fputs("exit",p);
 
    fclose(p);
 
    system("a.bat");
 
    remove("a.bat");
 
    return 0;
}