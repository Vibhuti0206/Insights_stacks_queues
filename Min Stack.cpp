int arr[5000005];
int idx;
int mini[500005];
MinStack::MinStack() {
    idx=-1;
    for(int i=0;i<500005;i++)mini[i]=INT_MAX;
}

void MinStack::push(int x) {
arr[++idx]=x;
if(idx>0)
    mini[idx] = min(mini[idx-1],x);
else
    mini[idx]=x;
}

void MinStack::pop() {
    if(idx>=0)
        idx--;
}

int MinStack::top() {
    if(idx==-1)return -1;
    return arr[idx];
}

int MinStack::getMin() {
    if(idx==-1) return -1;
    return mini[idx];
}
