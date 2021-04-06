#include <iostream>
#include <cstring>
using namespace std;

char infix[255] = "A+B*C-D/E";
char operator_stack[255];
char postfix_stack[255];
int operator_N = 0, postfix_N = 0;

int push(char character){
	// strlen(operator_stack != sizof(operator_stack))
	if(postfix_N < sizeof(postfix_stack) and operator_N < sizeof(operator_stack)){
		if(character != '(' and character != '^' and character != '*' and character != '/' and character != '+' and character != '-' and character != ')'){
			postfix_stack[postfix_N] = character;
			++postfix_N;
		}else{
			operator_stack[operator_N] = character;
			++operator_N;
		}
	}else{
		cout << "===Stack Full===" << endl;
		return 0;
	}
}

int main(){	
	for(int i = 0; i < strlen(infix); i++){
		push(infix[i]);
	}
}
