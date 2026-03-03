
#include <iostream>
using namespace std;

int main() {
    int curr, count = 1;
    if(cin >> curr){
        int val;
        while(cin >> val){
            if(val == curr) count++;
            else{
                cout << curr << " occurred " << count << " times" << endl;
                curr = val;
                count = 1;
            }
        }
        cout << curr << " occurred " << count << " times" << endl;
    }
}
