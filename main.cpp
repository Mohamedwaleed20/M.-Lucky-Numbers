#include <iostream>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    bool found = false ;
    int mx = max(a,b);
    int mn = min(a,b);
    for(int i = mn ; i<=mx ; i++)
    {
        int x = i ;
        bool check = true;
        while(x>0)
        {
            if(x%10!=4&&x%10!=7)
            {
                check=false;
                break;
            }
            x=x/10;
        }
        if(check)
        {
            found=true;
            cout<< i << " ";
        }
    }
    if(found==false)
    {
        cout<<-1<<endl;
    }

    return 0;
}
