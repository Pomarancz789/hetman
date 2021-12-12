#include <iostream>
using namespace std;

int main() {
    int szachownica[8][8]={0};
    int x=0;
    int y=0;
    
    //pytamy o pozycje hetmana (to jest długie tylko dlatego że robie to w miare ładnie)
    cout << "podaj pozycję hetmana" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    //pytamy o pozycje hetmana (to jest długie tylko dlatego że robie to w miare ładnie)
    
    
    //zmniejszamy indexy o 1 ponieważ tablice zaczynają się od 0 a nie od 1
    x=-1;
    y=-1;
    //zmniejszamy indexy o 1 ponieważ tablice zaczynają się od 0 a nie od 1
    
    
    //ustawiamy pozycję hetmana jako 2 w tablicy
    szachownica[x][y]=2;
    //ustawiamy pozycję hetmana jako 2 w tablicy
    
    
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;i++)
        {
            cout << szachownica[j][i] << "  ";
        }
        cout <<endl;
    }
    
    return 0;
}
