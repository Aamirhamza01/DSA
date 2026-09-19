#include <iostream>
#include <vector>
using namespace std;

// void buble(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void selection(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int smallestindex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[smallestindex])
//             {
//                 smallestindex = j;
//             }
//         }
//         swap(arr[i], arr[smallestindex]);
//     }
// }

// void inserction (int arr[],int n){
//     for(int i=1; i<n; i++){
//         int curr= arr[i];
//         int prev=i-1;

//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }

// int main()
// {
//     int n = 5;
//     int arr[] = {4, 1, 5, 2, 3};
//     inserction(arr, n);
//     print(arr, n);
//     return 0;
// }

// void sortcolors(vector<int> &nums)
// {
//     int n = nums.size();
//     int low = 0, mid = 0, high = n - 1;

//     while (mid <= high)
//     {
//         if (nums[mid] == 0)
//         {
//             swap(nums[low], nums[mid]);
//             mid++;
//             low++;
//         }
//         else if (nums[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(nums[high], nums[mid]);
//             high--;
//         }
//     }
// }

// int main(){
//     vector<int> nums = {2, 0, 2, 1, 1, 0, 2};
//     sortcolors(nums);

//     cout << "Sorted Array : ";
//     for (int num : nums)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int> &A, int m, vector<int> &B, int n)
// {
//     int idx = m + n - 1;
//     int i = m - 1;
//     int j = n - 1;

//     while (i >= 0 && j >= 0)
//     {
//         if (A[i] >= B[j])
//         {
//             A[idx] = A[i];
//             idx--;
//             i--;
//         }
//         else
//         {
//             A[idx] = B[j];
//             idx--;
//             j--;
//         }
//     }

//     while (j >= 0)
//     {
//         A[idx] = B[j];
//         idx--;
//         j--;
//     }
// }

// int main()
// {
//     vector<int> A = {1, 2, 3, 0, 0, 0};
//     int m = 3;

//     vector<int> B = {4, 5, 6};
//     int n = 3;

//     merge(A, m, B, n);

//     cout << "Merge : ";

//     for (int value : A)
//     {
//         cout << value << " ";
//     }

//     cout << endl;
// }
