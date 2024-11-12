#include<iostream>
using namespace std;
int main()
{
    int n,arr[50];
    cout << "Enter size of array" << endl;
    cin>>n;

    cout << "Enter elements of array" << endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    // int ans=0;

    // //array elements ko xor karaya
    // for(int i=0; i<n; i++){
    //     ans = ans ^ arr[i];
    // }

    // // ab 1 se n-1 tak ka xor
    // for(int i=1; i<n; i++){
    //     ans = ans^i;
    // }

    // cout << "Duplicate Number =  " << ans;

    cout << "Duplicate Number = " ;
    for (int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }

return 0;
}

