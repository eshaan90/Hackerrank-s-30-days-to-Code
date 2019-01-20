#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    double tip=meal_cost* static_cast<float>(tip_percent)/100;
    double tax=meal_cost* static_cast<float>(tax_percent)/100;
    double totalCost=meal_cost+tip+tax;
    //cout<<static_cast<int>(totalCost)<<endl;
    cout << fixed << setprecision(0) << totalCost;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    solve(meal_cost, tip_percent, tax_percent);
    
    return 0;
}

