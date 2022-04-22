class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> myVec = nums1;
        int size = 0;
        
        //add nums2 to myVec
        for(int x : nums2){
            myVec.push_back(x);
        }
        
        //sort vector
        sort(myVec.begin(), myVec.end());
        size = myVec.size();
        
        //if odd return mid, if even return mid average
        return (size % 2 != 0) ? (double)myVec[size/2] 
            : ((double)myVec[(size/2)-1] + (double)myVec[(size/2)]) / 2;   
    }
};