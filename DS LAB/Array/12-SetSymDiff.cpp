#include<iostream>
using namespace std;
int main()
{
    // set symmetric difference (a-b) U (b-a)

    int m,n,a[100],b[100],count;

    cout << "Enter size of array1" <<endl;
    cin>>m;
    cout << "Enter elements of array1" << endl;
    for(int i=0; i<m ; i++){
        cin>> a[i];
    }

    cout << "Enter size of array2" << endl;
    cin>>n;
    cout << "Enter elements of array2" << endl;
    for(int j=0; j<n; j++){
        cin>> b[j];
    }

    cout << "Set Symmetric Difference - " << endl;
    //a-b
    for(int i=0; i<m; i++){
        count=0;
        for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                count++;
            }
        }
        if(count==0){
            cout << a[i] << " ";
        }
    }


    //b-a
    for(int i=0; i<n; i++){
        count =0;
        for(int j=0; j<m; j++){
            if(b[i]==a[j]){
                count++;
            }
        }
        if(count==0){
            cout << b[i] << " ";
        }
    }
return 0;
}