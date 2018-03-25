#include<stdio.h>
void main()
{
    int i,k,j=1,flag,p;
    char name1[25],name2[25],c2,c1,a[10]={0};
    printf("\n\n");
    for(i=0;i<50;i++)
    {
        printf("*");
    }
    printf("  WELCOME FRIENDS  ");
    for(i=0;i<50;i++)
    {
        printf("*");
    }
    printf("\n\n");
    printf("\t\t\t\t\t WELCOME TO 2 PLAYER TIC TAC TOE GAME : \n\n");

    A:
        printf("PLAYER 1 NAME : ");
        scanf(" %s",name1);
        printf("PLAYER 2 NAME : ");
        scanf(" %s",name2);

    B:

        printf("\n\t\t\t\t\tCHOOSE YOUR FAVOURITE SIGN (X or O) : \n\n");
        printf("%s : ",name1);
        scanf(" %c",&c1);

        if(c1=='X' || c1=='x')
        {
            c2=c1-9;
            printf("%s : %c",name2,c2);
        }

        else if(c1=='O' || c1=='o')
        {
            c2=c1+9;
            printf("%s : %c",name2,c2);
        }

        else
        {
            printf("\n\t\t\t\t\t     ENTER RIGHT CHOISE ASS-HOLE.\n");
            goto B;
        }

    printf("\t\t\t\t\t\t    GAME RULES : \n\n");
    printf("1> ENTER POSITION IN THIS WAY : \n\n");
    printf("\t| 1 || 2 || 3 |\n");
    printf("\t| 4 || 5 || 6 |\n");
    printf("\t| 7 || 8 || 9 |\n\n");
    printf("2> ENTER RIGHT POSITION .\n\n\n\n");

    C:

        printf("\n\t\t\t\t\t     WHO WANT TO ATTEMP FIRST ???\n\n");
        printf("PRESS 1 FOR %s.\n",name1);
        printf("PRESS 2 FOR %s.\n",name2);
        scanf(" %d",&p);

        if( p==1 || p==2)
        {
            printf("\n\n");
            goto D;
        }

        else
        {
            printf("\t\t\t\t\t     ENTER RIGHT CHOISE ASSHOLE.");
            goto C;
        }

    j=1;
    D:
        i=0;
        while(j==1)
        {
            flag=0;
            if(p==1)
            {
                E:
                    printf("\nENTER YOUR POSITION %s : ",name1);
                    scanf(" %d",&k);

                    if(a[k-1]!=0 || a[k-1]==c2 || a[k-1]==c1)
                    {
                        printf("\n\t\t\t\t\t ENTER RIGHT POSTION ASSHOLE %s.\n",name1);
                        goto E;
                    }
                    else
                    {
                        a[k-1]=c1;
                        ++i;
                        printf("\n\t| %c || %c || %c |\n",a[0],a[1],a[2]);
                        printf("\t| %c || %c || %c |\n",a[3],a[4],a[5]);
                        printf("\t| %c || %c || %c |\n",a[6],a[7],a[8]);
                        printf("\n");
                        j=1;

                        if((a[0]==c1&&a[1]==c1&&a[2]==c1) || (a[1]==c1&&a[4]==c1&&a[7]==c1) || (a[3]==c1&&a[4]==c1&&a[5]==c1) || (a[0]==c1&&a[3]==c1&&a[6]==c1) || (a[0]==c1&&a[4]==c1&&a[8]==c1) || (a[2]==c1&&a[5]==c1&&a[8]==c1) || (a[2]==c1&&a[4]==c1&&a[6]==c1) || (a[6]==c1&&a[7]==c1&&a[8]==c1))
                        {

                            flag=1;
                            printf("\n\t\t\t\t\t %s WON THE GAME.\n\n",name1);
                            break;
                        }

                        if(i>8)
                            break;
                        goto F;
                    }
            }

            else if(p==2)
            {
                F:
                    printf("ENTER YOUR POSITION %s : ",name2);
                    scanf(" %d",&k);

                    if(a[k-1]!=0 || a[k-1]==c2 || a[k-1]==c1)
                    {
                        printf("\n\t\t\t\t\t ENTER RIGHT POSTION ASSHOLE %s.\n",name2);
                        goto F;
                    }

                    else
                    {
                        a[k-1]=c2;
                        ++i;
                        printf("\n\t| %c || %c || %c |\n",a[0],a[1],a[2]);
                        printf("\t| %c || %c || %c |\n",a[3],a[4],a[5]);
                        printf("\t| %c || %c || %c |\n",a[6],a[7],a[8]);
                        printf("\n");
                        j=1;

                        if((a[0]==c2&&a[1]==c2&&a[2]==c2) || (a[3]==c2&&a[4]==c2&&a[5]==c2) || (a[0]==c2&&a[3]==c2&&a[6]==c2) || (a[1]==c2&&a[4]==c2&&a[7]==c2) ||(a[0]==c2&&a[4]==c2&&a[8]==c2) || (a[2]==c2&&a[5]==c2&&a[8]==c2) || (a[2]==c2&&a[4]==c2&&a[6]==c2) || (a[6]==c2&&a[7]==c2&&a[8]==c2))
                        {
                            flag=1;
                            printf("\n\t\t\t\t\t\t %s WON THE GAME.\n\n",name2);
                            break;
                        }

                        if(i>8)
                            break;
                        goto E;
                    }
            }

        }

    if(flag==0)
    {
        printf("\n\t\t\t\t\t Oooops !!! MATCH DRAWN.\n");
    }

    printf("\n\t\t\t\t\t DO YOU WANT TO PLAY IT AGAIN ???\n");

    G:
        printf("\n\n\t\t\t\t\t PRESS 1 FOR YES or 0 FOR NO.\n");
        scanf(" %d",&j);
        if(j==1)
        {
            for(i=0;i<10;i++)
                a[i]=0;
            flag=1;
            i=0;
            printf("\n\n");
            goto A;
        }

        else if(j==0)
            printf("\n\t\t\t\t\t\t THANKS FOR PLAYING.");

        else
        {
            printf("\n\t\t\t\t\t ENTER RIGHT CHOISE ASSHOLE.");
            goto G;
        }
    printf("\n");
}
