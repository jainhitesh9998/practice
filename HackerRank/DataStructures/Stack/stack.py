#!usr/bin/python

class Stack:    
    def __init__(self):
        self.items = []
    def IsEmpty(self):
        return self.items == []
    def push(self,item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def top(self):
        return self.items[len(self.items)-1]
    def size(self):
        return len(self.items)
        
stack  = Stack()
stack.push(1)
stack.push(2)
stack.push(3)
print(stack.size())

print(stack.top())
print(stack.IsEmpty())


