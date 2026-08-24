class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       size_t size = strs.size();
       int checker = 0;
       string commonPrefix="";
       size_t shortest = strs[0].size();
    
       for(size_t i=1; i< size; i++){
          if(strs[i].size()<shortest) shortest = strs[i].size();
       }
       for(size_t i =0; i < shortest; i++){
          char check = strs[0][i];
          for(size_t j=0;j<size;j++){
            if(strs[j][i]== check) {
                checker++;
                if(checker==size) {commonPrefix += check; checker=0;}
                continue;
            }
            else return commonPrefix;
          }
          
       }
       return commonPrefix;
    }
};