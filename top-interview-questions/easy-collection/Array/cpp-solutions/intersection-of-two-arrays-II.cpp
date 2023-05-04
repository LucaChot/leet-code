//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> m;
        int pos1 = 0, len1 = nums1.size();
        int pos2 = 0, len2 = nums2.size();
        while(pos1 < len1 && pos2 < len2){
            if(nums1[pos1] == nums2[pos2]){
                m.push_back(nums1[pos1]);
                pos1 += 1;
                pos2 += 1;
            }else if(nums1[pos1] > nums2[pos2]){
                pos2 += 1;
            }else{
                pos1 += 1;
            }
        }
        return m;
    }
};