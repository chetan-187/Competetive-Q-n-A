#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 100

typedef struct {
	double item[SIZE];
	int top;
}OperandStack;

// function prototypes

// function for stack operations
void push(OperandStack *, double);
double pop(OperandStack *);
int isEmpty(OperandStack *);


// push operation
void push(OperandStack *sp, double v){
	// checking overflow
	if (sp->top == SIZE-1){
		printf("Stack overflow, terminating program\n");
		exit(1);
	}
	// otherwise push
	sp->item[++sp->top] = v;
}
// Pop operation
double pop(OperandStack *sp){
	if (isEmpty(sp)){
		printf("Stack underflow, terminating program\n");
		exit(1);
	}
	return sp->item[sp->top--];
}

// returns 1 if the stack is empty, 0 otherwise
int isEmpty(OperandStack *sp){
	return sp->top == -1;
}

typedef struct {
	char item[SIZE];
	int top;
}OperatorStack;

// function prototypes

// function for operator stack operations
void opr_push(OperatorStack *, char);
char opr_pop(OperatorStack *);



// push operation
void opr_push(OperatorStack *sp, char v){
	// checking overflow
	if (sp->top == SIZE-1){
		printf("Stack overflow, terminating program\n");
		exit(1);
	}
	// otherwise push
	sp->item[++sp->top] = v;
}
// Pop operation
char opr_pop(OperatorStack *sp){
	if (sp->top == -1){
		printf("Stack underflow, terminating program\n");
		exit(1);
	}
	return sp->item[sp->top--];
}


/**
	prcd (op, '(' ) = FALSE
	prcd ('(', op ) = FALSE,
	prcd(op, ')') = TRUE,  except op = '('
	prcd('(', ')') = FALSE, instead of PUSH we will pop
*/
int prcd(char left, char right){
	if (left == '(' || right == '(')
		return 0;
	if (right == ')')
		return 1;

	if (left == '*' || left == '/'){
		if (right == '*' ||  right == '/' || right == '+' || right == '-')
			return 1;
		else
			return 0;
	}
	if (left == '+' || left == '-'){
		if (right == '+' || right == '-')
			return 1;
		else
			return 0;
	}
	if (left == '$'){
		return 1;
	}
	else
		return 0;
}

/*
   conversion: converts the supplied infix string to postfix string and assigns that
   postfix string to the postfix array supplied as parameter

*/
void convertToPostfix(char infix[], char postfix[]){
	OperatorStack stack;
	stack.top = -1;
	int i, j;
	i = 0; j = 0;
	while(infix[i] != '\0'){
		char token = infix[i];
		// if the token is an operand
		if (token >= '0' && token <= '9'){
			postfix[j++] = token;
		}
		else if (token >= 'a' && token <= 'z'){
			postfix[j++] = token;
		}
		// if the token is an operator
		else if(token == '+' || token == '-' || token =='/' || token == '*' || token == '$' || token == '(' || token ==')'){
				while(stack.top != -1 && prcd (stack.item[stack.top], token)){
					char top_opr = opr_pop(&stack);
					postfix[j++] = top_opr;
				}
				if (token == ')')
					opr_pop(&stack);
				else
				 opr_push(&stack, token);
		}
		else{
			printf("invalid symbol %c encountered \n", token);
			exit(1);
		}

		i++;
	} // end of the outer while

	while(stack.top != -1){
		char top_opr = opr_pop(&stack);
		postfix[j++] = top_opr;
	}
	postfix[j] = '\0';

}

void convertToPrefix(char infix[], char prefix[]){
    char temp[SIZE];
    int i=0,j;
    while(infix[i]!='\0'){
        i++;
    }
    j=i-1;
    int k=j;
    while(j>=0){
        temp[k-j]=infix[j];
        j--;
    }
    for(i=0;i<=k;i++){
        if(temp[i]=='('){
            infix[i]=')';
        }
        else if(temp[i]==')'){
            infix[i]='(';
        }
        else{
            infix[i]=temp[i];
        }
    }
    convertToPostfix(infix, prefix);
    i=0;
    while(prefix[i]!='\0'){
        i++;
    }
    j=i-1;
    k=j;
    while(j>=0){
        temp[k-j]=prefix[j];
        j--;
    }
    for(i=0;i<=k;i++){
        if(temp[i]=='('){
            prefix[i]=')';
        }
        else if(temp[i]==')'){
            prefix[i]='(';
        }
        else{
            prefix[i]=temp[i];
        }
    }

}

int main() {
  char infix[SIZE];
  char postfix[SIZE];
  char prefix[SIZE];

  printf("Input infix expression: ");
  scanf("%s", infix);
  convertToPostfix(infix, postfix);
  printf("The equivalent postfix is %s\n", postfix);
  convertToPrefix(infix, prefix);
  printf("The equivalent prefix is %s\n", prefix);
  return 0;

}
