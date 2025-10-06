#include <iostream>

void EntierPairs()
{
	int n = 0;
	std::cout << "n ?" << std::endl;
	std::cin >> n;
	std::cout << "Nombres pairs :";
	for (int i = 0; i < n; i += 2)
	{
		std::cout << " " << i;
	}
	std::cout << std::endl;
}
void Boutique()
{
	int nb_articles;
	int prix_total_brut = 0;
	std::cout << "Combien d'articles ?" << std::endl;
	std::cin >> nb_articles;
	for (int i = 0; i < nb_articles; i++)
	{
		float price;
		std::cout << "Prix de l'article " << i + 1 << " ?" << std::endl;
		std::cin >> price;
		int quantity;
		std::cout << "Quantite de l'article " << i + 1 << " ?" << std::endl;
		std::cin >> quantity;
		prix_total_brut += price * quantity;
	}
	int premium;
	std::cout << "Premium ?" << std::endl;
	std::cin >> premium;
	if (premium == 1 && prix_total_brut >= 50)
	{
		prix_total_brut *= 0.9;
		std::cout << "Prix total a payer : " << prix_total_brut << std::endl;
	}
	else if (prix_total_brut >= 100)
	{
		prix_total_brut *= 0.9;
		std::cout << "Prix total a payer : " << prix_total_brut << std::endl;
	}
}
void DistributeurBillet()
{
	int retrait;
	int billets_500 = 0;
	int billets_100 = 0;
	int billets_50 = 0;
	int billets_20 = 0;
	int billets_10 = 0;
	std::cout << "Montant du retrait ?" << std::endl;
	std::cin >> retrait;
	while (retrait > 0)
	{
		if (retrait >= 500)
		{
			retrait -= 500;
			billets_500++;
		}
		else if (retrait >= 100)
		{
			retrait -= 100;
			billets_100++;
		}
		else if (retrait >= 50)
		{
			retrait -= 50;
			billets_50++;
		}
		else if (retrait >= 20)
		{
			retrait -= 20;
			billets_20++;
		}
		else if (retrait >= 10)
		{
			retrait -= 10;
			billets_10++;
		}
		else
		{
			break;
		}
	}
	int nb_types = 0;
	if (billets_500 > 0) nb_types++;
	if (billets_100 > 0) nb_types++;
	if (billets_50 > 0) nb_types++;
	if (billets_20 > 0) nb_types++;
	if (billets_10 > 0) nb_types++;

	std::cout << "Voici ";
	int type_courant = 0;
	if (billets_500 > 0) {
		type_courant++;
		std::cout << billets_500 << " billet" << (billets_500 > 1 ? "s" : "") << " de 500e";
		if (type_courant < nb_types - 1) std::cout << ", ";
		else if (type_courant == nb_types - 1) std::cout << " et ";
	}
	if (billets_100 > 0) {
		type_courant++;
		std::cout << billets_100 << " billet" << (billets_100 > 1 ? "s" : "") << " de 100e";
		if (type_courant < nb_types - 1) std::cout << ", ";
		else if (type_courant == nb_types - 1) std::cout << " et ";
	}
	if (billets_50 > 0) {
		type_courant++;
		std::cout << billets_50 << " billet" << (billets_50 > 1 ? "s" : "") << " de 50e";
		if (type_courant < nb_types - 1) std::cout << ", ";
		else if (type_courant == nb_types - 1) std::cout << " et ";
	}
	if (billets_20 > 0) {
		type_courant++;
		std::cout << billets_20 << " billet" << (billets_20 > 1 ? "s" : "") << " de 20e";
		if (type_courant < nb_types - 1) std::cout << ", ";
		else if (type_courant == nb_types - 1) std::cout << " et ";
	}
	if (billets_10 > 0) {
		type_courant++;
		std::cout << billets_10 << " billet" << (billets_10 > 1 ? "s" : "") << " de 10e";
	}
	std::cout << "." << std::endl;
}
void ConnexionSecurisee()
{
	int test = 0;
	std::cout << "Definir le code secret ? " << std::endl;
	int code;
	std::cin >> code;
	while (test != code)
	{
		std::cout << "Saisir le code ? " << std::endl;
		std::cin >> test;
	}
	std::cout << "Connexion reussie" << std::endl;
}
int main()
{
	EntierPairs();
	Boutique();
	DistributeurBillet();
	ConnexionSecurisee();
	return 0;
}