#include <bits/stdc++.h>

using namespace std;

int main(){

    int n1,n2;

    cin >> n1;
    cin >> n2;

    vector<int> numbers;

    for(int i=n2 ; i>=n1 ; i--){

        if(i%3==0){
            numbers.push_back(i);
        }
        
    }
    
    for(int i=0 ; i<numbers.size() ; i++){

        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}