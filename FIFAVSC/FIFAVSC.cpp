#include <iostream>
#include <windows.h>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fstream>
#include <cstdlib>
#include <random>
using namespace std;

class FifaDrawer {
    public: 
        string goldFifaCard[6][6]; //1: Name, 2: OVR, 3: Position, 4: Nation, 5: Team 6: Card Type
        string iconCard[4][6]; //1: Name, 2: OVR, 3: Position, 4: Nation, 5: Team 6: Card Type
        string mlsLegendsCard[6][6]; //1: Name, 2: OVR, 3: Position, 4: Nation, 5: Team 6: Card Type
        string eurosTOTT[11][6]; //1: Name, 2: OVR, 3: Position, 4: Nation, 5: Team 6: Card Type

    FifaDrawer(){
        srand (time(NULL));
        //goldFifaCard Values
            goldFifaCard[0][0] = "Griezmann";
                goldFifaCard[0][1] = "83";
                goldFifaCard[0][2] = "ST";
                goldFifaCard[0][3] = "France";
                goldFifaCard[0][4] = "Club Atletico De Madrid";
                goldFifaCard[0][5] = "Base";
            goldFifaCard[1][0] = "Rashford";
                goldFifaCard[1][1] = "81";
                goldFifaCard[1][2] = "LW";
                goldFifaCard[1][3] = "England";
                goldFifaCard[1][4] = "Manchester United FC";
                goldFifaCard[1][5] = "Base";
            goldFifaCard[2][0] = "Cristiano Ronaldo";
                goldFifaCard[2][1] = "90";
                goldFifaCard[2][2] = "ST";
                goldFifaCard[2][3] = "Portugal";
                goldFifaCard[2][4] = "Al-Nassr FC";
                goldFifaCard[2][5] = "Base";
            goldFifaCard[3][0] = "Messi";
                goldFifaCard[3][1] = "91";
                goldFifaCard[3][2] = "RW";
                goldFifaCard[3][3] = "Argentina";
                goldFifaCard[3][4] = "Inter Miami CF";
                goldFifaCard[3][5] = "Base";
            goldFifaCard[4][0] = "Kang Seong Jin";
                goldFifaCard[4][1] = "81";
                goldFifaCard[4][2] = "RW";
                goldFifaCard[4][3] = "South Korea";
                goldFifaCard[4][4] = "FC Seoul";
                goldFifaCard[4][5] = "Base";
            goldFifaCard[5][0] = "Benzema";
                goldFifaCard[5][1] = "90";
                goldFifaCard[5][2] = "CF";
                goldFifaCard[5][3] = "France";
                goldFifaCard[5][4] = "Al-Ittihad Club";
                goldFifaCard[5][5] = "Base";
            goldFifaCard[6][0] = "Rodri";
                goldFifaCard[6][1] = "89";
                goldFifaCard[6][2] = "CDM";
                goldFifaCard[6][3] = "Spain";
                goldFifaCard[6][4] = "Manchester City FC";
                goldFifaCard[6][5] = "Base";
        //Icon card Values
            iconCard[0][0] = "Pele";
                iconCard[0][1] = "91";
                iconCard[0][2] = "CF";
                iconCard[0][3] = "Brazil";
                iconCard[0][4] = "Icon";
                iconCard[0][5] = "Base Icon";
            iconCard[1][0] = "Zidane";
                iconCard[1][1] = "91";
                iconCard[1][2] = "CM";
                iconCard[1][3] = "France";
                iconCard[1][4] = "Icon";
                iconCard[1][5] = "Base Icon";
            iconCard[2][0] = "Best";
                iconCard[2][1] = "88";
                iconCard[2][2] = "RW";
                iconCard[2][3] = "North Ireland";
                iconCard[2][4] = "Icon";
                iconCard[2][5] = "Base Icon";
            iconCard[3][0] = "Eusebio";
                iconCard[3][1] = "89";
                iconCard[3][2] = "CF";
                iconCard[3][3] = "Portugal";
                iconCard[3][4] = "Icon";
                iconCard[3][5] = "Base Icon";
        //mlsLegendsCard Values
            mlsLegendsCard[0][0] = "Bale";
                mlsLegendsCard[0][1] = "93";
                mlsLegendsCard[0][2] = "RW";
                mlsLegendsCard[0][3] = "Wales";
                mlsLegendsCard[0][4] = "Los Angeles FC";
                mlsLegendsCard[0][5] = "End of an Era";
            mlsLegendsCard[1][0] = "Messi";
                mlsLegendsCard[1][1] = "99";
                mlsLegendsCard[1][2] = "ST";
                mlsLegendsCard[1][3] = "Argentina";
                mlsLegendsCard[1][4] = "Inter Miami CF";
                mlsLegendsCard[1][5] = "Premium FUTTIES";
            mlsLegendsCard[2][0] = "Jordi Alba";
                mlsLegendsCard[2][1] = "98";
                mlsLegendsCard[2][2] = "LB";
                mlsLegendsCard[2][3] = "Spain";
                mlsLegendsCard[2][4] = "Inter Miami CF";
                mlsLegendsCard[2][5] = "Player Moments";
            mlsLegendsCard[3][0] = "Sergio Busquets";
                mlsLegendsCard[3][1] = "97";
                mlsLegendsCard[3][2] = "CDM";
                mlsLegendsCard[3][3] = "Spain";
                mlsLegendsCard[3][4] = "Inter Miami CF";
                mlsLegendsCard[3][5] = "Premium FUTTIES";
            mlsLegendsCard[4][0] = "Ibrahimovic";
                mlsLegendsCard[4][1] = "95";
                mlsLegendsCard[4][2] = "ST";
                mlsLegendsCard[4][3] = "Sweden";
                mlsLegendsCard[4][4] = "LA Galaxy";
                mlsLegendsCard[4][5] = "Team of the Season";
            mlsLegendsCard[5][0] = "Donovan";
                mlsLegendsCard[5][1] = "86";
                mlsLegendsCard[5][2] = "CF";
                mlsLegendsCard[5][3] = "United States of America";
                mlsLegendsCard[5][4] = "Hero";
                mlsLegendsCard[5][5] = "Base Hero";
        //Euros TOTT Values
            eurosTOTT[0][0] = "Mamardashvili";
                eurosTOTT[0][1] = "95";
                eurosTOTT[0][2] = "GK";
                eurosTOTT[0][3] = "Georgia";
                eurosTOTT[0][4] = "Valencia CF";
                eurosTOTT[0][5] = "Euro Team of the Tournament";
            eurosTOTT[1][0] = "Cucurella";
                eurosTOTT[1][1] = "97";
                eurosTOTT[1][2] = "LB";
                eurosTOTT[1][3] = "Spain";
                eurosTOTT[1][4] = "Chelsea FC";
                eurosTOTT[1][5] = "Euro Team of the Tournament";
            eurosTOTT[2][0] = "Laporte";
                eurosTOTT[2][1] = "95";
                eurosTOTT[2][2] = "CB";
                eurosTOTT[2][3] = "Spain";
                eurosTOTT[2][4] = "Al-Nassr FC";
                eurosTOTT[2][5] = "Euro Team of the Tournament";
            eurosTOTT[3][0] = "Stones";
                eurosTOTT[3][1] = "97";
                eurosTOTT[3][2] = "CB";
                eurosTOTT[3][3] = "England";
                eurosTOTT[3][4] = "Manchester City FC";
                eurosTOTT[3][5] = "Euro Team of the Tournament";
            eurosTOTT[4][0] = "Kimmich";
                eurosTOTT[4][1] = "96";
                eurosTOTT[4][2] = "RB";
                eurosTOTT[4][3] = "Germany";
                eurosTOTT[4][4] = "FC Bayern Munich";
                eurosTOTT[4][5] = "Euro Team of the Tournament";
            eurosTOTT[5][0] = "Rodri";
                eurosTOTT[5][1] = "98";
                eurosTOTT[5][2] = "CDM";
                eurosTOTT[5][3] = "Spain";
                eurosTOTT[5][4] = "Manchester City FC";
                eurosTOTT[5][5] = "Euro Team of the Tournament";
            eurosTOTT[6][0] = "Fabian Ruiz";
                eurosTOTT[6][1] = "95";
                eurosTOTT[6][2] = "CM";
                eurosTOTT[6][3] = "Spain";
                eurosTOTT[6][4] = "Paris Saint-Germain FC";
                eurosTOTT[6][5] = "Euro Team of the Tournament";
            eurosTOTT[7][0] = "Dani Olmo";
                eurosTOTT[7][1] = "98";
                eurosTOTT[7][2] = "CAM";
                eurosTOTT[7][3] = "Spain";
                eurosTOTT[7][4] = "RB Leipzig";
                eurosTOTT[7][5] = "Euro Team of the Tournament";
            eurosTOTT[8][0] = "Nico Williams";
                eurosTOTT[8][1] = "97";
                eurosTOTT[8][2] = "LW";
                eurosTOTT[8][3] = "Spain";
                eurosTOTT[8][4] = "Athletic Bilbao";
                eurosTOTT[8][5] = "Euro Team of the Tournament";
            eurosTOTT[9][0] = "Gakpo";
                eurosTOTT[9][1] = "97";
                eurosTOTT[9][2] = "CF";
                eurosTOTT[9][3] = "Netherlands";
                eurosTOTT[9][4] = "Liverpool FC";
                eurosTOTT[9][5] = "Euro Team of the Tournament";
            eurosTOTT[9][0] = "Lamine Yamal";
                eurosTOTT[9][1] = "98";
                eurosTOTT[9][2] = "RW";
                eurosTOTT[9][3] = "Spain";
                eurosTOTT[9][4] = "FC Barcelona";
                eurosTOTT[9][5] = "Euro Team of the Tournament";
    }

