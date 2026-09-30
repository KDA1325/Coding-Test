#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int n_s = n;
    int n_m = 0;
    
    string n_string = to_string(n);
    int n_length = n_string.length();

    for(int i = 0; i < n_length; i++)
    {
        n_s = n / 10;
        
        n_m = n % 10;
        
        n = n_s;
        
        answer += n_m;
    }
    
    return answer;
}