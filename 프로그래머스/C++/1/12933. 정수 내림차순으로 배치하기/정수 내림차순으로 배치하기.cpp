#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> v;
    
    // 수를 string으로 변환
    string s = to_string(n);
    
    // 문자를 vector에 넣기
    for(int i = 0; i < s.length(); i++)
    {
        // 문자를 int로 변환
        int num = s[i] - '0';
        
        // vector<int>에 넣기
        v.push_back(num);    
    }
    
    // 벡터 내림차순 정렬
    sort(v.rbegin(), v.rend());
    
    cout << "정렬된 벡터: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    
    // 벡터 요소들을 하나의 수로 합쳐줌
    for(int i = 0; i < v.size(); i++)
    {
        answer += v[i] * pow(10, v.size() - i - 1);
        
        cout << answer << endl;
    }
    
    return answer;
}