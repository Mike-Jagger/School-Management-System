/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[60];
    int age;
    char tel[20];
    char resid[30];
}acc;

typedef struct{
    acc std;
}class;

void menu();
void upd_profile(class *class);
void show_profile(class class);

int main()
{

}


void menu(){
    
}

void upd_profile_(class *schl){
    int choice, acc_id;
    printf("Which value do you want to change? \n[1] - Name \n[2] - Age \n[3] - Telephone \n[4] - Residence \nEnter the value you wamt to change: ");
    scanf("%d", &choice);
    char c[7] = "True"; 
    while(c == "True"){
        if(choice == 1){
            printf("Enter your id: ");
            scanf("%d", &acc_id);
            if(acc_id == schl->std.id){
                printf("Enter new name: ");
                scanf("%s", schl->std.name);
                printf("Name successfully changed to %s", schl->std.name);
                strcpy(c,"False");
            }
            else{
                printf("Account not found!\nPlease try again");
                strcpy(c,"True");
            }
    
        }
        else if(choice == 2){
            printf("Enter your id: ");
            scanf("%d", &acc_id);
            if(acc_id == schl->std.id){
                printf("Enter new age: ");
                scanf("%d", &schl->std.age);
                printf("Age successfully changed to %d", schl->std.age);
                strcpy(c,"False");
            }
            else{
                printf("Account not found!\nPlease try again");
                strcpy(c,"True");
            }
    
        }
        else if(choice == 3){
            printf("Enter your id: ");
            scanf("%d", &acc_id);
            if(acc_id == schl->std.id){
                printf("Enter new telephone number: ");
                scanf("%s", schl->std.tel);
                printf("Telephone number successfully changed to %s", schl->std.tel);
                strcpy(c,"False");
            }
            else{
                printf("Account not found!\nPlease try again");
                strcpy(c,"True");
            }
    
        }
        else if(choice == 4){
            printf("Enter your id: ");
            scanf("%d", &acc_id);
            if(acc_id == schl->std.id){
                printf("Enter new place of residence: ");
                scanf("%s", schl->std.resid);
                printf("Place of residence successfully changed to %s", schl->std.resid);
                strcpy(c,"False");
            }
            else{
                printf("Account not found!\nPlease try again");
                strcpy(c,"True");
            }
    
        }
        else{
            printf("\nEntry is invalid! \nTry again \n");
            strcpy(c,"True");
            
        }
    }
    
}

void show_profile(class schl){
    printf("Name: %s \nAge: %d \nid: %d \nTelephone: %s \nResidence: %s\n", schl.std.name, schl.std.age, schl.std.id, schl.std.tel, schl.std.resid);
}
