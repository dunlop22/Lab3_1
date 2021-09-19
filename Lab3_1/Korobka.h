#pragma once
class Korobka
{
	char tip_korobki[20];
	double kolvo_peredach;
public:
	Korobka();
	void new_korobka_info();
	void new_korobka_peredach(double kolvo_peredach, char tip_korobki[20]);
	void prosmotr_korobka_peredach();
	void korobka_peredach_peredacha_plus();
};

