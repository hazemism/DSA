class Solution {
public:
    
    char rec (int k,string word){
         if (word.size()>=k){return word[k-1];}
         string sen = "";
         for (int i=0; i<word.size(); i++){
             char c = (word[i] =='z'? 'a':word[i] + 1);
             sen+=c;
         } 
         return rec (k,word+sen);
    }
    
    
    char kthCharacter(int k) {
         return rec(k,"a");
        
    } 
};