class Solution {
public:
    bool isAnagram(string s, string t) {
        int k=t.size();
        int n=s.size();
        if(n!=k) return false;
        bool ans=true;
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       for(int x=0;x<n;x++){
            if(s[x]!=t[x]){
                ans=false;
            }
       }
       return ans;
    }
};
