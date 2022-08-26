#include<string>
#include<stack>
#define OPEN '('
#define CLOSE ')'

using namespace std;

bool solution(string s)
{
    int count = 0;
    for(auto ch : s){
        if(ch == OPEN) count ++;
        else count --;
        if(count < 0) return false;
    }

    return count == 0 ? true : false;
}