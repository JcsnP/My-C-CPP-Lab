#include <bits/stdc++.h>
using namespace std;

int main(){
	char name[100];
	
	gets(name);
	
	for(int i = strlen(name); i >= 0; i--){
		cout << name[i];
	}
}

/* COMMENT
use strlen to find string length
*/
