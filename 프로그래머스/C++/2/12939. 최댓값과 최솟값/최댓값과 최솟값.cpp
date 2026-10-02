#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp;
    vector<int> v;
    
    stringstream ss(s);
    
    while(ss >> temp)
    {
        v.push_back(stoi(temp));
    }
    
    sort(v.begin(), v.end());
    
    answer += to_string(v[0]);
    answer += " ";
    answer += to_string(v[v.size() - 1]);
    
    return answer;
}