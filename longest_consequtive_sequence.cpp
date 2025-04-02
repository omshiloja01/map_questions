class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if(nums.empty())return 0;
           map<int,int>m;
           int result=INT_MIN;
           int count=1;
           for(int i=0;i<nums.size();i++)
           {
            m[nums[i]]++;
           }
            for(auto it=m.begin();it!=m.end();++it)
            {
                int x=(*it).first+1;
                if(m.find(x)!=m.end())count++;
                else 
                {
                    result=max(result,count);
                    count=1;
                }
            }
            return result;
        }
    };