    int homePacks(){
        int pack;
        cout << "___________________________________________________________________________" << endl;
        cout << "Welcome to the Fifa Pack Simulator!" << endl;
        cout << "Please choose a pack to open from the choices below!" << endl;
        cout << "1. Gold 2 Player Pack" << endl;
        cout << "2. Base Icon Player Pull" << endl;
        cout << "3. MLS Legends Player Pull" << endl;
        cout << "4. Euros Team of the Tournament Player Pull" << endl;
        cout << "0. Exit" << endl;
        cin >> pack;
        return pack;
    }

    int Gamble(int x){
        int RandCard = (rand() % x) + 1;
        return RandCard;
    }

    void packOpeningStart(){
        cout << "Opening pack..." << endl;
    }

    void specialCardDraw(int x, int y, int z, int q){
        if (q == 1){
            if(z == 1){
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << goldFifaCard[x-1][3] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << goldFifaCard[x-1][2] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << goldFifaCard[x-1][4] << endl;
            }else if (z == 2){
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << goldFifaCard[y-1][3] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << goldFifaCard[y-1][2] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << goldFifaCard[y-1][4] << endl;
            }
        } else if (q == 2){
            if(z == 1){
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << iconCard[x-1][3] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << iconCard[x-1][2] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << iconCard[x-1][4] << endl;
            }
        } else if (q == 3){
            if(z == 1){
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << mlsLegendsCard[x-1][3] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << mlsLegendsCard[x-1][2] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << mlsLegendsCard[x-1][4] << endl;
            }
        } else if (q == 4){
            if(z == 1){
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << eurosTOTT[x-1][3] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << eurosTOTT[x-1][2] << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << "." << endl;
                cout << eurosTOTT[x-1][4] << endl;
            }
        }
    }

