#include<iostream>
using namespace std;
int main()
{
    // for 2d matrix -> D  = (a*d) - (b*c)
    
    //for 3d matrix  -> D = a(ei-fh) - b(di-gf)  + c(dh -gc)

    int m,n,arr[50][50],D;
    cout << "Enter rows" <<endl;
    cin>>m;
    cout << "Enter columns" << endl;
    cin>>n;

    cout << "enter elements" <<endl;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];

            
            D = arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]) - arr[0][1]*(arr[1][0]*arr[2][2] - arr[2][0]*arr[1][2]) + arr[0][2]*(arr[1][0]*arr[2][1] - arr[2][0]*arr[1][1]);
        }
    }
    cout << "Determinant = " << D;
    
    
return 0;
}
