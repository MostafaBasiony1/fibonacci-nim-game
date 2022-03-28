#include <iostream>
using namespace std;
int main(){

    float power;
    cout<< "enter the power of e: ";
    cin>> power;
    int acc = 500;
    float ans = 1;
    float temp = 1;
    int i;

    for (i = 1; i <= acc; i++) {
        temp = (temp * power) / i;
        ans += temp;
    }
    cout<<"e^"<<power<<" = "<<ans<<endl;
    return 0;
}

