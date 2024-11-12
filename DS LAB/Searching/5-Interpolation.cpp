// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,arr[50],e,pos,count;
//     //arrray should be sorted 
//     //regular intervals hone chahiye
//     // pos = low + ((x-a[low])/(a[high] - a[low])) * (high-low)

//     cout << "Enter size of array"<<endl;
//     cin>>n;
    
//     cout << "Enter elements of array" <<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout << "Enter element to be searched" << endl;
//     cin>>e;

//     int low =0;
//     int high = n-1;
//     while(low<=high){
//         pos = low + ((e-arr[low])/(arr[high] - arr[low])) * (high-low);
//         if(e==arr[pos]){
//             count++;
//             break;
//         }
//         else{
//             if(e<arr[pos]){
//                 high= pos-1;
//             }
//             else{
//                 low = pos+1;
//             }
//         }
//     }
//     if(count==0){
//         cout << "Element not found";
//     }
//     else{
//         cout << "Element found at " << pos +1 << " position";
//     }
// return 0;
// }

//doubt hai isme