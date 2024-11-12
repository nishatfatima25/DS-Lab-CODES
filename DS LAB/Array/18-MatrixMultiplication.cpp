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

    //code for multiplication
    for(int i=0; i<m ; i++){
        for (int j=0; j<n; j++){
            c[i][j] = 0;

            for(int k=0; k<n; k++){
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    //code for result printing

    cout<< "Multiplication of matrices"<< endl;
    for(int i =0; i<m ; i++){
        for(int j=0; j<n; j++){
            cout << c[i][j] << " ";
        }
    }



return 0;
}