    void cardDisplay(int x, int y){
        if (y == 1){
            cout << "_____________________________" << endl;
            cout << goldFifaCard[x-1][0] << endl;
            cout << goldFifaCard[x-1][1] << endl;
            cout << goldFifaCard[x-1][2] << endl;
            cout << goldFifaCard[x-1][3] << endl;
            cout << goldFifaCard[x-1][4] << endl;
            cout << goldFifaCard[x-1][5] << endl;
            cout << "_____________________________" << endl;
        }
        else if (y == 2){
            cout << "_____________________________" << endl;
            cout << iconCard[x-1][0] << endl;
            cout << iconCard[x-1][1] << endl;
            cout << iconCard[x-1][2] << endl;
            cout << iconCard[x-1][3] << endl;
            cout << iconCard[x-1][4] << endl;
            cout << iconCard[x-1][5] << endl;
            cout << "_____________________________" << endl;        
        }
        else if (y == 3){
            cout << "_____________________________" << endl;
            cout << mlsLegendsCard[x-1][0] << endl;
            cout << mlsLegendsCard[x-1][1] << endl;
            cout << mlsLegendsCard[x-1][2] << endl;
            cout << mlsLegendsCard[x-1][3] << endl;
            cout << mlsLegendsCard[x-1][4] << endl;
            cout << mlsLegendsCard[x-1][5] << endl;
            cout << "_____________________________" << endl;        
        }
        else if (y == 4){
            cout << "_____________________________" << endl;
            cout << eurosTOTT[x-1][0] << endl;
            cout << eurosTOTT[x-1][1] << endl;
            cout << eurosTOTT[x-1][2] << endl;
            cout << eurosTOTT[x-1][3] << endl;
            cout << eurosTOTT[x-1][4] << endl;
            cout << eurosTOTT[x-1][5] << endl;
            cout << "_____________________________" << endl;        
        }
    }

    void cardDraw(int juan, int too, int y){
        if (y == 1){
            cout << "_____________________________" << endl;
            cout << "1. " + goldFifaCard[juan-1][0] << endl;
            cout << "2. " + goldFifaCard[too-1][0] << endl;
            cout << "_____________________________" << endl;
        } else if (y == 2){
            cout << "_____________________________" << endl;
            cout << "1. " + iconCard[juan-1][0] << endl;
            cout << "_____________________________" << endl;
        } else if (y == 3){
            cout << "_____________________________" << endl;
            cout << "1. " + mlsLegendsCard[juan-1][0] << endl;
            cout << "_____________________________" << endl;
        } else if (y == 4){
            cout << "_____________________________" << endl;
            cout << "1. " + eurosTOTT[juan-1][0] << endl;
            cout << "_____________________________" << endl;
        }
    }

