#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int start = 0;
    
    if(s[0] == '+' || s[0] == '-')
    {
        start = 1;
    }
    
    for(int i = start; i < s.length(); i++)
    {
        int time = 1;
        int count = s.length() - i - 1;
        
        while(count != 0)
        {
            time *= 10;
            
            count--;
        }
        
        switch(s[i])
        {
            case '0':
                answer += 0 * time;
                break;
            case '1':
                answer += 1 * time;
                break;
            case '2':
                answer += 2 * time;
                break;
            case '3':
                answer += 3 * time;
                break;
            case '4':
                answer += 4 * time;
                break;
            case '5':
                answer += 5 * time;
                break;
            case '6':
                answer += 6 * time;
                break;
            case '7':
                answer += 7 * time;
                break;
            case '8':
                answer += 8 * time;
                break;
            case '9':
                answer += 9 * time;
                break;
        }
    }
    
    if(s[0] == '-')
    {
        return answer * -1;
    }
    
    return answer;
}