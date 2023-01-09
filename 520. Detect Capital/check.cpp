class Solution{
public:
    bool detectCapitalUse(string word) {
        bool res = false;
        int count = 0, count1 = 0, len = word.length();
        for (int index = 0; index < len; index++) {
            if (isupper(word[index]))
                count++;
            if (islower(word[index]))
                count1++;
        }

        if ((count == len) || (count1 == len))
            res = true;

        count = 0;

        if (isupper(word[0])) {
            count++;
            for (int index = 1; index < len; index++) {
                if (islower(word[index]))
                    count++;
            }
        }

        if (count == len)
            res = true;

        return res;
    }
};