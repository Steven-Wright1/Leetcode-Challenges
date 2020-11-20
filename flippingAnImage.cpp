class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int N = A.size();
        int temp;
        vector<vector<int>>B(N,vector<int>(N));
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                
                temp = A[i][N-1-j];
                if(temp == 0) temp = 1; 
                else if (temp == 1) temp = 0; 
                
                B[i][j] = temp; 
            }
        }
        
        return B;
    }
};