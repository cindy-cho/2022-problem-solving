class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for(auto bracket: s){
            if(bracket == '(' || bracket == '{' || bracket == '[') brackets.push(bracket);
            else {
                if(brackets.empty()) return false;
                else{
                    switch(bracket){
                        case ')':
                            if(brackets.top() == '(') brackets.pop();
                            else brackets.push(bracket);
                            break;
                        case '}':
                            if(brackets.top() == '{') brackets.pop();
                            else brackets.push(bracket);
                            break;
                        case ']':
                            if(brackets.top() == '[') brackets.pop();
                            else brackets.push(bracket);
                            break;
                    }   
                }
            }
        }
        
        if(!brackets.empty()) return false;
        return true;
    }
};