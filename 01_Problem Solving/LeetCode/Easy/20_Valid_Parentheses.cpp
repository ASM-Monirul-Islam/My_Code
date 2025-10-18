class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char>mp {
			{')', '('},
			{'}', '{'},
			{']', '['}
		};
		stack<char>st;
		for(auto c:s) {
			if(mp.count(c)) {
				if(!st.empty() and st.top()==mp[c]) {
					st.pop();
				}else {
					return false;
				}
			}else {
				st.push(c);
			}
		}
		return st.empty();
    }
};
