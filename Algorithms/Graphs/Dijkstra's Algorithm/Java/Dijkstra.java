
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package road;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;


/**
 *
 * @author Mahfoud
 */
public class Dijkstra {

static int countComplex = 0;




public int selectionner(ArrayList<String> Sprime, int[] phi) {
		// indice à retourner
		int index = 0;

		// Ajouter cout sommet qui se trouve dans phi en ce bason sur S prime
		ArrayList<Integer> tabMinComparer = new ArrayList<>();

		for (int i = 0; i < Sprime.size(); i++) {

			tabMinComparer.add(phi[Integer.valueOf(Sprime.get(i)) - 1]);
			countComplex++;
		}

		// Trier par order croissant
		Collections.sort(tabMinComparer);

		// Indice du sommet dans phi
		for (int i = 0; i < phi.length; i++) {
			if (phi[i] == tabMinComparer.get(0)) {
				index = i;
				break;
			}
			countComplex++;
		}



public static void main(String[] args) {
	
	    System.out.print("Dijikstra");
		Scanner scan = new Scanner(System.in);

		ArrayList<String> S_prime = new ArrayList<>();
		ArrayList<String> S = new ArrayList<>();

		int[] phi;
		int nbSommet;

		int[][] matriceIncidence;
		int[][] poidArc;

		System.out.print("\n Entrer Nombre de sommet :");
		nbSommet = scan.nextInt();

		phi = new int[nbSommet];

		matriceIncidence = new int[nbSommet][nbSommet];
		poidArc = new int[nbSommet][nbSommet];

        S.add("1");
		phi[0] = 0;

		for (int i = 0; i < nbSommet; i++) {

			for (int j = 0; j < nbSommet; j++) {
				System.out.print("\n Sommet " + (i + 1) + " est  Successeur de " + (j + 1));

				// Inserer 1 si exitse succ 0 sinon Matrice incidence sommet sommet
				matriceIncidence[i][j] = scan.nextInt();

				if (matriceIncidence[i][j] == 1) { // Cout arc(i,j)
					System.out.print("\n Cout = ");

					poidArc[i][j] = scan.nextInt();

				} else { // Si ya pas d'arc cout 0 poidArc[i][j] = 0;

				}

				if (j != 0 && i == 0 && matriceIncidence[i][j] == 1) {

					// sommet successeur phi(succ)=Cout
					phi[j] = phi[0] + poidArc[i][j];
				} else {
					if (i == 0 && j != 0) {

						// ne sont pas des successeur dans infinig dans ce cas MAX ENTIER
						phi[j] = Integer.MAX_VALUE;
					}
				}
				countComplex++;
			}
			if (i != 0) {
				// Ajouter Tout sommet du graphe sauf le premier départ
				S_prime.add(String.valueOf(i + 1));
			}
			countComplex++;
		}

        Dijkstra dijkstra = new Dijkstra();

		while (S_prime.size() != 0) { // S prime vide Condition arret
            // selectionner sommet suivant indice dans ArrayList
			int IndexSommetSuiv = dijkstra.selectionner(S_prime, phi);

            // sommet suivant
			int SommetSuiv = Integer.valueOf(S_prime.get(IndexSommetSuiv)) - 1;

			// Ajouter Sommet sortant de S prime à S
			S.add(S_prime.get(IndexSommetSuiv));

            
			// S <- S -{j}
			S_prime.remove(IndexSommetSuiv);

			// Ajouter Successeur sommet suivant
			ArrayList<Integer> succSommetSuiv = new ArrayList<>();

            	for (int i = 0; i < matriceIncidence.length; i++) {

				// condition selection sommet suivant est qui apparteint à S prime
				if (matriceIncidence[SommetSuiv][i] == 1 && S_prime.contains(String.valueOf(i + 1))) {

					succSommetSuiv.add(i); // Ajouter successeur d'un sommet
				}
				countComplex++;
			}
			for (int i = 0; i < succSommetSuiv.size(); i++) {

				// phi(i) = min(phi(i),phi(j)+long(j,i)) i succSommet suivant j SommetSuiv
				// podArc Matrice contenant la longeur
				phi[succSommetSuiv.get(i)] = Math.min(phi[succSommetSuiv.get(i)],
						phi[SommetSuiv] + poidArc[SommetSuiv][succSommetSuiv.get(i)]);
				countComplex++;
			}
			countComplex++;
		}
	
		System.out.print("\n Complexite Dijkstra= " + countComplex);

        }
   }
}