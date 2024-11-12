#include<iostream>
using namespace std;
int main()
{
    int m,n,a[100][100],b[100][100],c[100][100];

    cout << "Enter order of matrix" << endl;
    cin>>m>>n;
    //enter element of 1st array
    cout << "Enter elements of array1" <<endl;
    for(int i=0; i<m ; i++){
        for(int j=0; j<n;j++){
            cin>> a[i][j];
        }
    }

    //enter elements of 2nd array
    cout << "Enter elements of array2" << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            cin>>b[i][j];
        }
    }

    //code for addition
    for(int i=0; i<m ; i++){
        for (int j=0; j<n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    //code for result printing

    cout<< "Addition of matrices"<< endl;
    for(int i =0; i<m ; i++){
        for(int j=0; j<n; j++){
            cout << c[i][j] << " ";
        }
    }



return 0;
}