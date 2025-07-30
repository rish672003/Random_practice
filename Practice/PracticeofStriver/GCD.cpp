#include <bits/stdc++.h>
using namespace std;

// int GCD(int n1, int n2)
// {

//     vector<int> v1;
//     vector<int> v2;
//     vector<int> v3;
//     int limit = min(n1, n2);

//     for(int i = 1; i <= limit; i++)
//     {
//         if (n1 % i == 0)
//         {
//             v1.push_back(i);
//         }
//         if (n2 % i == 0)
//         {
//             v2.push_back(i);
//         }
//         i++;
//     }

//     int j = 1;
//     for (int i = limit; i >= 1; i--)
//     {
       
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             j = i;
//             break;
//         }
        
//     }

//      ;

//     return j;
// }

int GCD(int n1, int n2) {
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}


int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int c = GCD(n1, n2);
    cout << c << endl;
    return 0;
}
