//***SMA DEF

#ifndef M
#define M 16
#endif

#ifndef N
#define N 16
#endif

//***SMA ARG
 

float output[N];
float input[M];
float weights[N][M];


//***SMA FUN


void gemv(void){
    for (int n = 0; n < N; n++) {
        // output[n] = 0; TODO
        for (int m = 0; m < M; m++) {
            output[n] += input[m] * weights[n][m];
        }
    }
}