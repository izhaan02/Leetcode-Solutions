class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int freq[]=new int[26];

        for(int i=0;i<s1.length();i++){
            freq[s1.charAt(i)-'a']++;
        }

        int left=0;
        int currFreq[]=new int[26];

        for(int right=0;right<s2.length();right++){
            currFreq[s2.charAt(right)-'a']++;

            while(currFreq[s2.charAt(right)-'a']>freq[s2.charAt(right)-'a']){
                currFreq[s2.charAt(left)-'a']--;
                left++;
            }
            if(right-left+1==s1.length()) return true;

        }
        return false;

    }
}