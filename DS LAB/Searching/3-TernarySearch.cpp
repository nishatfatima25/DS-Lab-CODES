#include<iostream>
using namespace std;
int main()
{

    //mid1 = left + (right-left)/3
    //mid2 = right  - (right-left)/3

    int n,arr[50],e,mid1,mid2,count=0;
    

    cout << "Enter size of array"<<endl;
    cin>>n;
    
    cout << "Enter elements of array" <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout << "Enter element to be searched" <<endl;
    cin>>e;

    int f=0;
    int l = n-1;
    while(f<=l){
        mid1 = f +  (l-f)/3;
        mid2 = l - (l - (mid1+1))/3;

        if(e==arr[mid1]){
            count++;
            break;
        }
        else if(e == arr[mid2]){
            count++;
            break;
        }
        else{
            if(e< arr[mid1]){
                l = mid1-1;
            }
            else if( e >=arr[mid1] && e<= arr[mid2]){
                f = mid1 +1;
                l= mid2-1;
            }
            else {
                f = mid2 +1;
            }
        }
    }

    if(count==0){
        cout << "Element Not Found";
    }
    else{
        cout << "Element Found";
    }
return 0;
}