/*! \ Fichier note.cpp
* \ Le fichier est le main, il va réaliser plusieurs fonctions : entrer des données avec nom et note d'un élève, rechercher la note d'un élève et enfin créer et écrire sur un fichier txt le nom et la note d'un élève. Le fichier note.cpp appelle plusieurs librairie avec des pouvoirs créer des strings, des tableaux, le fichier.txt ainsi que ce débarasser des lignes avec std.
* \ Auteur Rayhan
* \ Version 1
*/

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

/*! \ Main du fichier note.cpp
* \ Il permet d'entrer des données avec nom/note d'un élève, rechercher la note d'un élève et écrire sur un fichier.txt les données écrites.
* \ Etant donné qu'on entre seulement des données, le fichier note.cpp ne retourne aucune valeur hormis lorsqu'on chercher la note d'un élève.
*/

int main(){

string name;
string yesno;

vector <string> etudiants(5);
vector <int> note(5);

	ofstream sauvegarde_notes;
	sauvegarde_notes.open("notes.txt");
	for(int i=0; i<5; i++){
		cout<<"Taper le nom de l'élève"<<endl;
		cin>>etudiants[i];
		cout<<"Donner un notre à l'élève"<<endl;
		cin>>note[i];
		sauvegarde_notes<<etudiants[i]<<" note : "<<note[i]<<endl;
	}
	sauvegarde_notes.close();
	for(int i=0; i<etudiants.size(); i++){
		cout<<"étudiant"<<" "<<etudiants[i]<<" note : "<<" "<<note[i]<<endl;
	}
	cout<<"Recherche une note ?"<<endl;
	cin>>yesno;
	if(yesno == "non"){
		cout<<"Arrêt de la recherche !"<<endl;
		return 0;
//		break;
	}
	if(yesno == "oui"){
		cout<<"Taper le nom de l'étudiant rechercher : "<<endl;
		cin>>name;
		int i=0;
		if(name != etudiants[i]){
			cout<<"Eleve inexistant ! Arrêt de la recherche !"<<endl;
			return 0;
//			break;
		}
		else {
			for (int i=0; i<etudiants.size(); i++){
				if(name == etudiants[i]){
					cout<<"La note de l'étudiant "<<etudiants[i]<<" est "<<note[i]<<endl;
				}
			}
		}
	}
	return 0;
}

// Gerer la persistence des notes
//	ofstream fichier_notes;
//	fichier_notes_open("file.txt");
//	fichier_notes<<"ecrire texte"<<endl;
//	fichier_notes.close();
//	return 0;
