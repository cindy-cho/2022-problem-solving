#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int lastNum = 999;
    for(auto num: arr){
        if(lastNum != num) answer.push_back(num);
        lastNum = num;
    }

    return answer;
}