#include <cmath>
#include <iostream>
using namespace std;

char sayilar_S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ','};
// int  sayilar_i[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char islemler[] = { '+', '-', '*', '/' };
int islemler_no[] = {100, 200, 300, 400};


void sonucu_yazdir(int kod, string sayi1, string sayi2) {
    switch (kod) {
        case 0: // Topla
            cout << (std::stof(sayi1) + std::stof(sayi2)) <<endl;
            break;
        case 1: // Cikar
            cout << (std::stof(sayi1) - std::stof(sayi2)) <<endl;
            break;
        case 2: // Carp
            cout << (std::stof(sayi1) * std::stof(sayi2)) <<endl;
            break;
        case 3: // Bol
            if (std::stof(sayi2) != 0) {
                cout << (std::stof(sayi1) / std::stof(sayi2)) <<endl;
            } else {
                cout << "# 0'a bolme hatasi." << endl;
            }
            break;
        default:
            break;
    }
}

int nedir(char keyToFind){
    int sayi = -1;
    for (int i = 0; i<12; i++) {

        if (sayilar_S[i] == keyToFind){
            return 1;
        }

        for (int j = 0; j < 4; j++)
        {
            if (islemler[j] == keyToFind){
                return islemler_no[j];
            }
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    
    try{
        string input;
        bool gecis = true;
        while (gecis){
                if(argc < 2){
                    getline(cin, input);
                }else{
                    for (int i=1; i < argc; i++){
                        input += argv[i];
                    }
                    gecis = false;
                }
                string sayi1, sayi2;
                int islem_sayac = 0;
                int islem_no = 0;

                for (char c : input) {
                    int kod = nedir(c);
                    if (kod == 1){
                        if (islem_sayac == 0)
                        {
                            sayi1 += c;
                        }else
                        {
                            sayi2 += c;
                        }
                                    
                    }else if (kod >=100)
                    {
                        islem_no = (kod / 100) -1;
                        islem_sayac++;
                        
                    }
                }
                if (!sayi1.empty() && !sayi2.empty()){
                    sonucu_yazdir(islem_no, sayi1, sayi2);
                }else{
                    cerr << "Probably wrong answer: " << sayi1 << endl;
                }
            }
    }
    catch(exception &e){
        cout << e.what();
 
    }

}