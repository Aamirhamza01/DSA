#include <iostream>
#include <vector>
using namespace std;

// int binarysearch(vector<int> arr)
// {
//     int st = 1, end = arr.size() - 2;

//     while (st <= end)
//     {
//         int mid = st + (end - st) / 2;

//         if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
//         {
//             return arr[mid];
//         }
//         else if (arr[mid - 1] < arr[mid])
//         {
//             st = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {3, 4, 5, 9, 15, 12, 10, 8, 5};

//     cout << binarysearch(arr) << endl;

//     return 0;
// }

// int singleDuplicate(vector<int>& A){
//     int n=A.size();

//     if(n==1) return A[0];
//     int st=0,end=n-1;
//     while (st<=end){
//         int mid = st+(end-st)/2;

//         if(mid==0 && A[0] !=A[1]) return A[mid];
//         if(mid == n-1 && A[n-1] !=A[n-2]) return A[mid];

//         if(A[mid-1]!=A[mid] && A[mid] !=A[mid+1]) return A[mid];

//         if(mid%2==0){
//             if(A[mid-1]==A[mid]){
//                 end = mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }else{
//             if(A[mid-1]==A[mid]){
//                 st=mid+1;
//             }else{
//                 end=mid+1;
//             }
//         }



//     }
//     return -1;
    
// }


// int main()
// {
//     vector<int> A = {1,1,2,3,3,4,4,5,5,6,6};

//     cout << singleDuplicate(A) << endl;

//     return 0;
// }


























































