class Solution:
    def smallestEquivalentString(self, s1: str, s2: str, baseStr: str) -> str:
        bag = {}

        def find(alpha):
            bag.setdefault(alpha, alpha)
            if bag[alpha] != alpha:
                bag[alpha] = find(bag[alpha])

            return bag[alpha]

        def union(alpha1, alpha2):
            root1 = find(alpha1)
            root2 = find(alpha2)

            if root1 >= root2:
                bag[root1] = root2
            else:
                bag[root2] = root1

        for index in range(len(s1)):
            union(s1[index], s2[index])

        res = ""

        for alpha in baseStr:
            res += find(alpha)

        return res