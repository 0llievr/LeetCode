class Solution{
public:
    string longestPalindrome(string s){
        int size = s.size();
        if (size == 0)
            return "";

        // dp[i][j] will be 'true' if the string from index i to j is a palindrome.
        bool database[size][size];

        //Initialize with false
        memset(database, 0, sizeof(database));

        //indifidual char are palanfromes
        for (int i = 0; i < size; i++)
            database[i][i] = true;

        string rtn = "";
        //case for single char string
        rtn += s[0];
        
        //move right to left
        for (int i = size-1; i >= 0; i--){
            //test every char to the right of i
            for (int j = i + 1; j < size; j++){
                //if match
                if (s[i] == s[j]){
                    //If it is of two character OR contains palindrome.
                    if (j - i == 1 || database[i+1][j-1]){
                        database[i][j] = true;
                        //if longest
                        if (rtn.size() < j-i+1)
                            rtn = s.substr(i, j-i+1);
                    }
                }
            }
        }
        return rtn;
    }
};

/*
Original implimentation, Hits time limit on problem 53
Issue is every time there is a duplicate letter it tests it as a palandrome 

class Solution {
public:
    string longestPalindrome(string s) {
        int longest = 1;
        int current = 1;
        bool match = true;
        string rtn;
        int left = 0;
        int right = 0;
        map<char,vector<int>> hashmap;
        
        if(s.length() == 1){ //fix for list of one length
            return s;
        }else if(s.length() > 1){ //fix if no palandrome possible
            longest = 1;
            rtn += s[0];
        }
        
        for(int i = 0; i < s.length(); i++){
            //if no match
            if(hashmap.find(s[i]) == hashmap.end()){
                hashmap[s[i]].push_back(i);
            //if match    
            }else{
                int size = hashmap[s[i]].size()-1;
                for(int x = 0; x<=size; x++){
                    left = hashmap[s[i]][x];
                    right = i;
                    current = i-hashmap[s[i]][x]+1;
                    //printf("left: %d right: %d current: %d\n", left, right, current);
                    //work inwards from the two matching char, checking if also matching
                    while(left<=right){
                        //printf("%d %d\n", left, right);
                        if(s[left] != s[right]){
                            //If missmatched anywhere internally entire substring is bad
                            //printf("miss\n");
                            match = false;
                            break;
                        }
                        left++;
                        right--;
                    }
                    //if cur substring is longert than longest save new longer ss
                    if(current > longest && match){
                    //printf("printing\n");
                        longest = current;

                        rtn = "";
                        for(int j = hashmap[s[i]][x]; j<=i; j++){
                            rtn += s[j];
                        }
                        //cout << rtn << endl;
                    }
                    match = true;
                    hashmap[s[i]].push_back(i);   
                }                
            }
        }
        return rtn;

    }
};
*/