
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

}