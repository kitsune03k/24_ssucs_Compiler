typedef struct __Stack {
    int arr[101];
    int top;
    int lim;
} Stack;

void initStack(Stack *s) {
    s->top = 0;
    s->lim = 100;
}

int isFull(Stack *s) {
    if (s->top == s->lim) {
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty(Stack *s) {
    if (s->top == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int push(Stack *s, int val) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return -1;
    }
    s->arr[++s->top] = val;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    
    return s->arr[s->top--];
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("nothing to peek\n");
        return -1;
    }
    
    return s->arr[s->top];
}

int printEmpty(Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }
    
    printf(" || (%d / %d)\n", s->top, 100);
}

int printFull(Stack *s){
    if(isFull(s)){
        printf("Stack is full");
    }
    else{
        printf("Stack is not full");
    }
    
    printf(" || (%d / %d)\n", s->top, 100);
}

int main() {
    int i;
    
    Stack nicestack;
    initStack(&nicestack);
    
    
    printf("====== push ======\n");
    for(i=1; i<100; i++){
        push(&nicestack, i+100);
    }
    printFull(&nicestack);
    printf("Top: %d\n", peek(&nicestack));
    
    push(&nicestack, 777);
    printFull(&nicestack);
    printf("Top: %d\n", peek(&nicestack));
    
    push(&nicestack, 7777); // overflow
    
    
    printf("\n====== pop ======\n");
    for(i=0; i<99; i++){
        pop(&nicestack);
    }
    printEmpty(&nicestack);
    printf("Top: %d\n", peek(&nicestack));
    
    pop(&nicestack);
    printEmpty(&nicestack);
    printf("Top: %d\n", peek(&nicestack));
    
    pop(&nicestack); // underflow
    
    
    return 0;
}
