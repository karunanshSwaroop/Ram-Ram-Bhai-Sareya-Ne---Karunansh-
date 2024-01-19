class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),i;
        vector<int> v,l(n,-1),r(n,-1);
        for(i = 0; i < n; i++){
            while(v.size()&&v.back()<height[i]){
                v.pop_back();
            }
            if(v.size()){
                l[i] = v.back();
            }
            if(v.size()==0||height[i]>v.back())
            v.push_back(height[i]);
        }
        v.clear();
        for(i = n-1; i >= 0; i--){
            while(v.size()&&v.back()<height[i]){
                v.pop_back();
            }
            if(v.size()){
                r[i] = v.back();
            }
            if(v.size()==0||height[i]>v.back())
            v.push_back(height[i]);
        }
        // for(auto &i: height)cout<<i<<" ";cout<<endl;
        // for(auto &i: l)cout<<i<<" ";cout<<endl;
        // for(auto &i: r)cout<<i<<" ";
        int ans = 0;
        for(i = 0; i < n; i++){
            
            ans += max(0,min(l[i],r[i])-height[i]);
        }
        return ans;
    }
};