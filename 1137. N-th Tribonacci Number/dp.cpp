class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        else if (n == 1 || n == 2) return 1;
        int arr[4] = {0, 1, 1, 0};
        for (int i = 3; i <= n; i++) {
            arr[3] = arr[1] + arr[2] + arr[0];
            arr[0] = arr[1];
            arr[1] = arr[2];
            arr[2] = arr[3];
        }
        return arr[3];
    }
};