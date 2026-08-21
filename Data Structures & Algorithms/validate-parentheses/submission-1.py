class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracket_dict = {
            ')': '(',
            ']': '[',
            '}': '{'
        }
        for c in s:
            if c in bracket_dict:
                if (len(stack) and stack[-1] == bracket_dict[c]):
                    stack.pop()
                else: return False
            else: stack.append(c)
        return len(stack) == 0