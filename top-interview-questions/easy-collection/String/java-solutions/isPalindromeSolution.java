//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/

import java.util.ArrayList;
import java.util.List;

class Solution {
    public boolean isPalindrome(String s) {
        List<Integer> chars = new ArrayList<>(s.chars().boxed().toList());
        int len = chars.size();
        int start = 0;
        int end = len - 1;
        while(start <= end){
            if((chars.get(start) < 'a' || chars.get(start) > 'z') && (chars.get(start) < 'A' || chars.get(start) > 'Z') && (chars.get(start) < '0' || chars.get(start) > '9')){
                start++;
                continue;
            }
            if((chars.get(end) < 'a' || chars.get(end) > 'z') && (chars.get(end) < 'A' || chars.get(end) > 'Z') && (chars.get(end) < '0' || chars.get(end) > '9')){
                end--;
                continue;
            }
            if(chars.get(start) >= 'A' && chars.get(start) < 'a') chars.set(start, chars.get(start) + 32);
            if(chars.get(end) >= 'A' && chars.get(end) < 'a') chars.set(end, chars.get(end) + 32);
            if(chars.get(start) != chars.get(end)) return false;
            start++;
            end--;
        }
        return true;
    }
}
