

#include <iostream>
#include<vector>
using namespace std;
void printname(int n) {
    if (n == 5)
        return;
    cout << "rahul" << " ";
    n++;
    printname(n);
}
void oneton(int n) {
    if (n == 10)
        return;
    cout << n << " ";
    n++;
    oneton(n);
}
int sum = 0;
int sumofn(int n) {
    if (n == 0)
        return 0;
    
    return n+sumofn(n-1);
}
vector<int> reversearr(vector<int> nums, int l, int h) {
    if (h <= l)
        return nums;
    swap(nums[l], nums[h]);
    return reversearr(nums, l + 1, h - 1);
}
int main()
{
    vector<int> vc = { 1,2,3,4,5 };
    //printname(0);
    //oneton(0);
    vc = reversearr(vc,0,4);
    for (auto i : vc) {
        cout << i << " ";
    }
    cout << sumofn(5);
}
