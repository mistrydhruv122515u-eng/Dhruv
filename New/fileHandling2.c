/*
#include<stdio.h>
int main() {
FILE *fp;
    // to create and open file 
    fp=fopen("student.txt","r");
    //to read form  file 
    while(fgets(ch,sizeof(ch),fp)!=NULL){
    printf("%s",ch);
    }    
    fclose(fp); 
    
    return 0;
}
    */

    #include<stdio.h>
    int main() {
    
    FILE *fp;
    char ch[100];
    fp=fopen("student.txt","r");
    while (fgets(ch,sizeof(ch),fp)!=NULL) 
    {
        printf(" %s",ch);
    }
    fclose(fp);
        return 0;
    }