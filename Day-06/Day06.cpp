#include <iostream>
#include <vector>
#include <algorithm>
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

// bool isValid(vector<int> &arr, int n, int m, int maxallowedpage)
// {
//     int stu = 1, pages = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxallowedpage)
//         {
//             return false;
//         }

//         if (pages + arr[i] <= maxallowedpage)
//         {
//             pages += arr[i];
//         }
//         else
//         {
//             stu++;

//             pages = arr[i];
//         }
//     }
//     return stu > m ? false : true;
// }

// int bookcase(vector<int> &arr, int n, int m)
// {
//     if (m > n)
//     {
//         return -1;
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     int ans = -1;
//     int st = 0, end = sum;

//     while (st <= end)
//     {
//         int mid = st + (end - st) / 2;

//         if (isValid(arr, n, m, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             st = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {2, 1, 3, 4};
//     int n = 4, m = 2;

//     cout << bookcase(arr, n, m) << endl;
//     return 0;
// }

// bool isPossible(vector<int>& arr,int n,int m,int maxTime){
//     int painters =1 ,time=0;

//     for(int i=0; i<n; i++){
//         if(time+arr[i]<=maxTime){
//             time+=arr[i];
//         }else{
//             painters++;
//             time=arr[i];
//         }
//     }
//     return painters<=m;
// }

// int mintimetopaint(vector<int>& arr , int n,int m){
//     int sum=0,maxval=INT_MIN;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         maxval=max(maxval,arr[i]);
//     }
//     int st=maxval , end=sum , ans=-1;
//     while (st<=end)
//     {
//         int mid=st+(end-st)/2;
//         if(isPossible(arr,n,m,mid)){
//             ans=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }

//     }
//     return ans;

// }

// int main(){
//     vector<int> arr={40,30,10,20};
//     int n=4,m=2;
//     cout<<mintimetopaint(arr,n,m)<<endl;
//     return 0;
// }

// bool isPossible(vector<int> &arr, int n, int c, int minimumallow)
// {
//     int cows = 1, last = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] - last >= minimumallow)
//         {
//             cows++;
//             last = arr[i];
//         }
//         if (cows == c)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int getdistance(vector<int> &arr, int n, int c)
// {
//     sort(arr.begin(), arr.end());
//     int st = 1, end = arr[n - 1] - arr[0], ans = -1;
//     while (st <= end)
//     {
//         int mid = st + (end - st) / 2;
//         if (isPossible(arr, n, c, mid))
//         {
//             ans = mid;
//             st = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n = 5, c = 3;
//     vector<int> arr = {1, 2, 3, 8, 4, 9};

//     cout << getdistance(arr, n, c) << endl;
//     return 0;
// }


// int main() {
//     int arr[] = {10, 25, 15, 30, 35, 40};
//     int target = 35;
//     int n = 6;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == target) {
//             cout << "Element found at index: " << i <<endl<<"at index Value :"<<arr[i]<< endl;
//             return 0;
//         }
//     }

//     cout << "Element not found" << endl;

//     return 0;
// }

// int main(){
//     int arr[]={20,30,40,50,60,70,80};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int key=90;
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==key){
//             cout<<"key :"<<key<<endl;
//             return 0;
//         }else if(arr[mid]==key){
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     cout<<"Not Found"<<endl;
//     return 0;
// }

int main() {
    int arr[] = {40, 10, 30, 20, 50};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
