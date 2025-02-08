class Solution {
private:
    void solution(string str , string output, int index , vector<string>& ans , string mapping[] ){

        //base case
        if(index >= str.length()){
            ans.push_back(output);
            return ;
        }

        //include
        int number = str[index] - '0';
        string value = mapping[number];
        for(int i=0; i<value.length(); i++){
            output.push_back(value[i]);
            solution(str , output , index+1 , ans , mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0)
            return ans;
        string output = "";
        int index = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solution(digits , output , index , ans , mapping);
        return ans;
    }
};