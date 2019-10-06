class Node:
	def __init__(self,data):
		self.__data=data
		self.__next=None

	def get_data(self):
		return self.__data

	def set_data(self,data):
		self.__data=data

	def get_next(self):
		return self.__next

	def set_next(self,next_node):
		self.__next=next_node

class LinkedList:
	def __init__(self):
		self.__head=None
		self.__tail=None

	def get_head(self):
		return self.__head

	def get_tail(self):
		return self.__tail

	def add(self,data):
		new_node=Node(data)
		if self.get_head() is None:
			self.__head=new_node
			self.__tail=new_node
		else:
			self.__tail.set_next(new_node)
			self.__tail=new_node

	def display(self):
		temp=self.get_head()
		while temp is not None:
			print(temp.get_data())
			temp=temp.get_next()

	def find_node(self,data):
		temp=self.get_head()
		while temp is not None:
			if temp.get_data()==data:
				return temp
			temp=temp.get_next()

	def insert(self,data,data_before):
		new_node=Node(data)
		if data_before is None:
			new_node.set_next(self.__head)
			self.__head=new_node
			if new_node.get_next() is None:
				self.__tail=new_node
		else:
			node_before=self.find_node(data_before)
			if node_before is None:
				raise IndexError(f"Node not found {data_before}")
			new_node.set_next(node_before.get_next())
			node_before.set_next(new_node)
			if new_node.get_next() is None:
				self.__tail=new_node		

	def delete(self,data):
		node=self.find_node(data)
		if node is None:
			raise ValueError("Node not found")
		if node is self.get_head():
			self.__head=node.get_next()
			node.set_next(None)
			if node is self.get_tail():
				self.__tail=None
		else:
			temp=self.get_head()
			node_before=None
			while temp is not node:
				node_before=temp
				temp=temp.get_next()
			node_before.set_next(node.get_next())
			if node is self.get_tail():
				self.__tail=node_before
				self.__tail.set_next(None)

if __name__=="__main__":
	size=int(input())
	l=list(map(int,input().split()))
	ll=LinkedList()
	for i in l:
		ll.add(i)
	items=int(input())
	for _ in range(items):
		ll.delete(ll.get_head().get_data())
	print("Linked List")
	temp=ll.get_head()
	while temp is not None:
		print(f"->{temp.get_data()}",end="")
		temp=temp.get_next()
	print()
