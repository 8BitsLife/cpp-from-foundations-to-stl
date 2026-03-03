
#include <iostream>
using namespace std;

int main(){
    try{
        throw 5;
    }catch(int e){
        cout<<"Caught: "<<e<<endl;
    }
}
