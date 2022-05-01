#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int num[] = {a, b, c, d};
    int max;
    
    for (int i = 1; i < 4; i++) {
        if(num[0] < num[i])
            num[0] = num[i];
    }
    
    return num[0];
};

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
