/* Cate Yuk
Implements the "keep in touch" flowchart, prompting user input and making recommendations on how to best keep in touch with relatives */

#include <stdio.h>
#include <string.h>

    int main(void) {
    char strYes[4] = "yes";
    char strNo[3] = "no";
    char strParents[8] = "parents";
    char strSibling[8] = "sibling";
    char strOther[6] = "other"; 
    char strYounger[8] = "younger";
    char strOlder[6] = "older";
    char strHero[5] = "hero";
    char strUseless[8] = "useless";
    char strThought[10];
    
    printf("Who were you thinking about?\n");
    scanf("%s", strThought);
    if (strcmp(strThought, strParents) == 0) {
        printf("Mom?\n");
        scanf("%s", strThought);
        if (strcmp(strThought, strYes) == 0) {
            printf("Are things bothering you?\n");
            scanf("%s", strThought);
            if (strcmp(strThought, strYes) == 0) {
                printf("Call them (and be prepared to spend at least 10 minutes on the phone)\n");
            }
            else if (strcmp(strThought, strNo) == 0) {
                printf("Send a quick text about your day\n");
            }
        }


        else if (strcmp(strThought, strNo) == 0) {
            printf("Talked recently?\n");
            scanf("%s", strThought);
            if (strcmp(strThought, strYes) == 0) {
                printf("Do nothing (let them call you)\n");
            }
            else if (strcmp(strThought, strNo) == 0) {
                printf("Send a quick text about your day\n");
            }
        }
    }

    if (strcmp(strThought, strSibling) == 0) {
        printf("Younger or older?\n");
        scanf("%s", strThought);
            if (strcmp(strThought, strYounger) == 0) {
                printf("How do they view you?\n");
                scanf("%s", strThought);
                if (strcmp(strThought, strHero) == 0) {
                    printf("Do you have a test tomorrow?\n");
                    scanf("%s", strThought);
                    if (strcmp(strThought, strNo) == 0) {
                        printf("Call them (and be prepared to spend at least 10 minutes on the phone)\n");
                    }
                    else if (strcmp(strThought, strYes) == 0) {
                        printf("Send a quick text about your day\n");
                    }
                }
                else if (strcmp(strThought, strUseless) == 0) {
                    printf("Do nothing (let them call you)\n");
                }
            }
    
            if (strcmp(strThought, strOlder) == 0) {
                printf("Were they always there for you?\n");
                scanf("%s", strThought);
                if (strcmp(strThought, strNo) == 0) {
                    printf("Was it due to the way you acted?\n");
                    scanf("%s", strThought);
                        if (strcmp(strThought, strNo) == 0) {
                            printf("Do nothing (let them call you)\n");
                        }
                        else if (strcmp(strThought, strYes) == 0) {
                            printf("Send a quick text about your day\n");
                        }
                }
                else if (strcmp(strThought, strYes) == 0) {
                    printf("Call them (and be prepared to spend at least 10 minutes on the phone)\n"); 
                }
            }
    }

    if (strcmp(strThought, strOther) == 0) {
        printf("Is it one of your grandparents?\n");
        scanf("%s", strThought);
        if (strcmp(strThought, strYes) == 0) {
            printf("Do they like you?\n");
            scanf("%s", strThought); 
                if (strcmp(strThought, strNo) == 0) {
                    printf("Do nothing (let them call you)\n");
                }
                else if (strcmp(strThought, strYes) == 0) {
                    printf("But do they like everyone?\n");
                    scanf("%s", strThought);
                    if (strcmp(strThought, strYes) == 0) {
                        printf("Send a quick text about your day\n"); 
                    }
                    else if (strcmp(strThought, strNo) == 0) {
                        printf("Call them (and be prepared to spend at least 10 minutes on the phone)\n");
                    }
                }
        }
        else if (strcmp(strThought, strNo) == 0) {
            printf("You in their will?\n"); 
            scanf("%s", strThought); 
            if (strcmp(strThought, strNo) == 0) {
                printf("Do nothing (let them call you)\n");
            }
            else if (strcmp(strThought, strYes) == 0) {
                printf("Call them (and be prepared to spend at least 10 minutes on the phone)\n");
            }
        }
    }
    
     
return 0;
}
