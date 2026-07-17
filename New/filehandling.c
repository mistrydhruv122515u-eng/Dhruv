#include<stdio.h>
/*
open 
write/read
cloe
*/
int main() {
/*
for apend (FILE *fp;
    // to create and open file 
    fp=fopen("student.txt","a");
    //to rite into file
    fprintf(fp,"this is top technologie/////");
    fclose(fp); )
*/
    FILE *fp;
    // to create and open file 
    fp=fopen("student.txt","a");
    //to rite into file
    fprintf(fp,"\n surat  ");
    fclose(fp); 

    return 0;
}