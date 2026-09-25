class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int freq[]=new int[26];

        for(int i=0; i<p.length();i++){
            freq[p.charAt(i)-'a']++;
        }
        List<Integer>ans=new ArrayList<>();

        int left=0;
        int currFreq[]=new int[26];
        for(int right=0; right<s.length();right++){
            currFreq[s.charAt(right)-'a']++;
            //invalid
            while(currFreq[s.charAt(right)-'a']>freq[s.charAt(right)-'a']){
                currFreq[s.charAt(left)-'a']--;
                left++;
            }
            if(right-left+1==p.length()) ans.add(left);

        }
        return ans;
    }
}