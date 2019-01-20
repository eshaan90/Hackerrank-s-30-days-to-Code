#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }
    // Write Your Code Here
    int total_swaps=0;
    for(int i=0;i<n;i++){
        int num_of_swaps=0;
        for(int j=0;j<n-i-1;j++){
            if(a.at(j)>a.at(j+1)){
                swap(a.at(j),a.at(j+1));
                num_of_swaps++;
            }
            
        }
        if(num_of_swaps==0){
            break;
        }
        total_swaps+=num_of_swaps;
    }
    cout <<"Array is sorted in " << total_swaps << " swaps."<<endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back()<< endl;
    return 0;
}

