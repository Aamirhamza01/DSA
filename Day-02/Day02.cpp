#include <iostream>
using namespace std;

// class Solution
// {
// public:
//     int bitwiseCompliment(int n)
//     {
//         if (n == 0)
//             return 1;

//         int m = n;
//         int mask = 0;

//         while (m != 0)
//         {
//             mask = (mask << 1) | 1;
//             m = m >> 1;
//         }

//         return (~n) & mask;
//     }
// };

// int main()
// {
//     Solution obj;

//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     cout << "Complement = " << obj.bitwiseCompliment(n);

//     return 0;
// }

// int main()
// {

//     int a, b;
//     cout << "Enter the value of A" << endl;
//     cin >> a;
//     cout << "Enter the value of B" << endl;
//     cin >> b;
//     char op;
//     cout << "Enter the opreater " << endl;
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//         cout << "Sum :" << (a + b) << endl;
//         break;
//     case '-':
//         cout << "Differenc :" << (a - b) << endl;
//         break;
//     case '*':
//         cout << "Multiplye :" << (a * b) << endl;
//         break;
//     case '/':
//         cout << "Divid :" << (a / b) << endl;
//         break;
//     case '%':
//         cout << "Modulas :" << (a % b) << endl;
//         break;
//     default: cout<<"Please Enter valid input try again"<<endl;
//         break;
//     }
// }
