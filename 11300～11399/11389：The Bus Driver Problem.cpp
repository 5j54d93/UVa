#include <iostream>    
#include <algorithm>    
using namespace std;    
    
int main()    
{    
    int n, d, r, sum;    
        
    while(cin >> n >> d >> r)    
    {    
        if(n==0 && d==0 && r==0) break;    
            
        sum=0;    
            
        int M[n], E[n];    
        for(int i=0; i<n; i++) cin >> M[i];    
        for(int i=0; i<n; i++) cin >> E[i];    
            
        sort(M,M+n);    
        sort(E,E+n);    
            
        for(int i=0; i<n; i++)    
            if(M[i] + E[n-i-1] > d)    
                sum += (M[i] + E[n-i-1] - d)*r;    
            
        cout << sum << endl;    
    }    
        
    return 0;    
}
