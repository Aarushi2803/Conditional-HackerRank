// Question- Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

// What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

// solution

#include<iostream>
#include<cmath>
using namespace std;


long long fisrtfunction(long long m, long long n, long long x){
    long long newo = (m + x - 1) / x;
    long long newt = (n + x - 1) / x;
    return newo * newt;
}

int main (){

long long m , n , x;
 cin >> m >> n >> x;
 cout << fisrtfunction (m , n , x) << endl;
}
