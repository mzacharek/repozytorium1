#include <iostream>
using namespace std;

int main(){
    int n=10;
    char mapa[n][n];

    for (int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            mapa[i][j]='.';
  mapa[1][2]='M';
  mapa[3][4]='M';
  mapa[4][1]='M';
  mapa[5][7]='M';
  mapa[6][7]='M';
  mapa[9][8]='M';

  int punkty=0;
  int x=0, y=0;
  char ruch;
  while (punkty<6){
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i==x&&j==y){
                    cout << "G ";

}
            else{
                cout << mapa[i][j] << " ";
}}
        cout << endl;
}
    cout << "Punkty: " << punkty << endl;
    cout << "Pozycja gracza: (" << x <<", " << y << ")" << endl;
    cout << "Aby sie poruszyc nacisnij klaiwsz:" << endl;
    cout << "Nacisnij W, aby poruszyc sie do gory." << endl;
    cout << "Nacisnij A, aby poruszyc sie w lewo."<<endl;
    cout <<"Nacisnij S, aby poruszyc sie w dol." << endl;
    cout << "Nacisnij D, aby poruszyc sie w prawo." << endl;
    cout << "Wybor nalezy do ciebe." << endl;
    cin >> ruch;

    if((ruch== 'w' || ruch=='W')&& x>0){
        x--;
    }
    if ((ruch=='s'||ruch=='S')&&x<n-1){
        x++;
    }
    if ((ruch=='a'||ruch=='A')&& y>0){
        y--;
    }
    if((ruch=='d'||ruch=='D')&& y<n-1){
        y++;
    }

    if (mapa[x][y]=='M'){
        punkty++;
        mapa[x][y]='.';
        cout << "Brawo! Zdobyles punkt."<<endl;
    }


}
    cout << "Zebrales wszystkie moenty!" << endl;
    cout << "GRATULACJE" << endl;
    cout << "Koniec gry. Dziekuje za udzial." << endl;
}
