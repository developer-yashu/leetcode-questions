// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//       unordered_map<string,vector<string>>anagramMap;
//       for(string s:strs){
//         string sortedStr=s;
//         sort(sortedstr.begin(),sortedstr.end());
//         anagramMap[sortedStr].push_back(s);
//       }  
//       vector<vector<string>>result;
//       for(auto&group:anagramMap){
//         result.push_back(group.second);
//       }
//       return result;
//     }
// };


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        
        for (string s : strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end()); // Corrected variable name
            anagramMap[sortedStr].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& group : anagramMap) {
            result.push_back(group.second);
        }
        return result;
    }
};
