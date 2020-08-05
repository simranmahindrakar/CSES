#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mod = 1000000007;
    int numCoins, amount;
    
    cin>>numCoins>>amount;
    int coins[numCoins];
    for (int i=0; i<numCoins; i++) {
        cin>>coins[i];
    }
    vector<int> dp(amount+2,0);
    dp[0] = 1; //base case
    for(int i=1; i<=amount; i++)
    {
        for(int j=0; j<numCoins; j++)
        {
            if((i-coins[j])>=0)
             {
            (dp[i] += dp[i-coins[j]]) %= mod; 
              }
        }
    }
    cout<<dp[amount]<<endl;
}
