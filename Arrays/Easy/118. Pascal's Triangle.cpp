class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v1;
        for(int i=1; i<=numRows; i++){
            vector<int> v2;
            for(int j=1; j<=i; j++){
                if(j==1 || j==i){
                    v2.push_back(1);
                }
                else{
                    int sum = v1[i-2][j-2] + v1[i-2][j-1];
                    v2.push_back(sum);
                }
            }
            v1.push_back(v2);
        }
        return v1;
    }
};