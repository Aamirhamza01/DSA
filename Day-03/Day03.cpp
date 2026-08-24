#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     for (int st = 0; st < n; st++)
//     {
//         for (int end = st; end < n; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxSum=INT_MIN;

//     for (int st = 0; st < n; st++)
//     {
//         int currentsum =0;
//         for (int end = st; end < n; end++)
//         {
//             currentsum+=arr[end];
//             maxSum=max(currentsum,maxSum);
//         }

//     }

//     cout<<"Max sub array :"<< maxSum <<endl;

//     return 0 ;
// }

// int main()
// {
//     int n = 9;
//     int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
//     int maxSum=INT_MIN;
//     int currsum=0;

//     for (int st = 0; st < n; st++){
//         currsum+=arr[st];
//         maxSum=max(currsum,maxSum);
//         if(currsum<0){
//             currsum=0;
//         }

//     }

//     cout<<"Max sum sub arr : "<<maxSum;

//     return 0 ;
// }

// vector<int> pairsum(vector<int> nums, int target)
// {
//     vector<int> ans;
//     int n = nums.size();
//     int i = 0, j = n - 1;

//     while (i < j)
//     {
//         int ps = nums[i] + nums[j];
//         if (ps > target)
//         {
//             j--;
//         }
//         else if (ps < target)
//         {
//             i++;
//         }
//         else
//         {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     vector<int> nums = {2, 7, 5, 4, 3, 11, 15};

//     int target = 26;

//     vector<int> ans = pairsum(nums, target);
//     cout << ans[0] << "," << ans[1] << endl;

//     return 0;
// }

// vector<int> majority(vector<int> nums)
// {
//     int n = nums.size();
//     for (int val : nums)
//     {
//         int freq = 0;

//         for (int el : nums)
//         {
//             if (el == val)
//             {
//                 freq++;
//             }
//         }
//         if (freq > n / 2)
//         {
//             return val;
//         }
//     }
// }

// int main()
// {
//     vector<int> nums = {2, 2, 2, 3, 4, 3, 5};

//     vector<int> ans = majority(nums);
//     cout << "ans : " << ans;
// }

int main(){
    int freq=0 , ans=0;
    int nums={2,2,2,1,1,4};
    int n=nums.size();

    for(int i=0;i<n;i++){

    }
}

































