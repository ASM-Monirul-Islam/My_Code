class Solution {
public:
	int value=0;
    int romanToInt(string s) {
		int n = s.size();
        unordered_map<char, int>roman_num {
			{'I', 1},
			{'V', 5},
			{'X', 10},
			{'L', 50},
			{'C', 100},
			{'D', 500},
			{'M', 1000},
		};
		for(int i=0; i<n; i++) {
			if(i<n-1 and roman_num[s[i]]<roman_num[s[i+1]]) {
				value+=(roman_num[s[i+1]]-roman_num[s[i]]);
				i++;
			}else {
				value+=roman_num[s[i]];
			}
		}
		return value;
    }
};