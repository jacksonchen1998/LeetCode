class Solution {
public:
    bool check(char symbol1, char symbol2){
        if (symbol1 == '(' && symbol2 == ')') return true;
        if (symbol1 == '[' && symbol2 == ']') return true;
        if (symbol1 == '{' && symbol2 == '}') return true;
        else return false;
    }

    bool isValid(string s){
        int len = s.length();
        stack<char> stack;
        for (int i = 0; i < len; i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push(s[i]);
            }else{
                if (stack.empty() || !check(stack.top(), s[i])) return false;
                else stack.pop();
            }
        }
        if (stack.empty()) return true;
        return false;
    }
};