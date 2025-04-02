class Solution {
    public:
        int firstUniqChar(string s) {
            map<char,int>m;
            map<char,int> :: iterator it;
            int i=0;
            while(s[i]!='\0')
            {
                m[s[i]]++;
                i++;
            }
            i=0;
            while(s[i]!='\0')
            {
                it=m.find(s[i]);
                if((*it).second==1)return i;
                i++;
            }
            return -1;
        }
    };
