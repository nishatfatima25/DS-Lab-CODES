#include<iostream>
using namespace std;
int main()
{
    int m,n,a[100],b[100];

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

    cout << "Set Intersection - " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            if(a[i]==b[j]){
                cout << a[i] << " ";
                break; //isse ek baar element check kaarlia toh break hoga same element wapas check nahi hoga
            }
        }
    }
return 0;
}