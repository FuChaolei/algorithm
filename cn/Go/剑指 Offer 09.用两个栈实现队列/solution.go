// @algorithm @lc id=100273 lang=golang
// @title yong-liang-ge-zhan-shi-xian-dui-lie-lcof
type CQueue struct {
	st1 []int
	st2 []int
}

func Constructor() CQueue {
	return CQueue{}
}

func (this *CQueue) AppendTail(value int) {
	this.st1 = append(this.st1, value)
}

func (this *CQueue) DeleteHead() int {
	if len(this.st1) == 0 && len(this.st2) == 0 {
		return -1
	}
	for len(this.st2) != 0 {
		tmp := this.st2[len(this.st2)-1]
		this.st2 = this.st2[:len(this.st2)-1]
		return tmp
	}
	for len(this.st1) != 0 {
		tmp := this.st1[len(this.st1)-1]
		this.st2 = append(this.st2, tmp)
		this.st1 = this.st1[:len(this.st1)-1]
	}
	tmp := this.st2[len(this.st2)-1]
	this.st2 = this.st2[:len(this.st2)-1]
	return tmp
}

/**
 * Your CQueue object will be instantiated and called as such:
 * obj := Constructor();
 * obj.AppendTail(value);
 * param_2 := obj.DeleteHead();
 */