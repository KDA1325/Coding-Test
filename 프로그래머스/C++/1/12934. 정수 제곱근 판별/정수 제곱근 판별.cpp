#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    // n의 제곱근 구함
    // sqrt()는 double, float, long double 타입 지원
    double num = sqrt(n);
    
    // 제곱근의 정수 부분 저장
    int result = static_cast<int>(num);
    
    // 제곱근의 정수를 제곱해서 n이 되는지 확인
    if(pow(result, 2) == n)
    {
        return pow(result + 1, 2);
    }
    else
    {
        return -1;
    }
}