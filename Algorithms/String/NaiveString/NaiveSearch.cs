using System; 

class GFG { 

	public static void search(String txt, String pat) 
	{ 
		int M = pat.Length; 
		int N = txt.Length; 

		/* A loop to slide pat one by one */
		for (int i = 0; i <= N - M; i++) { 
			int j; 

			/* For current index i, check for pattern 
			match */
			for (j = 0; j < M; j++) 
				if (txt[i + j] != pat[j]) 
					break; 

			// if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
			if (j == M) 
				Console.WriteLine("Pattern found at index " + i); 
		} 
	} 

	// Driver code 
	public static void Main() 
	{ 
		String txt = "AABAACAADAABAAABAA"; 
		String pat = "AABA"; 
		search(txt, pat); 
	} 
} 