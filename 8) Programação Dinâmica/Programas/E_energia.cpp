#include <bits/stdc++.h>

using namespace std;

int main(){

    int casos;
    cin >> casos;


    while(casos > 0){

    double a,b,c,d,difAno,difValor,result;


    // stringstream r;
    // string str;
    
    //     r.clear();
    //     str.clear();

        cin >> a >> b >> c >> d;

        difAno = c - a;
        difValor = d - b;

        result = difValor/difAno; 

        
        // r << result;
        // str = r.str();

        printf("%.2f\n", floor(result * pow(10, 2)) / pow(10, 2));

        // for(int i=0 ; i<str.length() ; i++){

        //     if(str[i] == '.'){
        //         str[i] == ',';
        //         str[i+3] == '\0'; 
        //     }
        // }
        
        // cout << str << endl;
        //cout << result << endl;


        casos--;
    }

    return 0;
}