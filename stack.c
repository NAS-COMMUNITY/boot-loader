# include <stdio.h>
#define MAXSIZE 5



struct stack {
  char skt[MAXSIZE];
  int top;
};

typedef struct stack STACK;
STACK s;

void push(void);
int pop(void);
void display(void);



int main(){
  int choice;
  int option = 1;


  print("Stack Operation");

  while(option){
    printf ("------------------------------------------\n");
    printf ("      1    -->    PUSH               \n");
    printf ("      2    -->    POP               \n");
    printf ("      3    -->    DISPLAY               \n");
    printf ("      4    -->    EXIT           \n");
    printf ("------------------------------------------\n");

    printf ("Enter your choice\n");
    scanf    ("%d", &choice);

    switch(choice){
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      return;
    }
    fflush(stdin);
    print("Do you want to continue(Type 0 or 1)? ");
    scanf("%d", &option);
  }
}


void push(){
  int num;

  if(s.top == (MAXSIZE - 1)){
    printf("Stack is Full");
    return;
  }else{
    printf("Enter the element to be pushed: ");
    scanf("%d", &num);

    s.top = s.top + 1;
    s.skt[s.top] = num;
  }
  return;
}
int pop(){
  char num;

  if(s.top == -1){
    printf("Stack is Empty");
    return s.top;
  }else{
    num = s.stk[s.top];
    printf("Popd element is = %d", s.stk[s.top]);
    s.top = s.top - 1;
  }
  return;
}
void display(){

  if(s.top == -1){
    printf("Stack is Empty");
    return;
  }else{
    printf("The status of the stack is");

    for(int i = s.top ; i >= 0; i++){
      printf ("%c\n", s.stk[i]);
    }
  }
  printf ("\n");
}
