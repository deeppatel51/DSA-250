class Solution {
public:
    int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
        sort(hCuts.begin(),hCuts.end());
        sort(vCuts.begin(),vCuts.end());
    int maxW=hCuts[0];
    for(int i=1;i<hCuts.size();i++){
        maxW=max(maxW,hCuts[i]-hCuts[i-1]);
    }
    maxW=max(maxW,abs(h-hCuts[hCuts.size()-1]));

      
    int maxH=vCuts[0];
    for(int i=1;i<vCuts.size();i++){
        maxH=max(maxH,vCuts[i]-vCuts[i-1]);
    }
    maxH=max(maxH,abs(w-vCuts[vCuts.size()-1]));
   

    return (long(maxH)*long(maxW))%1000000007;
    }
};
