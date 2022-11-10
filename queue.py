from collections import deque
q = deque()
q.appendleft(27)
q.appendleft(230)
q.appendleft(13)

print(q)
print(q.pop(), "has been removed, remaining are ", q)
print(q.pop(), "removed, left with ", q)
print(q.pop(), "removed, left with ", q)
