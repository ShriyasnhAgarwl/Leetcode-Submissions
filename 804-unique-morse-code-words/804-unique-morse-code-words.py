class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        s = set()
        mos = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        for w in words:
            m=''
            for i in w:
                m+= mos[ord(i) - ord('a')];
            s.add(m)
        return len(s);
        