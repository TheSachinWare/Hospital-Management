#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct service {
    char requirement[50];
};

void toLowerCase(char str[]) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}
 
int main() {
    struct service need, type, doc, pick, drop;
    int distance, date, m, year, rate;
    
    printf("Welcome to our services\n");
    printf("What is your requirement?\n1) Emergency\n2) Schedule\n");
    scanf("%s", need.requirement);
    toLowerCase(need.requirement);
    
    if(strcmp(need.requirement, "1") == 0) {
        printf("Nearest ambulance number and contact.\n");
        printf("The cost will be calculated as the distance increases.\n");
    } 
    else if(strcmp(need.requirement, "2") == 0) {
        printf("Enter the date you require ambulance:\n");
        scanf("%d", &date);
        printf("Enter the month:\n");
        scanf("%d", &m);
        printf("You need ambulance on %d/%d/2023\n", date, m);
        printf("What type of Ambulance do you require?\n1) Mini Ambulance\n2) Tempo Traveler\n");
        scanf("%s", type.requirement);
        toLowerCase(type.requirement);
        
        if(strcmp(type.requirement, "1") == 0) {
            printf("Enter your pickup location:\n");
            scanf("%s", pick.requirement);
            toLowerCase(pick.requirement);
            printf("Enter your drop location:\n");
            scanf("%s", drop.requirement);
            toLowerCase(drop.requirement);
            
            if(strcmp(pick.requirement, "delhi") == 0 && strcmp(drop.requirement, "mumbai") == 0) {
                distance = 1500;
            } 
            else if(strcmp(pick.requirement, "mumbai") == 0 && strcmp(drop.requirement, "delhi") == 0) {
                distance = 1500;
            } 
            else if(strcmp(pick.requirement, "delhi") == 0 && strcmp(drop.requirement, "bangalore") == 0) {
                distance = 1700;
            } 
            else if(strcmp(pick.requirement, "bangalore") == 0 && strcmp(drop.requirement, "delhi") == 0) {
                distance = 1700;
            } 
            else if(strcmp(pick.requirement, "mumbai") == 0 && strcmp(drop.requirement, "bangalore") == 0) {
                distance = 800;
            } 
            else if(strcmp(pick.requirement, "bangalore") == 0 && strcmp(drop.requirement, "mumbai") == 0) {
                distance = 800;
            }
            
            printf("Do you require a doctor?\n");
            scanf("%s", doc.requirement);
            toLowerCase(doc.requirement);
            
            if(strcmp(doc.requirement, "yes") == 0) {
                rate = 20;
            } 
            else {
                rate = 15;
            }
            
            int cost = distance * 2 * rate;
            printf("The cost will be %d\n", cost);  // Removed & before cost as it's already an integer variable
        } 
        else if(strcmp(type.requirement, "2") == 0) {
            printf("Enter your pickup location:\n");
            scanf("%s",pick.requirement);
          toLowerCase(pick.requirement);
          printf("Enter your drop location:\n");
          scanf("%s",drop.requirement);
          toLowerCase(drop.requirement);
          if (strcmp(pick.requirement, "delhi") == 0 && strcmp(drop.requirement,"mumbai") == 0) {
           distance = 1500;
          } 
          else if (strcmp(pick.requirement, "mumbai") == 0 && strcmp(drop.requirement, "delhi") == 0) {
           distance = 1500;
         }
          else if (strcmp(pick.requirement, "delhi") == 0 && strcmp(drop.requirement, "bangalore") == 0) {
           distance = 1700;
         }
          else if (strcmp(pick.requirement, "bangalore") == 0 && strcmp(drop.requirement, "delhi") == 0) {
           distance = 1700;
         }
          else if (strcmp(pick.requirement, "mumbai") == 0 && strcmp(drop.requirement, "bangalore") == 0) {
           distance = 800;
         } 
          else if (strcmp(pick.requirement, "bangalore") == 0 && strcmp(drop.requirement, "mumbai") == 0) {
           distance = 800;
         }
         int rate;
         printf("Do you require doctor:");
         scanf("%s",doc.requirement);
         toLowerCase(doc.requirement);
         if (strcmp(doc.requirement,"yes")==0)
         {
          int rate=25;
         }
         else
         {
          rate= 20;
         }
         int cost = distance*2*rate;
         printf("The cost will be %d\n",&cost);
        }
        


        

        

    }
    

 
}
