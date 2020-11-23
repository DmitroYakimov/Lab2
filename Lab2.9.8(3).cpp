#include <iostream>
using namespace std;

int main(void){
    int vector[] = {1,7,3,8,3,7,1};
    bool palindrom = false;
    int n = 
    for(int i = 0; i < sizeof(vector); i++){
        for(int j = sizeof(vector); j>0; j--){
            if(vector[i] == vector[j]){
                palindrom = true;
            }
            else{palindrom = false;}
            break;
        }
    }
    if(palindrom == true) {cout<< "It's palindrom";}
    else{cout << "Not palinrom";}
    return 0;
}