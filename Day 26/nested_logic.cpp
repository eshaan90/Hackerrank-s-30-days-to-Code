#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int day,month,year;
    int exp_day,exp_month, exp_year;
    int hackos;
    
    cin >>day>>month>>year;
    cin >>exp_day>>exp_month>>exp_year;
    
    if(year>exp_year){hackos=10000;}
    else if(year==exp_year){
        if(month>exp_month){
            hackos=500*(month-exp_month);
        }
        else if (month==exp_month && day>exp_day){
            hackos=15*(day-exp_day);
        }
        else{
            hackos=0;
        }
    }
    else{
        hackos=0;
    }
    
    cout<< hackos<<endl;
    return 0;
}
