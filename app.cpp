#include <iostream>
#include <limits.h>
using namespace std;

void sum(int nums[], int size) {
    int result = 0;
    for(int i = 0; i != size; i++){
        result += nums[i];
    }
    cout << result;
}

int main() {

    int numbers[] = {1,2,3,4};
    sum(numbers, sizeof(numbers)/sizeof(numbers[0]));
}