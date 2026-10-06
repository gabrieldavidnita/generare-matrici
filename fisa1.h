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
//11 12 13 14 15              11=>1  12=>2 13=>3
//21 22 23 24 25
//31 32 33 34 35
//41 42 43 44 45
//51 52 53 54 55

void ex9()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {

          x[i][j]=j+i-1;
        }
    }
    afisareMatrice(x,n);
}


void ex10()
{
    int x[100][100];
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
             x[i][j]=(j+i-2)%n+1;

        }
    }
    afisareMatrice(x,n);
}

void ex11(int x[100][100],int n)
{
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
       {
            x[i][j]=(i*j)%n;

       }
    }
    afisareMatrice(x,n);
}


//12?
void ex13(int x[100][100],int n)
{

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i%2==1)
                x[i][j]=(i-1)*n+j;
            else
                x[i][j]=i*n-j+1;
        }
        afisareMatrice(x,n);
}
//14,15?

//fisa 2
void ex12(int x[100][100],int n)
{
    for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=n;j++)
         {
            x[i][j]=i/j;
         }
    }
    afisareMatrice(x,n);

}

void ex22(int x[100][100],int n)
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(j%i==0)
                x[i][j]=1;
            else
                x[i][j]=0;
        }
        afisareMatrice(x,n);
}

void ex32(int x[100][100],int n)
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i+j>n+1)
                x[i][j]=i*j;
            else
                x[i][j]=0;
        }
        afisareMatrice(x,n);
}

//ex 4?
//ex 5, 6?
void ex72(int x[100][100],int n)
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                x[i][j]=i;
            else
                if(i>j)
                    x[i][j]=x[i-j][j];
                else
                    x[i][j]=x[i][j-i];
        }
        afisareMatrice(x,n);
}



//4

//11 12 13 14 15                11=> 1 12=>2  13=>3 14=>4 15=>5
//21 22 23 24 25                21=> 6 22=>7  23=>8 24=>9 25>10
//31 32 33 34 35                31=> 11                           j=n*(i-1)+j
//41 42 43 44 45
//51 52 53 54 55

//1  2  3  4   5 6
//1 12 13 24 25 36                  j%2==1   a[i][j]=i+n*(j-1)
//2 11 14 23 26 35                  j%2==0   a[i][j]=n*j-(i-1)
//3 10 15 22 27 34
//4 9  16 21 28 33
//5 8  17 20 29 32
//6 7  18 19 30 31


void ex42( )
{  int a[100][100];
    int n=6;
    for(int i=1 ; i<=n; i++)
    {
        for(int j=1 ; j<=n; j++)
        {
            if(j%2==1)
            {
            a[i][j]=i+n*(j-1);
            }else{
            a[i][j]=n*j-(i-1);
            }
        }
    }
    afisareMatrice(a,n);
}

//   1  2  3  4  5  6

//   1  0  0  0  0  0    1
//   2  3  0  0  0  0    2
//   4  5  6  0  0  0    3               j<=i  a[i][j]=(i-1)*i/2+j
//   7  8  9  10 0  0    4
//   11 12 13 14 15 0    5
//   16 17 18 19 20 21   6


void ex52()
{
    int a[100][100], n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j<=i)
            {
                a[i][j]=(i-1)*i/2+j;
            }else{
                a[i][j]=0;
            }
        }
    }
    afisareMatrice(a,n);
}

void ex62()
{
    int a[100][100] , n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>i)
            {
                a[i][j]=0;
            }else if(i==1 || j==i){
                    a[i][j]=1;
             }else{

                  a[i][j]=  a[i-1][j-1]+a[i-1][j];
                }

        }
    }
    afisareMatrice(a,n);
}


//1 0  0  0 0 0             a[0][0] + a[0][1]        ,    a[i-1][j-1]+a[i-1][j];
//1 1  0  0 0 0
//1 2  1  0 0 0
//1 3  3  1 0 0
//1 4  6  4 1 0
//1 5 10 10 5 1
#endif // FISA1_H_INCLUDED
