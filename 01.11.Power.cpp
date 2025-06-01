//compute power x^n

int power(int x, int n) {
    int res = 1;
    for (int i = 0; i<n; i++) {
        res=res*x;
    }
    return res;
}

//Efficient Solution
//Power(x,n) = if n%2 == 0 then power(x,n/2)*power(x,n/2) else power(x,n-1)*x

int power(int x, int n) {
    if(n==0) return 1;
    int temp = power(x,n/2);
    temp = temp*temp;
    if(n%2 == 0) {
        return temp;
    } else {
        return temp*x;
    }
}
//complexity - T(n) = T(floor(n/2)) + theta(1)