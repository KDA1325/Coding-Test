#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; i++)
    {
        // 약수 구하기
        if(n % i == 0)
        {
            answer += i;
            
            cout << answer << endl;
        }       
    }
    
    return answer;
}