class Solution {
public:
    void swap(int *a, int *b){
        int tmp = (*a);
        *a = *b;
        *b = tmp;
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {    
    
        for(int i=m, j=0;i<m+n;i++, j++) nums1[i] = nums2[j];
        sort(nums1.begin(), nums1.end());
//         int i = 0, j = 0;
        
//         while(i<m && j<n){
//             if(nums1[i]>nums2[j]){
//                 swap(&nums1[i], &nums2[j]);
//                 sort(nums2.begin(),nums2.end());
//             }
//             else if(nums1[i]==nums2[j]){
//                 i++;
//             }
//             else { // nums1[i] < nums2[j]
//                 i++;
//             }
//         }
//         i = m;
//         j = 0;
//         while(i<(n+m)) nums1[i++] = nums2[j++];
    }
};

