# https://leetcode.com/problems/third-maximum-number/description/
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        first = float('-inf')
        second = float('-inf')
        third = float('-inf')
        for valor in nums:
            if valor == first or valor == second or valor == third:
                continue
            if valor > first:
                third = second
                second = first
                first = valor
            elif valor > second:
                third = second
                second = valor
            elif valor > third:
                third = valor
        if third > float('-inf'):
            return third
        else:
            return first
