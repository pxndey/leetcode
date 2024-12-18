class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int max = points[0][1];
        int count = 1;
        for(int i=1;i<points.size();i++){
            if(points[i][0]>max){
                count++;
                max = points[i][1];
                continue;
            }
            if(max>points[i][1]){
                max = points[i][1];
            }
        }
        return count;


    }
};