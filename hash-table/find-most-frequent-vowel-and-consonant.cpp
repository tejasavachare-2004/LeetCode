class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26] = {0};

        // Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int maxVowel = 0;
        int maxConsonant = 0;

        // Find max vowel frequency
        for (char ch : {'a', 'e', 'i', 'o', 'u'}) {
            maxVowel = max(maxVowel, freq[ch - 'a']);
        }

        // Find max consonant frequency
        for (int i = 0; i < 26; i++) {
            char ch = 'a' + i;
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                maxConsonant = max(maxConsonant, freq[i]);
            }
        }

        return maxVowel + maxConsonant;
    }
};
