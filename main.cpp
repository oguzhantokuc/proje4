#include "Game.h"

int main(){
  
    Player fenerbahce[3]={{"Oguzhan","FB",40},{"Asim","FB",50},{"Serkan","FB",50}};
    Player galatasaray[3]={{"Oguzhan","GS",40},{"Asim","GS",50},{"Serkan","GS",50}};

    Team takim1("Fenerbahce",fenerbahce,3);
    Team takim2("Galatasaray",galatasaray,3);
    
    Team takimlar[2]={takim1,{"Galatasaray",galatasaray,3}};
    takimlar[0].print();
	
    
    return 0;
}
