class Solution {
public:
    bool isAnagram(string s, string t) {
        int k=t.size();
        int n=s.size();
        if(n!=k) return false;
        bool ans=true;
       unordered_map<char,int>f;
      
       for(int x:s){
        f[x]++;
       }
       for(int x:t){
        f[x]--;
       }
       for(auto x:f){
        if(x.second!=0){
            return false;
        }
       }
       return true;
       
    }
};
