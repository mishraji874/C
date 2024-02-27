#include<stdio.h>
#include<conio.h>
#include<io.h>
#include<dos.h>
void main()
{
    int i,test;
    char ch,FN[20];
    char s[] = {"#FILE/FOLDER PROTECTION SOFTWARE!"};
    start:
    clrscr();
    gotoxy(14,5);
    textcolor(2);
    printf("_________________________________________________");
    gotoxy(14,6);
    printf("_________________________________________________");
    gotoxy(14.10);
    printf("_________________________________________________");
    gotoxy(18,10);
    textcolor(10);
    for(i=0;s[i]!='\0';i++)
    {
        _setcursortype(1);
        printf("%c",s[i]);
        delay(50);
        sound(1500);
        delay(50);
        nosound();
    }
    textcolor(2);
    gotoxy(22,12);
    printf("1. HIDE A FILE/FOLDER");
    gotxoy(22,14);
    printf("2. SHOW A FILE/FOLDER");
    gotoxy(22,16);
    printf("3. HELP");
    gotoxy(10,24);
    printf("ENTER YOUR CHOICE :->> ");
    ch=getch();
    if(ch==27)
        exit(0);
    switch (ch)
    {
    case '1':
        clrscr();
        gotoxy(15,6);
        textcolor(2);
        printf("_________________________________________________");
        gotoxy(15,7);
        printf("_________________________________________________");
        gotoxy(17,9);
        printf("Enter file/folder name with correct path !");
        gotoxy(17,11);
        printf("$: ");
        fflush(stdin);
        gets(FN);
        test = _chmod(FN,1,FA_SYSTEM | FA_HIDDEN | FA_RDONLY);
        if(test==-1)
        {
            clrscr();
            gotoxy(19,9);
            sound(1000);
            delay(200);
            printf("Unable to Hide file or folder");
        }
        else
        {
            clrscr();
            gotoxy(19,9);
            printf("Operation executed successfully !");
        }
        break;
    case '2':
        clrscr();
        gotoxy(15,6);
        textcolor(2);
        printf("_________________________________________________");
        gotoxy(15,7);
        printf("_________________________________________________");
        gotoxy(15,12);
        printf("_________________________________________________");
        gotoxy(17,9);
        printf("Enter file/folder name with correct path !");
        gotoxy(17,11);
        printf("$: ");
        fflush(stdin);
        gets(FN);
        test = _chmod(FN,1,0);
        if(test==-1)
        {
            clrscr();
            gotoxy(19,9);
            sound(1000);
            delay(200);
            printf('Unable to Show file or folder !');
        }
        else
        {
            clrscr();
            gotoxy(19,9);
            printf("Operation executed successfully !");
        }
        break;
    case '3':
        clrscr();
        gotoxy(9,6);
        textcolor(2);
        printf("____________________________________________________________");
        gotoxy(9,7);
        printf("____________________________________________________________");
        gotoxy(9,16);
        printf("____________________________________________________________");
        gotoxy(14,9);
        printf("ENTER FULL PATH OF FILE/FOLDER IN FOLLOWING FORMAT ");
        gotoxy(16,11);
        printf("Example :- If your file/folder present on E Drive ");
        gotoxy(24,13);
        printf("Then E:\\File Name or Folder Name ");
        gotoxy(12,15);
        printf("Note:- Providing the Extension of File is compulsory !");
        break;
    default:
        clrscr();
        sound(1000);
        delay(200);
        gotoxy(19,9);
        printf("PLEASE INPUT CORRECT CHOICE !");
        nosound();
        break;
    }
    delay(2000);
    goto start;
}