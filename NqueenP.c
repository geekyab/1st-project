#include<stdio.h>
#include<math.h>

unsigned a[20],count=0;

void queen(unsigned n)
{
    int k=1;
    a[k]=0;
    while(k!=0)
    {
        do
        {
            a[k]++;
        }while((a[k]<=n) && !place(k));

        if(a[k]<=n)
        {
            if(k==n)
            {
                //count++;
                print(k);
            }
            else
            {
                k++;
                a[k]=0;
            }
        }
        else
            k--;
    }
}

int place(int pos)
{
    int i;
    for(i=0;i<pos;i++)
    {
        if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos))))
            return 0;
    }
    return 1;
}

int print(int n)
{
    int i,j;
    count++;
    printf("\n\nSolution %d : \n\n",count);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==j)
                printf("Q ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void main()
{
    unsigned n;
    printf("Enter the number of queens : ");
    scanf("%u",&n);
    queen(n);
    printf("\nTotal solution is %u.\n",count);
}
