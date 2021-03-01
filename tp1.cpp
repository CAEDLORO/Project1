//Carlos Lozano
#include <iostream>
#include "animal.h"
#include "tigre.h"
#include "singe.h"
#include "rhinoceros.h"

int main()
{
    int a; //Variable switch
    int x; //Option Sortir Oui ou Non
    std::string nomT, nomS, nomR;
    float poidT, poidS, poidR;
    int autres = -1; //Variable: Autres détails entrés "Enclos"
    Animal* animaux [250]; //Tableau de pointeurs 250 animaux,
    Tigre* tigre; // Creation de tigre avec pointeur
    Singe* singe; // Creation de singe avec pointeur
    Rhinocero* rhinocero; // Creation de rhinocero avec pointeur
    int i = 0; //Variable i initialisée à 0 pour le tableau animaux
    Animal* animal_actuel; // Variables pour parcourrir la table dans ses positions ou itérations
    Tigre* tigre_actuel; // Variable  pour assurer la position du tigre dans le tableau
    Singe* singe_actuel; // Variable pour assurer la position du singe dans le tableau
    Rhinocero* rhinocero_actuel; // Variable pour assurer la position du rhinocero dans le tableau
    Diete diete_actuel; // Variable pour assurer la diete de chaque animal (éviter la somme de l’animal précédent)
    Diete diete_total; 

    //Menu

    do {
        std::cout << "************* MENU ZOO *************" << std::endl;
        std::cout << "1- Ajouter un tigre" << std::endl;
        std::cout << "2- Ajouter un singe" << std::endl;
        std::cout << "3- Ajouter un rhinocéro" << std::endl;
        std::cout << "4- Afficher un compte-rendu du parc" << std::endl;
        std::cout << "5- Quitter" << std::endl;
        std::cout << "Choisissez quelques unes des 5 options" << std::endl;
        std::cin >> a;

        switch (a)
        {
        default:
        case 1:
            std::cout << "nom du tigre (sans espaces)" << std::endl;
            std::cin >> nomT;
            std::cout << "Poid du tigre" << std::endl;
            std::cin >> poidT;
            tigre = new Tigre(nomT, poidT, autres);
            animaux[i] = (Animal*) tigre;
            i++;
            break;
        case 2:
            std::cout << "nom du singe (sans espaces)" << std::endl;
            std::cin >> nomS;
            std::cout << "Poid du singe" << std::endl;
            std::cin >> poidS;
            std::cout << "Enclos (1 avec herbe) ou (0 sans herbe)" << std::endl;
            std::cin >> autres;
            singe = new Singe(nomS, poidS, autres);
            animaux[i] = (Animal*)singe;
            i++;
            break;
        case 3:
            std::cout << "nom du rhinocéro (sans espaces)" << std::endl;
            std::cin >> nomR;
            std::cout << "Poid du rhinocéro" << std::endl;
            std::cin >> poidR;
            std::cout << "Enclos mètres carrés" << std::endl;
            std::cin >> autres;
            rhinocero = new Rhinocero(nomR, poidR, autres);
            animaux[i] = (Animal*)rhinocero;
            i++;
            break;
        case 4:
            std::cout << "***** COMPTE-RENDU ZOO *****" << std::endl;
            for (int j = 0; j < i; j++) {
                animal_actuel = animaux[j];
                if (animal_actuel->getAutres() == -1) {
                    tigre_actuel = (Tigre*)animal_actuel;
                    diete_actuel = tigre_actuel->calculerDiete();
                    diete_total.setViande(diete_total.getViande() + diete_actuel.getViande());
                    std::cout << "Tigre : " << tigre_actuel->getNom() << " (" << tigre_actuel->getPoid() << " Kg)\n" << "Mange " <<
                        diete_total.getViande() << " Kg" << " de viande par jour" << std::endl;
                    std::cout << "Mange " << diete_actuel.getFruit() << " Kg" << " de fruits par jour" << std::endl;
                    std::cout << "Mange " << diete_actuel.getHerbe() << " Kg" << " de herbe par jour" << std::endl;
                }
                else if (animal_actuel->getAutres() == 1 || animal_actuel->getAutres() == 0) {
                    singe_actuel = (Singe*)animal_actuel;
                    diete_actuel = singe_actuel->calculerDiete();
                    diete_total.setViande(diete_total.getViande() + diete_actuel.getViande());
                    diete_total.setFruit(diete_total.getFruit() + diete_actuel.getFruit());
                    diete_total.setHerbe(diete_total.getHerbe() + diete_actuel.getHerbe());
                
                        std::cout << "Singe : " << singe_actuel->getNom() << " (" << singe_actuel->getPoid() << " Kg)\n" << "Enclos avec herbe" << "\n" << "Mange " <<
                            diete_actuel.getViande() << " Kg" << " de viande par jour" << std::endl;
                        std::cout << "Mange " << diete_actuel.getFruit() << " Kg" << " de fruits par jour" << std::endl;
                        std::cout << "Mange " << diete_actuel.getHerbe() << " Kg" << " de herbe par jour" << std::endl;
                    
                        if (autres == 0) {
                            std::cout << "Singe : " << singe_actuel->getNom() << " (" << singe_actuel->getPoid() << " Kg)\n" << "Enclos sans herbe" << "\n" << "Mange " <<
                                diete_actuel.getViande() << " Kg" << " de viande par jour" << std::endl;
                            std::cout << "Mange " << diete_actuel.getFruit() << " Kg" << " de fruits par jour" << std::endl;
                            std::cout << "Mange " << diete_actuel.getHerbe() << " Kg" << " de herbe par jour" << std::endl;
                        };
                }
                else {
                    rhinocero_actuel = (Rhinocero*)animal_actuel;
                    diete_actuel = rhinocero_actuel->calculerDiete();
                    diete_total.setViande(diete_total.getViande() + diete_actuel.getViande());
                    diete_total.setFruit(diete_total.getFruit() + diete_actuel.getFruit());
                    diete_total.setHerbe(diete_total.getHerbe() + diete_actuel.getHerbe());
                    std::cout << "Rhinocero : " << rhinocero_actuel->getNom() << " (" << rhinocero_actuel->getPoid() << " Kg)\n" << "Enclos de " << rhinocero_actuel->getAutres() << " metres-carres" << "\n" << "Mange " <<
                        diete_actuel.getViande() << " Kg" << " de viande par jour" << std::endl;
                    std::cout << "Mange " << diete_actuel.getFruit() << " Kg" << " de fruits par jour" << std::endl;
                    std::cout << "Mange " << diete_actuel.getHerbe() << " Kg" << " de herbe par jour" << std::endl;
                };
            }
            std::cout << "Diete quotidienne totale : \n" << "Viande : " << diete_total.getViande() << " Kg" << std::endl;
            std::cout << "Fruits : " << diete_total.getFruit() << " Kg" << std::endl;
            std::cout << "Herbe  : " << diete_total.getHerbe() << " Kg" << std::endl;
            break;
        case 5:
            std::cout << "Vous voulez sortir? Oui ou Non " << std::endl;
            std::cout << "\n Entrez 1 pour Oui";
            std::cout << "\n Entrez 2 pour Non" << std::endl;
            std::cin >> x;
            if (x == 1 || x != 2) {
                std::cout << "Merci, au revoir" << std::endl;
                return 0;
            }
            else {
                return main();
            }
            break;
        }
    } while (a != 5); 

    delete[] animaux; //Les animaux doivent aussi être détruites dynamiquement avant la fin du programme.
}

