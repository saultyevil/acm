#include <stdio.h>

#define MAXLINE 1000  //maximum intput line size

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest input line
int main(void){

    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getlines(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){  // there was a line
        printf("%s", longest);
    }
    return 0;
}

// read a line into s, return the legnth
int getlines(char s[], int lim){

    int i;
    int c;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy from into to
void copy(char to[], char from[]){

    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}