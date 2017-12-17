/*
A program that calculates the Nth index of fibonacci serie by fibonacci's recurrece relation
Read more @ https://en.wikipedia.org/wiki/Fibonacci_number#List_of_Fibonacci_numbers

- fib function
    f(n) = f(n-1) + f(n-2)
    n:0 OR 1 -----> 1
    
Coded by: DarkC343
*/

#include <iostream>

using namespace std;

class Math
{
public:
    // fibonacci
    int fib(int n)
    {
        if( n == 1 || n == 0 )
            return 1;
        return fib( n - 1 ) + fib( n - 2 );
    }
};

int main()
{
    Math mathObj;
    cout << mathObj.fib(6) << endl; // from fibonacci function
    
}
