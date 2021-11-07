stack<int> st, aux;
MinStack::MinStack() {
    while(st.size()>0){
        st.pop();
        aux.pop();
    }
}

void MinStack::push(int x) {
    st.push(x);
    int val = x;
    if(aux.size()>0 && aux.top()<x){
        val = aux.top();
    }
    aux.push(val);
}

void MinStack::pop() {
    if(st.size()>0){
        st.pop();
        aux.pop();
    }
}

int MinStack::top() {
    if(st.size()>0){
        return st.top();
    }
    return -1;
}

int MinStack::getMin() {
    if(st.size()>0){
        return aux.top();
    }
    return -1;
}
