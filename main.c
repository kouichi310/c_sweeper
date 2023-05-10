#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_mines(int target, int mines[]){
    for(int i=0;i<5;i++){
        if(mines[i]==target){
            return 1;
        }
    }
    return 0;
}

void init(int map[5][5]){
    int mines[3]={0};
    srand((unsigned)time(NULL));
    for(int i=0;i<3;i++)mines[i]=rand()%25;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(is_mines(i*5+j,mines)==1){
                map[i][j]=1;
            }else{
                map[i][j]=0;
            }
        }
    }
}
int main(void){
    int map[5][5];
    init(map);
}
