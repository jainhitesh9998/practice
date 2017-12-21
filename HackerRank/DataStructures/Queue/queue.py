#!usr/bin/python
class Queue:
    def __init__(self):
        self.items = []
    def IsEmpty(self):
        return self.items == []
    def enqueue(self,item):
        self.items.append(item)
    def dequeue(self):
        return self.items.pop(0)
    def front(self):
        return self.items[len(self.items)-1]
    def size(self):
        return len(self.items)
        
queue = Queue()
print(queue.IsEmpty())
queue.enqueue(2)
queue.enqueue(3)
print(queue.size())
queue.enqueue(4)
print(queue.size())
print(queue.front())
print(queue.dequeue())
print(queue.IsEmpty())
