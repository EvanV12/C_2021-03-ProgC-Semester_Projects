void newLine(){printf("\n");}

int add (int a, int b){return a+b;}

int sub (int a, int b){return a-b;}

int multi (int a, int b) {return a*b;}

float diairesi (int a, int b){return (float)a/b;}

int division (int a, int b){return a/b;}

int modulus (int a, int b){return a%b;}

long int power (int a, int b){
    int arr [2], i, sum=1;
    if (b!=0){
        for (i=0; i<b; i++){
            sum *= a;
        }
    }
    return sum;
}

float expr1 (int a, int b){

    long int part1 = power(a, 5);
    long int part2 = power(b, 8);
    long int part3 = power(a, b);
    
    return (part1 + part2)/(35 * part3);

}

float expr2 (int a, int b) {
    
    long int k1 = 85 + power(a, b);
    int k2 = 35 * b;
    long int k3 = (5 * a) + (7 * power(b, 3));
    long int k4 = power(b, a) + 53;
    
    int k5 = (8 * b) + 35;
    int k6 = 64;
    int k7 = (38 * b) - 47;
    int k8 = a+b;
    
    long int k9 = k1/k2;
    long int k10 = k3/k4;
    int k11 = k5/k6;
    int k12 = k7/k8;
    
    long int k13 = k9/k10;
    long int k14 = k11/k12;
    
    long int k15 = k13/k14;

    return k15;
    
}

