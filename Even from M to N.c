#include<stdio.h>
#include<conio.h>

void check(int, int);

int main()
{
    int a,b;
    printf ("\n Enter starting number:");
    scanf ("%d", &a );
    printf ("\n Enter ending number:");
    scanf ("%d", &b );
    check(a, b);
    return 0;
}

void check(int m, int n)
{
    if (m>n)
        printf ("\n Error: Please try again.");

    else
    {
        int i;
        printf ("\n Even numbers from %d to %d are:" ,m,n);
        for(i=m; i<=n; i++)
        {
            if(i%2==0)
            printf("%d \t", i);
        }
    }
getch();
}
