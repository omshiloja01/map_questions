class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int>m;
            vector<int>v;
            for(int i=0;i<nums.size();i++)
            {
                int x=target-nums[i];
                if(m.find(x)!=m.end())
                {
                    v.push_back(m[x]);
                    v.push_back(i);
                }
                m[nums[i]]=i;
            }
            return v;
        }
    };
