class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> v1(n, 0);
        sort(deck.begin(), deck.end());
        queue<int> q1;
        for(int i=0; i<n; i++){
            q1.push(i);
        }
        for(int i=0; i<deck.size(); i++){
            if(!q1.empty()){
                int val = deck[i];
                v1[q1.front()] = val;
                q1.pop();
                if(q1.front()){
                    int topVal = q1.front();
                    q1.pop();
                    q1.push(topVal);
                }
            }
        }
        return v1;
    }
};