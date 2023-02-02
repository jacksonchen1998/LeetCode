class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        order = {c: i for i, c in enumerate(order)}
        prev = words[0]
        for word in words[1:]:
            for i in range(min(len(prev), len(word))):
                if prev[i] != word[i]:
                    if order[prev[i]] > order[word[i]]:
                        return False
                    break
            else:
                if len(prev) > len(word):
                    return False
            prev = word
        return True