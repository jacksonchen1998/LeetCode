class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        original = image[sr][sc]
        self.dfs(image, sr, sc, original, color)
        return image

    def dfs(self, image: List[List[int]], i: int, j: int, original: int, update: int):
        if i < 0 or i >= len(image) or j < 0 or j >= len(image[0]) or image[i][j] != original or image[i][j] == update:
            return
        image[i][j] = update
        self.dfs(image, i - 1, j, original, update)
        self.dfs(image, i + 1, j, original, update)
        self.dfs(image, i, j - 1, original, update)
        self.dfs(image, i, j + 1, original, update)