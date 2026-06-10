class Solution {
public:
    int majorityElement(vector<int>& A) {
        int n=A.size();
        for(int val:A){
            int freq=0;
            for(int el:A){
                if(el==val){
                    freq++;

                }

            }
            if(freq>n/2){
                return val;
            }
        }
        return-1;
    }
};
