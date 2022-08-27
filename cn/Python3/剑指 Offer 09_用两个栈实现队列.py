# @algorithm @lc id=100273 lang=python3
# @title yong-liang-ge-zhan-shi-xian-dui-lie-lcof
class CQueue:

    def __init__(self):
        self.st1 = []
        self.st2 = []

    def appendTail(self, value: int) -> None:
        self.st1.append(value)

    def deleteHead(self) -> int:
        if len(self.st1) == len(self.st2) == 0:
            return -1
        while len(self.st2) != 0:
            res = self.st2[-1]
            self.st2 = self.st2[:-1]
            return res
        while len(self.st1) != 0:
            tmp = self.st1[-1]
            self.st1 = self.st1[:-1]
            self.st2.append(tmp)
        res = self.st2[-1]
        self.st2 = self.st2[:-1]
        return res


# Your CQueue object will be instantiated and called as such:
# obj = CQueue()
# obj.appendTail(value)
# param_2 = obj.deleteHead()
