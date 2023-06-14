//https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    //For a given position I nmeed min on left and maxium on right
    int buy_price=prices[0], max_profit=0;
    for(int i=1;i<n;i++){
        max_profit=max(max_profit,prices[i]-buy_price);
        buy_price=min(buy_price,prices[i]);
    }

    return max_profit;
}
