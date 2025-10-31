class Solution {
public:
    bool isVowel(char ch) {
        ch=tolower(ch);
        return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u';
    }
    int maxVowels(string s, int k) {
        int vowel=0, maxVowel;
        for(int i=0; i<k; i++) {
            if(isVowel(s[i])) vowel++;
        }
        maxVowel=vowel;
        for(int i=k; i<s.size(); i++) {
            if(isVowel(s[i-k])) vowel--;
            if(isVowel(s[i])) vowel++;
            maxVowel = max(maxVowel, vowel);
        }
        return maxVowel;
    }
};