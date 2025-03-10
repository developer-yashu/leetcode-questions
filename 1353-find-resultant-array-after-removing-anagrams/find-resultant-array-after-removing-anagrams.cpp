class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> original = words;  // Store original words
        vector<string> sortedWords = words;  // Copy words for sorting

        for (int i = 0; i < sortedWords.size(); i++) {
            sort(sortedWords[i].begin(), sortedWords[i].end());  // Sort each word
        }

        vector<string> ans;
        ans.push_back(original[0]);  // Always include the first word

        for (int i = 1; i < words.size(); i++) {
            if (sortedWords[i] != sortedWords[i - 1]) {  
                ans.push_back(original[i]);  // Include only non-anagram words
            }
        }
        
        return ans;
    }
};
