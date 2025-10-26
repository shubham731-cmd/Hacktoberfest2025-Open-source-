class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        long long b=0;
        for(int i=0;i<n;i++){
            b+=llabs((long long)nums1[i]-(long long)nums2[i]);
        }
        int k=nums2[n];
        long long en=LLONG_MAX;
        for(int i=0;i<n;i++){
            int a=nums1[i],b=nums2[i];
            int l=min(a,b),r=max(a,b);
            long long e=0;
            if(k<l) e=(long long)l-k;
            else if(k>r) e=(long long)k-r;
            else e=0;
            en=min(en,e);
        }
        return 1+b+en;
    }
};
