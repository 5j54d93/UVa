#include <iostream>
using namespace std;

int main()
{
    int NumberOfTestCases;
    cin >> NumberOfTestCases;
    for(int i=1;i<=NumberOfTestCases;i++)
    {
        int depth,nball,pos=1,j=1;
        cin >> depth >> nball;
        while(j<depth)
        {
            if(nball%2==0) pos=pos*2+1;
            else pos*=2;
            if(nball%2==0) nball/=2;
            else nball=nball/2+1;
            j++;
        }
        cout << pos << endl;
    }
    return 0;
}
