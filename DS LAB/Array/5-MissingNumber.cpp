#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[] = {1,2,3,5,6};
    n = sizeof(arr) / sizeof(arr[0])  + 1;

    // xor lenge saare element array ke 
    // a^a = 0
    // a^0 = a
    int xor1=0;
    for(int i=1; i<=n; i++){
        xor1 = xor1 ^i;
    }


    //missing array ka xor
    int xor2=0;
    for(int i=0; i<n-1; i++){
        xor2 = xor2 ^ arr[i];
    }
    
    cout << "Missing Number = " << (xor1 ^ xor2) << endl;
return 0;
}