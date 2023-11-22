int f(int x){
    int result = (x/42);
    int a[10+result][6][7][9];
    a[result+5][1][2][3] = 4;
    result = result + 1;
    int a = result;
    return result;
}