class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        cnt1 = Counter(ransomNote)
        cnt2 = Counter(magazine)
        
        for k, v in cnt1.items():
            if k not in cnt2 or v > cnt2[k]:
                return False
                
        return True