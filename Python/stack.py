from collections import deque
stack = deque()

stack.append("https://ahahha.com")
stack.append("https://jfewjf.com")
#print(stack.pop(), stack)

class Stack:
    def __init__(self):
        self.container = deque()

    def push(self, val):
        self.container.append(val)

    def pop(self):
        return self.container.pop()

    def peek(self):
        return self.container[-1]

    def is_empty(self):
        return len(self.container) == 0

    def size(self):
        return len(self.container)

s = Stack()
s.push(5)
s.push(19)
s.push(7)
s.push(44)
print(s.peek())
print(s)