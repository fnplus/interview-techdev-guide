Given a directed graph find the strongly connected components (SCC).

static final int MAX = 100005; //Maximum amount of nodes
static ArrayList<Integer> g[] = new ArrayList[MAX]; //Adjacency list
static boolean[] vis = new boolean[MAX]; //Check the visited nodes
static Stack<Integer> st = new Stack();   
static int[] low = new int[MAX];
static int[] num = new int[MAX];
static int compOf[] = new int[MAX]; //Stores the component to which each node belongs
static int cantSCC; //Amount of strongly connected components
static int N, M, cont; //Amount of nodes and edges

static void tarjan(int u) {
    low[u] = num[u] = cont++;
    st.push(u);
    vis[u] = true;
    
    for (int v : g[u]) {
        if (num[v] == -1)
            tarjan(v);
        if (vis[v])
            low[u] = Math.min(low[u], low[v]);
    }
    
    if (low[u] == num[u]) {
        while (true) {
            int v = st.pop();
            vis[v] = false;
            compOf[v] = cantSCC;
            if (u == v) break;
        }
        cantSCC++;
    }
}

static void init() {
    cont = cantSCC = 0;
    for (int i = 0; i <= N; i++) {
        g[i].clear();
        num[i] = -1;
    }
}