// Analysis of Recursive

void func(int n) {
    if (n <= 0) {
         return;
    }
    func(n/2);
    func(n/2);
}

/*
Loop Analysis : Need to construct Recursive Relation
--> Lets say overall complxity TIME IS T(n) and T(n) = T(n/2) + T(n/2) + theta(1);
--> best case is n <= 0 then theta(1)
*/

void func1(int n) {
    if (n <= 0) {
        return;
    }
    for (int i = 0; i < n; i++) {
        print("GFG");
    }
    func1(n/2);
    func1(n/3);
}
// T(n) = T(n/2) + T(n/3) + theta(n)

void func2(int n) {
    if(n <= 1) {
        return ;
    }
    printf("gfg");
    func2(n-1);
}
// T(n) = T(n-1) + theta(1)
// when n=1, its theta(1)