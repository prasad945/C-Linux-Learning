#include<stdio.h>

#define tokenpaster(n) printf("Token"#n"=%d",token##n)
int main(){
    int token34=40;
    tokenpaster(34);
    return 0;
}

// ##

// Token pasting operator

// it combines two arguments. It permits two separate tokens in the macro definition to be joined into a single token




