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

