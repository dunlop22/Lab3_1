#pragma once
class Obchee
{
    char name[20];
    char tip_privoda[20];
    char tip_topliva[20];
    double massa;
    double obem_benzobaka;
    double kolvo_mest;
    double razgon_do_100;
public:
    Obchee();
    void new_obchee_info();
    void new_obchee(double kolvo_mest, double massa, char name[20], double razgon_do_100, char tip_privoda[20], char tip_topliva[20], double obem_benzobaka);
    void prosmotr_obchee();
    void obchee_name();
};

