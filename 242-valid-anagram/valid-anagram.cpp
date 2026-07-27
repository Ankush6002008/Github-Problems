class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> fs;
        unordered_map<char, int> ft;

        int i = 0;
        while(i < s.size()){
            if(!fs[s[i]]){
                fs[s[i]]++;
            }
            else{
                fs[s[i]] = fs[s[i]] + 1;
            }
            i++;
        }
        int j =0;
        while(j < t.size()){
            if(!ft[t[j]]){
                ft[t[j]]++;
            }
            else{
                ft[t[j]] = ft[t[j]] + 1;
            }
            j++;
        }

        // for(auto i0 : fs){
        //     for(auto j0 : ft){
        //         if (i0.first == j0.first){
        //             if(i0.second == j0.second){
        //                 continue;
        //             }
        //             else{
        //                 return false;
        //             }
        //         }

            
        //     }
        // }

        if (s.size() == t.size()){
            for(auto i0 : fs){
            if(i0.second != ft[i0.first]){
                return false;
                }
            }
        }
        else{
            return false;
        }
        
        return true;

    }
};