class Solution(object):
    def runningSum(self, nums):
        self.nums=nums
        s=0
        output=[]
        for i in nums:
            s=s+i
            output.append(s)
        return output
  
a=Solution().runningSum([1,2,3,4])
print(a)