    int drawPrompter(int y){
        int command;
        if (y == 1){
            cout << "_____________________________" << endl;
            cout << "Choose an action from the ones below." << endl;
            cout << "1. Display the first card" << endl;
            cout << "2. Display the second card" << endl;
            cout << "0. End" << endl;
            cin >> command;
        } else if (y == 2){
            cout << "_____________________________" << endl;
            cout << "Choose an action from the ones below." << endl;
            cout << "1. Display the first card" << endl;
            cout << "0. End" << endl;
            cin >> command;
        } else if (y == 3){
            cout << "_____________________________" << endl;
            cout << "Choose an action from the ones below." << endl;
            cout << "1. Display the first card" << endl;
            cout << "0. End" << endl;
            cin >> command;
        } else if (y == 4){
            cout << "_____________________________" << endl;
            cout << "Choose an action from the ones below." << endl;
            cout << "1. Display the first card" << endl;
            cout << "0. End" << endl;
            cin >> command;
        }
        return command;
    }
 
    int baseVsSpecial(int x, int y, int z){
        int miniBig;
        string s1, s2;
        int i1, i2;
        if (z == 1){
            s1 = goldFifaCard[x-1][1];
            s2 = goldFifaCard[y-1][1];
            i1 = stoi(s1);
            i2 = stoi(s2); 
            if (i1 >= i2){
                miniBig = 1;
            } else {
                miniBig = 2;
            }
        }
        return miniBig;
    }



};

int main(){
    int packChoice;
    int choiceDone;
    int specialtyPackEvaluate;
    int RandomizedCard1, RandomizedCard2;
    FifaDrawer startDraw;
    packChoice = startDraw.homePacks();
    switch (packChoice){
        case 1:
            startDraw.packOpeningStart();
            RandomizedCard1 = startDraw.Gamble(6);
            RandomizedCard2 = startDraw.Gamble(6);
            specialtyPackEvaluate = startDraw.baseVsSpecial(RandomizedCard1, RandomizedCard2, packChoice);
            startDraw.specialCardDraw(RandomizedCard1, RandomizedCard2, specialtyPackEvaluate, packChoice);
            startDraw.cardDraw(RandomizedCard1, RandomizedCard2, packChoice);
            choiceDone = startDraw.drawPrompter(packChoice);
            switch (choiceDone){
                case 1:
                    startDraw.cardDisplay(RandomizedCard1, packChoice);
                    break;
                case 2:
                    startDraw.cardDisplay(RandomizedCard2, packChoice);
                    break;
                case 0:
                    break;
            }
            break;
        case 2:
            startDraw.packOpeningStart();
            RandomizedCard1 = startDraw.Gamble(4);
            specialtyPackEvaluate = 1;
            startDraw.specialCardDraw(RandomizedCard1, 0, specialtyPackEvaluate, packChoice);
            startDraw.cardDraw(RandomizedCard1, 0, packChoice);
            choiceDone = startDraw.drawPrompter(packChoice);
            switch (choiceDone){
                case 1:
                    startDraw.cardDisplay(RandomizedCard1, packChoice);
                    break;
               case 0:
                    break;
            }
            break;
        case 3:
            startDraw.packOpeningStart();
            RandomizedCard1 = startDraw.Gamble(6);
            specialtyPackEvaluate = 1;
            startDraw.specialCardDraw(RandomizedCard1, 0, specialtyPackEvaluate, packChoice);
            startDraw.cardDraw(RandomizedCard1, 0, packChoice);
            choiceDone = startDraw.drawPrompter(packChoice);
            switch (choiceDone){
                case 1:
                    startDraw.cardDisplay(RandomizedCard1, packChoice);
                    break;
               case 0:
                    break;
            }
            break;
        case 4:
            startDraw.packOpeningStart();
            RandomizedCard1 = startDraw.Gamble(11);
            specialtyPackEvaluate = 1;
            startDraw.specialCardDraw(RandomizedCard1, 0, specialtyPackEvaluate, packChoice);
            startDraw.cardDraw(RandomizedCard1, 0, packChoice);
            choiceDone = startDraw.drawPrompter(packChoice);
            switch (choiceDone){
                case 1:
                    startDraw.cardDisplay(RandomizedCard1, packChoice);
                    break;
               case 0:
                    break;
            }
            break;
        case 0:
            break;
    }
    
}