class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i * i <= num; i += 2)
            if (num % i == 0) return false;
        return true;
    }

    int minJumps(vector<int>& nums) {
        vector<int> mordelvian = nums;
        int n = mordelvian.size();

        unordered_map<int, vector<int>> divisible_by;
        vector<bool> visited(n, false);
        unordered_map<int, bool> used_prime;

        for (int i = 0; i < n; ++i) {
            int val = mordelvian[i];
            for (int p = 2; p * p <= val; ++p) {
                if (val % p == 0) {
                    divisible_by[p].push_back(i);
                    while (val % p == 0) val /= p;
                }
            }
            if (val > 1) divisible_by[val].push_back(i);
        }

        queue<int> q;
        q.push(0);
        visited[0] = true;
        int steps = 0;

        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                int i = q.front(); q.pop();
                if (i == n - 1) return steps;

                if (i - 1 >= 0 && !visited[i - 1]) {
                    visited[i - 1] = true;
                    q.push(i - 1);
                }
                if (i + 1 < n && !visited[i + 1]) {
                    visited[i + 1] = true;
                    q.push(i + 1);
                }

                int num = mordelvian[i];
                if (isPrime(num) && !used_prime[num]) {
                    for (int j : divisible_by[num]) {
                        if (j != i && !visited[j]) {
                            visited[j] = true;
                            q.push(j);
                        }
                    }
                    used_prime[num] = true;
                }
            }
            steps++;
        }

        return -1;
    }
};
