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

bool isValid(vector<int> &arr, int n, int m, int maxallowedpage)
{
    int stu = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxallowedpage)
        {
            return false;
        }

        if (pages + arr[i] <= maxallowedpage)
        {
            pages += arr[i];
        }
        else
        {
            stu++;

            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}

int bookcase(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << bookcase(arr, n, m) << endl;
    return 0;
}
