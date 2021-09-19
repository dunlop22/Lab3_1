#include "Avto.h"

Avto::Avto()
{
	Korobka::Korobka();
}


void Avto::new_avto(Motor har2_1, Obchee har1_1, Korobka har4_1, Koleso har3_1, Voditel vod_1)
{
    har1 = har1_1;
    har2 = har2_1;
    har3 = har3_1;
    har4 = har4_1;
        
 //   vod = vod_1;
}

void Avto::vod_avto(Voditel vod_1)
{
    vod = vod_1;
}

void Avto::prosmotr_avto()
{
    
     //Avto::vod.prosmotr_voditel();
    Avto::har1.prosmotr_obchee();
    Avto::har2.prosmotr_motor();
    Avto::har3.prosmotr_koleso();
    Avto::har4.prosmotr_korobka_peredach();
}

/*
void avto_otv(avto* avtomobil)
{
    if (avtomobil->har2.koni >= 0)
    {
        avtomobil->vod = NULL;
    }
    else
    {
        cout << "Информация об автомобиле не найдена.";
    }
}


*/