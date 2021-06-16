#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int inputNum, stringLength, oneNum;
    cin >> inputNum;
    
    while(inputNum--)
    {
        cin >> stringLength >> oneNum;
        int zeroNum;
        zeroNum = stringLength - oneNum;
        string ans;
        while(zeroNum--) ans += '0';
        while(oneNum--)  ans += '1';
        do{
            cout << ans << endl;
        }while( next_permutation(ans.begin(), ans.end()) );
        if(inputNum != 0) cout << endl;
    }
    
    return 0;
}
