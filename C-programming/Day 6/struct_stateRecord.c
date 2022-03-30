#include<stdio.h>
#include<malloc.h>
typedef struct StatesOfIndia{
    char stateName[30];
    long int population;
    char areaOfState[30];
    char language[30];
    double gdp;
}STATE;


int main(){
    STATE *st;
    int num,choice,count=0;
    char ch;
    printf("Enter how many states you want to enter\n");
    scanf("%d",&num);

    st=(STATE*)calloc(sizeof(STATE),num);
    do{
        printf("1] Add state\n2] Display States\n\nEnter your option\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                    
                    printf("Enter stateName,population,areaOfState,lanaguage,gdp\n");
                    fflush(stdin);
                    gets((st+count)->stateName);
                    scanf("%ld",&(st+count)->population);
                    fflush(stdin);
                    gets((st+count)->areaOfState);
                    fflush(stdin);
                    gets((st+count)->language);
                    scanf("%lf",&(st+count)->gdp);
                    count++;
                    break;
            case 2:
                    printf("\nRecords are \n");
                    for(int i=0;i<count;i++){
                        printf("\n\n%s %ld %s %s %lf",(st+i)->stateName,(st+i)->population,(st+i)->areaOfState,(st+i)->language,(st+i)->gdp);
                    }
                    break;

            default :
                    printf("Invalied Choice");
        }
        printf("\n\nDo you want continue....\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');

    // printf("Size of st %d",sizeof(st));

    free(st);
    return 0;
}
