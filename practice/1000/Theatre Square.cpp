#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    // we need to cover the sides without breaking the slab of sides axa
    long long res = ceil((double)n/a) * ceil((double)m/a);
    cout << res << endl;
}
