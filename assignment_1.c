#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000

typedef struct _YY {
    enum Type{ Int, Float }type;
    union { int i; float f; }value;
} YY;

YY num;
enum Token{ NUMBER, PLUS, STAR, LP, RP, END, MINUS, DIVIDE };
enum Token token;
char str[SIZE] = {0,};
int location;
YY expression();
YY term();
YY factor();
void get_token();
void error(int i);


int main(void) {
    // 수식 입력받기
    scanf("%s",str);
    YY result;
    get_token();
    result = expression();
    if(token != END)
        error(3);
    else{
        if(result.type == Int)
            printf("%d\n",result.value.i);
        else
            printf("%.4f\n",result.value.f);
    }
    return 0;
}

YY expression() {
    YY result;
    result = term();
    while(token == PLUS || token == MINUS) {
        int beforeToken = token;
        get_token();
        YY tempTerm;
        tempTerm = term();
        if(beforeToken == PLUS) {
            if(result.type == Int && tempTerm.type == Int) {
                result.value.i = result.value.i + tempTerm.value.i;
                result.type = Int;
            }
            else if(result.type == Int && tempTerm.type == Float) {
                result.value.f = (float)result.value.i + tempTerm.value.f;
                result.type = Float;
            }
            else if(result.type == Float && tempTerm.type == Int) {
                result.value.f = result.value.f + (float)tempTerm.value.i;
                result.type = Float;
            }
            else if(result.type == Float && tempTerm.type == Float) {
                result.value.f = result.value.f + tempTerm.value.f;
                result.type = Float;
            }
        }
        else {
            if(result.type == Int && tempTerm.type == Int) {
                result.value.i = result.value.i - tempTerm.value.i;
                result.type = Int;
            }
            else if(result.type == Int && tempTerm.type == Float) {
                result.value.f = (float)result.value.i - tempTerm.value.f;
                result.type = Float;
            }
            else if(result.type == Float && tempTerm.type == Int) {
                result.value.f = result.value.f - (float)tempTerm.value.i;
                result.type = Float;
            }
            else if(result.type == Float && tempTerm.type == Float) {
                result.value.f = result.value.f - tempTerm.value.f;
                result.type = Float;
            }

        }

    }
    return (result);
}

YY term() {
    YY result;
    result = factor();
    while(token == STAR || token == DIVIDE) {
        int beforeToken = token;
        get_token();
        YY tempFactor;
        tempFactor = factor();
        if(beforeToken == STAR) {
            if(result.type == Int && tempFactor.type == Int) {
                result.value.i = result.value.i * tempFactor.value.i;
                result.type = Int;
            }
            else if(result.type == Int && tempFactor.type == Float) {
                result.value.f = (float)result.value.i * tempFactor.value.f;
                result.type = Float;
            }
            else if(result.type == Float && tempFactor.type == Int) {
                result.value.f = result.value.f * (float)tempFactor.value.i;
                result.type = Float;
            }
            else if(result.type == Float && tempFactor.type == Float) {
                result.value.f = result.value.f * tempFactor.value.f;
                result.type = Float;
            }
        }
        else {
            if(result.type == Int && tempFactor.type == Int) {
                result.value.i = result.value.i / tempFactor.value.i;
                result.type = Int;
            }
            else if(result.type == Int && tempFactor.type == Float) {
                result.value.f = (float)result.value.i / tempFactor.value.f;
                result.type = Float;
            }
            else if(result.type == Float && tempFactor.type == Int) {
                result.value.f = result.value.f / (float)tempFactor.value.i;
                result.type = Float;
            }
            else if(result.type == Float && tempFactor.type == Float) {
                result.value.f = result.value.f / tempFactor.value.f;
                result.type = Float;
            }
        }

    }
    return (result);
}

YY factor() {
    YY result;
    if(token == NUMBER) {
        result = num;
        get_token();
    }
    else if(token == LP) {
        get_token();
        result = expression();
        if(token == RP)
            get_token();
        else
            error(2);
    }
    else
        error(1);
    return (result);
}

void get_token() {
    char ch = str[location];
    // '+'일 경우
    if(ch == '+') {
        token = PLUS;
    }
    // '*'일 경우
    else if(ch == '*') {
        token = STAR;
    }
    // '('일 경우
    else if(ch == '(') {
        token = LP;
    }
    // ')'일 경우
    else if(ch == ')') {
        token = RP;
    }
    // '\0'일 경우 즉, 문자열의 끝일 경우
    else if(ch == '\0') {
        token = END;
    }
    // '-'일 경우
    else if(ch == '-') {
        token = MINUS;
    }
    // '/'일 경우
    else if(ch == '/') {
        token = DIVIDE;
    }
    // 정수일 경우
    else if(ch >= '0' && ch <= '9') {
        token = NUMBER;
    }
    // 처음 입력받은 문자열에서의 가져올 token의 위치를 옮기기 위해
    ++location;
    // 두자리 이상의 NUMBER를 저장하기 위해
    // NUMBER를 자른 부분 중에서 소수점이 있으면 실수, 없으면 정수
    if(token == NUMBER) {
        --location;
        char tempNumber[SIZE] = "";
        while(('0' <= str[location] && str[location] <= '9') || str[location] == '.') {
            strncat(tempNumber,&str[location],1);
            ++location;
        }
        // NUMBER 안에 소수점이 있을 경우 즉, 실수일 경우
        if(strstr(tempNumber,".") != NULL) {
            num.value.f = (float)atof(tempNumber);
            num.type = Float;
        }
        // 정수일 경우
        else {
            num.value.i = atoi(tempNumber);
            num.type = Int;
        }
    }
}

void error(int i) {
    switch (i) {
        case 1: printf("수식이 올바르지 않습니다.\n"); break;
        case 2: printf("'('와 ')'의 개수가 맞지 않습니다.\n"); break;
        case 3: printf("정수 및 실수, '+', '*', '(', ')', '-', '/' 외에는 입력할 수 없습니다.\n"); break;
    }
    exit(1);
}