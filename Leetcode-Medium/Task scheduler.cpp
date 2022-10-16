long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int, long long> last;
        long long res = 0;
        for (int a: tasks)
            if (last.count(a))
                last[a] = res = max(res, last[a] + space) + 1;
            else
                last[a] = ++res;
        return res;
    }long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int, long long> last;
        long long res = 0;
        for (int a: tasks)
            if (last.count(a))
                last[a] = res = max(res, last[a] + space) + 1;
            else
                last[a] = ++res;
        return res;
    }
