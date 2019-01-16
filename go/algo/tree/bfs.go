package main

import "fmt"

type Node struct {
	Val   int
	Left  *Node
	Right *Node
}

func bfs(root *Node) {
	var queue []*Node
	queue = append(queue, root)
	for len(queue) != 0 {
		cur := queue[0]
		visit(cur)
		queue = queue[1:]
		if cur.Left != nil {
			queue = append(queue, cur.Left)
		}
		if cur.Right != nil {
			queue = append(queue, cur.Right)
		}
	}
}

func visit(n *Node) {
	if n != nil {
		fmt.Printf("%d ", n.Val)
	}
}

func NewNode(val int) *Node {
	node := &Node{}
	node.Val = val
	node.Left = nil
	node.Right = nil
	return node
}

//         10
//       /     \
//    6         14
//   / \       /  \
//  4   8    12    16
// / \ / \  / \   / \
// 2 5 7 9 11 13 15 17
func ConstructTree() (root *Node) {
	var n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15 *Node
	n1 = NewNode(10)
	n2 = NewNode(6)
	n3 = NewNode(14)
	n4 = NewNode(4)
	n5 = NewNode(8)
	n6 = NewNode(12)
	n7 = NewNode(16)
	n8 = NewNode(2)
	n9 = NewNode(5)
	n10 = NewNode(7)
	n11 = NewNode(9)
	n12 = NewNode(11)
	n13 = NewNode(13)
	n14 = NewNode(15)
	n15 = NewNode(17)

	n1.Left = n2
	n1.Right = n3

	n2.Left = n4
	n2.Right = n5

	n3.Left = n6
	n3.Right = n7

	n4.Left = n8
	n4.Right = n9

	n5.Left = n10
	n5.Right = n11

	n6.Left = n12
	n6.Right = n13

	n7.Left = n14
	n7.Right = n15

	root = n1
	return
}
