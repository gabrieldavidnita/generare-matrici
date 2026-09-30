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

#endif // FISA1_H_INCLUDED
