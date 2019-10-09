#include <bits/stdc++.h> 
  
using namespace std; 

struct item 
{ 
    int profit, weight; 
    item(int profit, int weight) : profit(profit), weight(weight) 
    {} 
}; 
  
// Comparison according to profit/weight ratio 
bool comp(struct item i1, struct item i2) 
{ 
    double rat1 = (double)i1.profit / i1.weight; 
    double rat2 = (double)i2.profit / i2.weight; 
    return rat1 > rat2; 
} 
  
// Main greedy function
double fractKnapsack(int W, struct item a[], int n) 
{ 
    // sorting item on basis of ratio 
    sort(a, a + n, comp); 

    int currWeight = 0;  // Current weight in knapsack 
    double finalprofit = 0.0; // Result (profit in Knapsack) 
  
    for (int i = 0; i < n; i++) 
    { 
        // If adding item won't outgrow the capacity, add it completely 
        if (currWeight + a[i].weight <= W) 
        { 
            currWeight += a[i].weight; 
            finalprofit += a[i].profit; 
        } 
  
        // else add fractional part of it 
        else
        { 
            int remain = W - currWeight; 
            finalprofit += a[i].profit * ((double) remain / a[i].weight); 
            break; 
        } 
    } 
  
    // final profit 
    return finalprofit; 
} 
  
// main program
int main() 
{ 
    int W = 50;   //    Max capacity of knapsack 
    item a[] = {{60, 10}, {100, 20}, {120, 30}}; 
  
    int n = sizeof(a) / sizeof(a[0]); 
  
    cout << "Maximum profit that can be obtained = "
         << fractKnapsack(W, a, n); 
    return 0; 
} 

