#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[100];
    char id[20];
    char phn[20];
}st;

typedef struct teacher
{
    char name[100];
    char position[100];
    char phn[20];
}te;

typedef struct staff
{
    char name[100];
    char role[100];
    char phn[20];
}sta;

void printst(st p);
void printte(te p);
void printsta(sta p);


int main(){
    int n1;
    printf("1. Enter student info\n2. Enter teacher info\n3. Enter staff info\n");
    scanf("%d",&n1);
    switch(n1){
    case 1:{
        int n2;
        printf("How many students do you want to enter?\n");
        scanf("%d",&n2);
        st stu[n2];
        for(int i=0; i<n2; i++){
            printf("Enter no %d students Name, ID, Phone.\n", i+1);
            getchar();
            fgets(stu[i].name, 100, stdin);
            stu[i].name[strcspn(stu[i].name, "\n")] = 0;

            fgets(stu[i].id, 100, stdin);
            stu[i].id[strcspn(stu[i].id, "\n")] = 0;

            fgets(stu[i].phn, 100, stdin);
            stu[i].phn[strcspn(stu[i].phn, "\n")] = 0;
        }
        for(int i=0; i<n2; i++){
            printst(stu[i]);
        }
        break;
    }
    
    case 2:{
        int n3;
        printf("How many teacher do you want to enter?\n");
        scanf("%d",&n3);
        te teach[n3];
        for(int i=0; i<n3; i++){
            printf("Enter %d no teachers Name, Position and Phone.\n", i+1);
            getchar();
            fgets(teach[i].name , 100 , stdin);
            teach[i].name[strcspn(teach[i].name, "\n")] = 0;

            fgets(teach[i].position , 100 , stdin);
            teach[i].position[strcspn(teach[i].position, "\n")] = 0;

            fgets(teach[i].phn , 100 , stdin);
            teach[i].phn[strcspn(teach[i].phn, "\n")] = 0;
        }

        for(int i=0; i<n3; i++){
            printte(teach[i]);
        }

        break;
    }

    case 3:{
        int n4;
        printf("How many staffs do you want to enter?\n");
        scanf("%d",&n4);
        sta staf[n4];
        for(int i=0; i<n4; i++){
            printf("Enter %d no staffs Name, Role and Phone.\n", i+1);
            getchar();
            fgets(staf[i].name , 100 , stdin);
            staf[i].name[strcspn(staf[i].name, "\n")] = 0;

            fgets(staf[i].role , 100 , stdin);
            staf[i].role[strcspn(staf[i].role, "\n")] = 0;

            fgets(staf[i].phn , 100 , stdin);
            staf[i].phn[strcspn(staf[i].phn, "\n")] = 0;
        }

        for(int i=0; i<n4; i++){
            printsta(staf[i]);
        }
        
        break;
    }
    
    default:
        printf("Outta option:(");
        break;
    }
}



void printst(st p){
    printf("Students Info-\nName: %s\nID: %s\nPhone: %s\n\n", p.name, p.id, p.phn);
}

void printte(te p){
    printf("Teachers Info-\nName: %s\nPosition: %s.\nPhone: %s\n\n", p.name, p.position, p.phn);
}

void printsta(sta p){
    printf("Staffs Info-\nName: %s\nRole: %s\nPhone: %s\n\n", p.name, p.role, p.phn);
}


