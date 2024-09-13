vector<string> generateParenthesis(int n) {
        vector<string> ans;
        fnc(ans, n, 0, 0, "");
        return ans;
    }
    void fnc(vector<string>& ans, int n, int open, int close,
             string current_string) {
        if (current_string.size() == n * 2) {
            ans.push_back(current_string);
            return;
        }
        if (open < n) {
            fnc(ans, n, open + 1, close, current_string + "(");
        }
        if (close < open) {
            fnc(ans, n, open, close + 1, current_string + ")");
        }
    }
