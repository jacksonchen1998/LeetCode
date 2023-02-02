class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";
        int size_1 = num1.size(), size_2 = num2.size();
        vector<int> res(size_1 + size_2);
        for (int i = size_1 - 1; i > -1; i--) {
            for (int j = size_2 - 1; j > -1; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int pos_1 = i + j, pos_2 = i + j + 1; // pos_1 is the index of the first digit, pos_2 is the index of the second digit
                int sum = mul + res[pos_2]; // sum is the sum of the two digits
                res[pos_1] += sum / 10; // res[pos_1] is the carry
                res[pos_2] = sum % 10; // res[pos_2] is the sum of the two digits
            }
        }
        
        string answer = "";
        for (int i = 0; i < size_1 + size_2; i++) {
            if (answer.empty() && res[i] == 0)
                continue;
            answer += to_string(res[i]);
        }
        if (answer.empty())
            return "0";
        return answer;
    }
};