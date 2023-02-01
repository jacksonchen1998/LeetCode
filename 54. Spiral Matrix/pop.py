class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        res = []
        while matrix:
            res += matrix.pop(0) # pop the first row, from the first element to the last element
            if matrix and matrix[0]:
                for row in matrix:
                    res.append(row.pop()) # pop the last element of each row, from the first row to the last row
            if matrix:
                res += matrix.pop()[::-1] # pop the last row, from the last element to the first element, and reverse the order
            if matrix and matrix[0]:
                for row in matrix[::-1]:
                    res.append(row.pop(0)) # pop the first element of each row, from the last row to the first row, and reverse the order
        return res