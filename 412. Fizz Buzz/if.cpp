class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        int val;
        for (int i = 0; i < n; i++) {
            val = i + 1;
            if ((val % 3 == 0) && (val % 5 == 0))
                res.push_back("FizzBuzz");
            else if (val % 3 == 0)
                res.push_back("Fizz");
            else if (val % 5 == 0)
                res.push_back("Buzz");
            else
                res.push_back(to_string(val));
        }

        return res;
    }
};