#include<bits/stdc++.h>
using namespace std;

void MakeCombination(int index, int target, vector<int> &v, vector<int> &tmp, vector<vector<int>> &ans){

    if(target == 0){
        ans.push_back(tmp);
        return;
    }

    if(index == v.size())
        return;

    if(v[index] <= target){
        tmp.push_back(v[index]);
        MakeCombination(index, target-v[index], v, tmp, ans);
        tmp.pop_back();
    }
    
    MakeCombination(index+1, target, v, tmp, ans);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> tmp;

        MakeCombination(0, target, candidates, tmp, ans);
    }

int main(){

    vector<int> v {2,3,6,7};
    int target = 7;

    combinationSum(v, target);

    
}