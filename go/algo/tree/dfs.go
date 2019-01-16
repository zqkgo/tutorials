package main

// 10 6 4 2 5 8 7 9 14 12 11 13 16 15 17
func PreOrder(root *Node) {
	visit(root)
	if root.Left != nil {
		PreOrder(root.Left)
	}
	if root.Right != nil {
		PreOrder(root.Right)
	}
}

// 2 4 5 6 7 8 9 10 11 12 13 14 15 16 17
func InOrder(root *Node) {
	if root.Left != nil {
		InOrder(root.Left)
	}
	visit(root)
	if root.Right != nil {
		InOrder(root.Right)
	}
}

// 2 5 4 7 9 8 6 11 13 12 15 17 16 14 10
func PostOrder(root *Node) {
	if root.Left != nil {
		PostOrder(root.Left)
	}
	if root.Right != nil {
		PostOrder(root.Right)
	}
	visit(root)
}
