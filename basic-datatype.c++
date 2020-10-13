#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char ch;
    double d;
    float f;
    scanf("%d %ld %c %f %lf", &a, &b, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%lf\n%f",a,b,ch,f,d);
    return 0;
}
