class Solution {
public:
    vector<vector<int>> ans;
    void func(int i,int n, vector<int> &sol, int k){
        if(n==0&&k==0){
            ans.emplace_back(sol);
            return;
        }
        if(n<0||k<0){
            return;
        }
        if(i==10){
            return;
        }
        func(i+1,n,sol,k);

        sol.emplace_back(i);
        func(i+1,n-i,sol,k-1);
        sol.pop_back();

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> sol;
        func(1,n,sol,k);
        return ans;
    }
};