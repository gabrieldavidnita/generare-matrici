#ifndef FISA1_H_INCLUDED
#define FISA1_H_INCLUDED
#include <iostream>
using namespace std;

void afisareMatrice(int a[100][100] , int n )
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void ex1(){

    int x[100][100];

    int n=6;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             x[i][j]=j;
        }
    }


    afisareMatrice(x,n);
}


void ex2()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            x[i][j]=i;
        }
    }
    afisareMatrice(x,n);
}
//11 12 13 14 15                11=> 1 12=>2  13=>3 14=>4 15=>5
//21 22 23 24 25                21=> 6 22=>7  23=>8 24=>9 25>10
//31 32 33 34 35                31=> 11                           j=n*(i-1)+j
//41 42 43 44 45
//51 52 53 54 55
void ex3()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            x[i][j]=(i+j)%2;
        }
    }
    afisareMatrice(x,n);
}


void ex4()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            x[i][j]=n*(i-1)+j;
        }
    }
    afisareMatrice(x,n);
}

void ex5()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            x[i][j]=n*(j-1)+i;
        }
    }
    afisareMatrice(x,n);
}


void ex6()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
           if(i<j)
           {
               x[i][j]=i;
           }else
           {
               x[i][j]=j;
           }
        }
    }
    afisareMatrice(x,n);
}



void ex7()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
           if(i>j)
           {
               x[i][j]=i;
           }else
           {
               x[i][j]=j;
           }
        }
    }
    afisareMatrice(x,n);
}


void ex8()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
           if(i>j)
           {
               x[i][j]=i-j;
           }else
           {
               x[i][j]=j-i;
           }
        }
    }
    afisareMatrice(x,n);
}
#endif // FISA1_H_INCLUDED
