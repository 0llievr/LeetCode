class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> myMap(256, -1); //use negative -1 to indicate empty, 256 for all aski chars
        int start = -1, largest = 0;
        
        //itterate down the list
        for(int i = 0; i<s.size(); i++){
            printf("%c\n",s[i]);

            //if char has been seen before update start to be the pos
            //of the car seen before
            if(myMap[s[i]] > start){
                printf("updating start\n");
                start = myMap[s[i]];
            }
            
            //save [char,pos] into map
            myMap[s[i]] = i;
            
            //check to see if curr sub is longer than prev
            if(i-start > largest){
                largest = i-start; 
            }
        }
        return largest;   
    }
};



/*

original idea, Does not work with checking 
substrings which duplicates not next to each other

if(s.size() == 1){
    return 1;
}

if(!myMap[s[i]]){
    printf("not a match\n");
    myMap[s[i]] = 1;
    current++;
}else{
    printf("match\n");
    if(current > largest){
        largest = current;
    }
    myMap.clear();
    current = 1;
    myMap[s[i]] = 1;
} 
*/