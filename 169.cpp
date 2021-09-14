struct Stack{
  int a[100005];
  int last;	//	栈顶
  
  void init(){
    last = 0;
  }
  void push(int t){	//	栈顶入栈
    a[last] = t;
    last++;
    //	a[0 ... last-1]   a[last] 待填
  }
  int top(){
    return a[last - 1];
  }
  void pop(){
    last--;
  }
  int size(){
    return last;
  }
  bool empty(){
    return last == 0;
  }
};

