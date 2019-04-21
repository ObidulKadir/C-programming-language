#include<stdio.h>

int main(){

    int n,a,b,cin,cout,i;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        cout << "Case " << i << ": " << a+b << '\n';
    }
    return 0;
}
