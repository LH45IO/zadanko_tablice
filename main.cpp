#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const int N=10;
    const int M=10;
    int t[N][M]={};

    int x=0;
    int y=0;

    int Value = 0;
    int xValue =M-1;
    int yValue =N-1;
    int Vector=0;
    do{
        t[y][x] = Value;
        x++;
        Value++;
    }while(x<N);
    x = M - 1;

    do{
        if (Vector %2==0){
            for(int i=0; i<yValue; i++){
                y++;
                t[y][x]=Value;
                Value++;
            }
            for(int i=0; i<xValue; i++){
                x--;
                t[y][x]=Value;
                Value++;
            }
        }
            else{
            for(int i=0; i<yValue; i++){
                y--;
                t[y][x]=Value;
                Value++;
            }
            for(int i=0; i<xValue; i++){
                x++;
                t[y][x]=Value;
                Value++;
            }
        }

        Vector++;
        yValue--;
        xValue--;

    }while(xValue>0 && yValue>0);





    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(10);
            cout << t[i][j] << setw(10);
        }
        cout << endl;
    }


    return 0;

}
