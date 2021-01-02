#include <bits/stdc++.h>
using namespace std;

int main(){
	char name[100];
	
	gets(name);
	
	for(unsigned int i = 0; i < strlen(name); i++){
		if(isupper(name[i])){
			cout << name[i];
		}
	}
}

/* COMMENT
use isupepr to find string Uppercase 🤔
*/
