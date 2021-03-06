#define M 16
#define N 16


char tab0[M][N] = {0};

int output[N];
int input[N];
int weights[N];


typedef int T32;

void GENV(void){
    for (int n = 0; n < N; n++) {
        // output[n] = 0; TODO
        for (int m = 0; m < M; m++) {
            output[n] += input[m] * weights[n][m];
        }
    }
}



#define TAB1N 1234
int tab1[TAB1N][2];

void multiplicity_test(void){
    for(int i = 0; i < TAB1N; i++){
        for(int j = 0; j < 2; j++){
            tab1[i][j] = i+j;
        }
    }
}

int main(void){
    int res = 0;

    // Write Only
    for (int j = 0; j < M; j++){
        for (int i = 0; i < N; i++){
            tab0[j][i] = i+j;
        }
    }
    
    /* Debug
    for (int j = 0; j < M; j++){
        printf("j = %d :\n", j);
        for (int i = 0; i < N; i++){
            printf("%d ", tab0[j][i]);
        }
        printf("\n");
        printf("j = %d :\n", j);
    }
    */

    // Read and Write
    for (int j = 0; j < M; j++){
        for (int i = 0; i < N; i++){
            tab0[j][i] += 1;
        }
    }

    // Read Only
    for (int j = 0; j < M; j++){
        res += 50;
        for (int i = 0; i < N; i++){
            int z = i + 2;
            (void)z;
            res += tab0[j][i];
            res -= 1;
        }
        res -= 50;
    }
    res += add(res, res);
    printf("sum = %d\n", res);

    return 0;
}
