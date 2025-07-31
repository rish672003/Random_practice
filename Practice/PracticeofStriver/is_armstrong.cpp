#include <bits/stdc++.h>
using namespace std;
    bool isArmstrong(int n) {

            

            int duplticate = n;
            int sum  = 0 ;

            while(n>0){
                int dg = n%10;
                
                sum = sum + (dg*dg*dg);
                 n = n/10;

            }

            if(sum == duplticate) return true;
            else return false;
    }

    int main() {
        int n;
        cin >> n;
        if (isArmstrong(n)) {
            cout << "Yes, it is an Armstrong number." << endl;
        } else {
            cout << "No, it is not an Armstrong number." << endl;
        }
        return 0;
    }
