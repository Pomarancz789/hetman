#include <iostream>
using namespace std;

int main() {
    int szachownica[8][8]={};
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
    x=x-1;
    y=y-1;
    //zmniejszamy indexy o 1 ponieważ tablice zaczynają się od 0 a nie od 1
    
    
    //wszystkie ruchy w pionie i poziomie od pozycji hetmana na 1
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if (j==x||i==y) {
                szachownica[j][i]=1;
            }
        }
    }
    //wszystkie ruchy w pionie i poziomie od pozycji hetmana na 1
    
    
    //ruchy w prawo w góre
    for(int i=y; i>-1; i--)
    {
        for(int j=x;j<8;j++)
        {
            if(i+j==x+y)
                szachownica[j][i]=1;
        }
    }
    //ruchy w prawo w góre
    
    
    //ruchy w prawo w dół
    for(int i=y; i<8; i++)
    {
        for(int j=x;j<8;j++)
        {
            if(i-j==y-x)
                szachownica[j][i]=1;
        }
    }
    //ruchy w prawo w dół
    
    
    //ruchy w lewo w dół
    for(int i=y; i<8; i++)
    {
        for(int j=x;j>-1;j--)
        {
            if(j+i==y+x)
                szachownica[j][i]=1;
        }
    }
    //ruchy w lewo w dół
    
    
    //ruchy w lewo w dół
    for(int i=y; i>-1; i--)
    {
        for(int j=x;j>-1;j--)
        {
            if(i-j==y-x)
                szachownica[j][i]=1;
        }
    }
    //ruchy w lewo w dół
    
    
    //ustawiamy pozycję hetmana jako 2 w tablicy
    szachownica[x][y]=2;
    //ustawiamy pozycję hetmana jako 2 w tablicy
    
    
    //wypisanie tablicy
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            
            cout << szachownica[j][i] << "  ";
        }
        cout <<endl;
    }
    //wypisanie tablicy
    
    return 0;
}
