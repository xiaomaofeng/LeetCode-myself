class Solution:
    def numJewelsInStones(self,J,S):
        """
        :param J:str
        :param S: str
        :return: int
        """
        return  sum(S.count(i) for i in J)