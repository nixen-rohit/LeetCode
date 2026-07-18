class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> pos, neg;

        for (int x : nums) {
            if (x < 0) {
                neg.push_back(x);

            } else {
                pos.push_back(x);
            }
        }

        if (neg.empty()) {
            for (int &x : pos)
                x *= x;

            return pos;
        }

        if (pos.empty()) {
            for (int &x : neg)
                x *= x;
            reverse(neg.begin(), neg.end());
            return neg;
        }

        for (int &x : pos) x *= x;

        for (int &x : neg) x *= x;
      reverse(neg.begin(), neg.end());

        int i = 0 , j = 0 , idx =0;

        int n = neg.size();
        int m = pos.size();
        vector <int> res(n+m);

        while(i<n && j<m){
            if(neg[i]<=pos[j]){
                res[idx]=neg[i];
                i++;
                idx++;
            }
            else{
                res[idx]=pos[j];
                idx++;
                j++;
            }
        }

        while(i<n){
            res[idx]=neg[i];
            idx++;
            i++;
        }

        while(j<m){
            res[idx]=pos[j];
            idx++;
            j++;
        }

        return res;



       
    }
};