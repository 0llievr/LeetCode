class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int size = colors.size()-1;
        int max = 0;
        
        //move l->r testing  house color with each color
        //of the houses in front of it. If the color is 
        //different, test if distance is greater of max
        for(int i = 0; i<=size; i++){
            for(int j = i; j<=size; j++){
                if(colors[i] != colors[j]){
                    if(j-i > max){
                        max = j-i;
                    }
                }
            }
        }
        return max;
        
    }
};