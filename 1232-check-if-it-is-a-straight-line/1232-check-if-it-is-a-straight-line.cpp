class Solution {
public:
    float slope(vector<int>u, vector<int>v){
        float m=((float)(v[1]-u[1]))/((float)(v[0]-u[0]));
        return m;
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(coordinates[0][0]==coordinates[1][0]){
            int x=coordinates[0][0];
            for(int i=2; i<n; i++){
                if(coordinates[i][0]!=x) return false;
            }
            return true;
        }
        float m=slope(coordinates[0], coordinates[1]);
        for(int i=2; i<n; i++){
            if(m!=slope(coordinates[i], coordinates[i-1])) return false;
        }
        return true;
    }
};