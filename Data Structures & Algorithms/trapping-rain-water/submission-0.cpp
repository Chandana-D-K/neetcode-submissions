class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,lmax=0,rmax=0,ans=0;

        while(l<r){
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);

            if(lmax<rmax){
                ans+=(lmax-height[l]);
                l++;
            }
            else{
                ans+=(rmax-height[r]);
                r--;
            }
        }
        return ans;
        // int n=height.size();
        // vector<int>p(n,0);
        // vector<int>s(n,0);

        // p[0]=height[0];
        // s[n-1]=height[n-1];

        // for(int i=1;i<n;i++){
        //     p[i]=max(p[i-1],height[i]);
        // }

        // for(int i=n-2;i>=0;i--){
        //     s[i]=max(s[i+1],height[i]);
        // }

        // int ans=0;

        // for(int i=0;i<n;i++){
        //     ans+=min(p[i],s[i])-height[i];
        // }
        // return ans;
    }
};
