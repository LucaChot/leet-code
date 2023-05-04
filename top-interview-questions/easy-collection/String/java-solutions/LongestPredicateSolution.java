//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/887/

public class LongestPredicateSolution {
    public String longestCommonPrefix(String[] strs) {
        String prefix = "";
        
        int pointer = 0, s_len = strs.length;
        while(true){
            if(pointer >= strs[0].length()) return prefix;
            char c = strs[0].charAt(pointer);
            for(int i = 1; i < s_len; i++){
                if(pointer >= strs[i].length() || strs[i].charAt(pointer) != c) return prefix;
            }
            prefix += c;
            pointer++;
        }
    }
}

