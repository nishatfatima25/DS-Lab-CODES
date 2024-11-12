#include<iostream>
using namespace std;
int main()
{
    int m,n,a[100][100],b[100][100],c[100][100];

    cout<< "Enter order of matrix" << endl;
    cin>>m>>n;
    //enter element of array
    cout << "Enter elements of array" <<endl;
    for(int i=0; i<m ; i++){
        for(int j=0; j<n;j++){
            cin>> a[i][j];
        }
    }

    //code for Transpose
    for(int i=0; i<m ; i++){
        for (int j=0; j<n; j++){
            b[j][i] = a[i][j];
        }
    }

    //code for result printing

    cout<< "Transpose of matrix"<< endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << b[i][j] << " ";
        }
    }



return 0;
}