char * myStrcpy(char str[]){
    char *temp;
    int length=0;
    for(int i=0; str[i]!='\0'; i++){
        length++;
    }
    temp=(char*)calloc(sizeof(char),length);
    printf("Strcpy is called\n");
    for(int i=0; str[i]!='\0'; i++){
        temp[i] = str[i];
    }   
    printf("\n %s",temp);
    return temp;
}

void myStrlen(char str[]){
    int i,length=0;
    for(i=0;i<str[i]!='\0';i++){
        length++;
    }
    printf("length of string is :- %d",length);
}
 
 