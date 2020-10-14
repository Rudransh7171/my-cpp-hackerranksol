#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int greatest_num = 0;
    for(int i=1; i<=4;i++){
        if (greatest_num<a){
            greatest_num=a;
        }
        else if(greatest_num<b){
            greatest_num=b;
        }
        else if(greatest_num<c){
            greatest_num=c;
        }
        else if(greatest_num<d){
            greatest_num=d;
        }
    }
    return greatest_num;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
