// Analysis of Multiple Loops

// Subsequent Loops
void loop1() {
    int sum = 0;
    for (int i = 0; i < n; i = i + 1) {
        sum = sum + i;
    }
}

void loop2() {
    int sum = 0;
    for (int i = 1; i < n; i = i * 2) {
        sum = sum + i;
    }
}

void loop3() {
    int sum = 0;
    for (int i = 1; i < 100; i = i + 1) {
        sum = sum + i;
    }
}

void fun(int n) {
    loop1();//THETA(n)
    loop2();//THETA(logn)
    loop3();//THETA(1)
}

// Total complxity for fun() is THETA(n) + THETA(logn) + THETA(1)
// IGNORE lower order terms in overall complxity - THETA(n) 

//Nested Loops
void fun1(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) { //THETA(n)
        for (int j = 1; j < n; j=j*2) {//THETA(logn)
            sum++;
        }
    }
}
//total complxity is multiply of nested loops - THETA(n) * THETA(logn) --> THETA(n*logn)

//For mixed loop which is nested and subsequent loops ---------- THETA(nlogn) + THETA(m^2)
//OVERALL time complexity THETA(nlogn + m^2)