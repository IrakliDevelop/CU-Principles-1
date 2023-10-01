#include<iostream>
using namespace std;

int main() {
    // declare variables;
    long long n, m, a;
    // input variables
    cin>> n >> m >> a;
    // divide and get number of squares for width
    long long width =  n / a;
    // divide and get number of squares for length
    long long length = m / a;
    // check if it has a reminder, we have to add a square at the end
    if (n % a != 0) {
        width++;
    }
    // same as above but for length
    if (m % a != 0) {
        length++;
    }
    // get the area
    cout<< width * length;


}
