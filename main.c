/*
Written By : Samuel Wesley Rasquinha
Age : 12 Years
email : samuelrasquinha@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <conio.h>

#define FLOAT double


int main()
{
    const FLOAT pi = 3.14159265354 ;
    FLOAT error, diff, p,q,ans ;
    int nume, denom, fracs, cycles = 5 ;

    error = pi ;
    p = 22 ;
    q = 7 ;
    fracs = 0 ;

    printf("Enter the amount of estimation(s) that you require : ") ;
    scanf("%d",&cycles) ;

    while (fracs < cycles)
    {
        ans = p / q ;

        diff = (ans - pi) ;

        if (diff < 0)
        {
            diff = diff * (-1) ;
        }

        if (diff < error)
        {
            error = diff ;
            nume = (int) p ;
            denom = (int) q ;
            printf("\nThe better fraction of pi is %d / %d and error is %lf",nume,denom,error) ;
            fracs ++ ;
        }

        if (ans >= pi)
        {
            q++ ;
        }

        else
        {
            p++ ;
        }
    }

    getch() ;
    return 0;
}
