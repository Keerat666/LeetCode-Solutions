# A simple inorder traversal based Python3
# program to find k-th smallest element in a BST.

# A BST node
class newNode:
	
	def __init__(self, x):
		
		self.data = x
		self.left = None
		self.right = None
		self.lCount = 0

# Recursive function to insert
# an key into BST
def insert(root, x):
	
	if (root == None):
		return newNode(x)

	# If a node is inserted in left subtree,
	# then lCount of this node is increased.
	# For simplicity, we are assuming that
	# all keys (tried to be inserted) are
	# distinct.
	if (x < root.data):
		root.left = insert(root.left, x)
		root.lCount += 1

	elif (x > root.data):
		root.right = insert(root.right, x);
		
	return root

# Function to find k'th largest element
# in BST. Here count denotes the number
# of nodes processed so far
def kthSmallest(root, k):
	
	# Base case
	if (root == None):
		return None
		
	count = root.lCount + 1
	
	if (count == k):
		return root

	if (count > k):
		return kthSmallest(root.left, k)

	# Else search in right subtree
	return kthSmallest(root.right, k - count)


if __name__ == '__main__':
	
	root = None
	keys = [ 20, 8, 22, 4, 12, 10, 14 ]

	for x in keys:
		root = insert(root, x)

	k = 4
	res = kthSmallest(root, k)
	
	if (res == None):
		print("There are less than k nodes in the BST")
	else:
		print("K-th Smallest Element is", res.data)

