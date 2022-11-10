"""
Linked lists make insertion easier. No pre_allocation of space.
Inserting Element at the beginning = 0(1)
Delete Element at beginning = 0(1)
insert element in middle = 0(n)
Insert/Delete element at end = 0(n)
Linked List traversal = 0(n)
Accessing Element by Value = 0(n)

For doubly linked lists you have links to your next and previous elements
"""


class Node:   # represents an individual element in the linked list
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class LinkedList:  # head variable points to the head of the linked list
    def __init__(self):
        self.head = None

    def insert_at_beginning(self, data):
        node = Node(data, self.head)
        self.head = node

    def insert_at_end(self, data):
        if self.head is None:
            self.head = Node(data, None)
            return

        itr = self.head  # An iterator

        while itr.next:
            itr = itr.next

        itr.next = Node(data, None)

    def print(self):
        if self.head is None:
            print('Linked List is empty')
            return
        itr = self.head  # An iterator
        llstr = ''  # Linked list string

        while itr:
            llstr += str(itr.data) + '-->'
            itr = itr.next

        print(llstr)

    def insert_values(self, data_list):
        self.head = None
        for data in data_list:
            self.insert_at_end(data)

    def remove_at(self, index):
        if index <= 0 or index >= self.get_length():
            raise Exception("Invalid Index")

        if index == 0:
            self.head = self.head.next
            return

        count = 0
        itr = self.head
        while itr:
            if count == index-1:
                itr.next = itr.next.next
                break

            itr = itr.next
            count += 1

    def insert_at(self, index, data):
        if index < 0 or index > self.get_length():
            raise Exception('Invalid Index')

        if index == 0:
            self.insert_at_beginning(data)
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                node = Node(data, itr.next)
                itr.next = node
                break

            itr = itr.next
            count += 1

    def get_length(self):
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.next

        return count


if __name__ == '__main__':
    ll = LinkedList()
    ll.insert_values(["Kunguru", "Kuku", "Kinyonga"])
    ll.print()
    ll.insert_at(0, 'Ngombe')
    ll.print()
    ll.insert_at(3, 'Mbwa')
    ll.print()
    ll.remove_at(4)
    ll.print()
