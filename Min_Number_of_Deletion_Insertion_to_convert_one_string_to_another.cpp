#include <stdio.h>
#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int LCS( string X, string Y, int m, int n ){

    int t[m+1][n+1];
    for(int i=0 ; i<=m ; i++ ){
        for(int j=0 ; j<=n ; j++){
            if(i==0 || j==0)
                t[i][j]=0;
            else if (X[i - 1] == Y[j - 1])
                t[i][j] = t[i - 1][j - 1] + 1;

            else
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
    return t[m][n];
}

int main()
{
    string X = "SEA";
    string Y = "EAT";


    int M = X.size();
    int N = Y.size();
    int sub_len=LCS( X, Y, M, N );




    cout<<"Insertion "<< (M-sub_len) ;
    cout<<"Deletion "<<  (N-sub_len);

    return 0;
}
