package main

// 10 6 4 2 5 8 7 9 14 12 11 13 16 15 17
func PreOrderInteration(root *Node) {
}

//         10
//       /     \
//    6         14
//   / \       /  \
//  4   8    12    16
// / \ / \  / \   / \
// 2 5 7 9 11 13 15 17
// 2 4 5 6 7 8 9 10 11 12 13 14 15 16 17
func InOrderInteration(root *Node) {
	var stack []*Node
	node := root
	for len(stack) != 0 || node != nil {
		if node != nil {
			stack = append(stack, node)
			node = node.Left
		} else {
			top := stack[len(stack)-1]
			stack = stack[0 : len(stack)-1]
			visit(top)
			node = top.Right
		}
	}
}

// 2 5 4 7 9 8 6 11 13 12 15 17 16 14 10
func PostOrderInteration(root *Node) {
}
