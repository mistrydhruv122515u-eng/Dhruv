#include <stdio.h>

int ispass(int marks) {
    if (marks >= 35) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int marks = 45;
    
    
    int result = ispass(marks);
    
    
    printf("%d\n", result);

    return 0;
}