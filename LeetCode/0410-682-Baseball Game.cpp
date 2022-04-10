// #include<iostream>
// #include<vector>
// #include<string>
// #include<stack>

// #define endl '\n'
// typedef long long ll;

// using namespace std;

// int main(void){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     Solution S;
//     vector<string> ops{ "5","-2","4","C","D","9","+","+" };
//     cout << "Expected Answer : 27" << endl;
//     cout << "My Answer" << endl;
//     cout << S.calPoints(ops) << endl;
    
//     return 0;
// }

// class Solution {
// public:
//     int stringToInt(string sNum){
//         int number = 0, dec = 1, len = sNum.length();
//         for(int j=len-1;j>=1;j--){
//             number += (sNum[j]-'0') * dec;
//             dec *= 10;
//         }
//         if(sNum[0]=='-') return number*(-1);
//         number += (sNum[0]-'0') * dec;
//         return number;
//     }
    
//     int calPoints(vector<string>& ops) {
//         stack<int> s;
//         int sum = 0;
//         int number=0, prev;
//         for(auto op : ops){
//             if(op == "C"){
//                 s.pop();
//             }
//             else if(op == "D"){
//                 number = s.top();
//                 s.push(number*2);
//             }
//             else if(op == "+"){
//                 number = s.top();
//                 s.pop();
//                 prev = s.top();
//                 s.push(number);
//                 s.push(prev+number);
//             }
//             else{
//                 number = stringToInt(op);
//                 s.push(number);
//             }
//         }
//         while(!s.empty()){
//             sum += s.top();
//             s.pop();
//         }
//         return sum;
//     }
// };

#include<iostream>
#include<vector>

#define endl '\n'
typedef long long ll;

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << "helloworld\n";
    return 0;
}