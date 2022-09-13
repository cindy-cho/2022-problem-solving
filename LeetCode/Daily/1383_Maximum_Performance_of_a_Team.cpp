struct cmp{
    bool operator()(pair<int,int> A, pair<int,int> B){
    if(A.second == B.second){
        return A.first < B.first;
    }
    return A.second < B.second;
    }
};


class Solution {
public:    
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        priority_queue<pair<int ,int>, vector<pair<int,int>>, cmp> pq;
        priority_queue<int, vector<int>, greater<int> > outPq;
        int worker = 0;
        long score = 0L, maxScore = 0L, sumSpeed = 0L;
        for(int i=0; i<n;i++){
            pq.push(pair(speed[i], efficiency[i]));
        }
        
        while(!pq.empty()){
            if(worker < k){
                sumSpeed += pq.top().first;
                outPq.push(pq.top().first);
                score = sumSpeed * pq.top().second;
                maxScore = max(score, maxScore);
                pq.pop();                
                worker++;
            }
            else {
                sumSpeed -= outPq.top();
                outPq.pop();
                
                sumSpeed += pq.top().first;
                outPq.push(pq.top().first);
                score = sumSpeed * pq.top().second;
                maxScore = max(score, maxScore);
                pq.pop();
            }
            
        }
        
        return maxScore % (long)(pow(10,9)+7);
    }
};
