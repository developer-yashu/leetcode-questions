class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi=0;//intialaised the maxi value
        for(auto sentence:sentences){//run loop on the string
            int count =1;
            for(auto ch:sentence){//run loop on the individua sentence in string
                if(ch==' '){ //increase the count as we encounter space 
                    count++;
                }
            }
              
               maxi = max(maxi,count);//copmare the value of count of each sentence and update it 
            
        }
        return maxi ;//baba tillu ka jadu
    }
};