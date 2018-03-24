#include <bits/stdc++.h>
using namespace std;
/*Trie
Estrutura de dados que guarda strings, guarda palavras em forma de árvore, aproveitando quando os prefixos são iguais. */

int trien, tries[N], trie[N][26]; //N é a soma de todos os caracteres de todas as palavras, é o máximo possível. a matriz é a árvore em si

int addtrie(int u, char c){
	c-='a';
	if(trie[u][c]) return trie[u][c];
	return trie[u][c]= ++trien; //trien é a contagem, o nó que eu estou agora. primeiro incrementa, dps adiciona o numero do nó na matriz
}

void add(char *s){
	int u=0;
	for(int i;s[i];i++){
		u=addtrie(u,s[i]);
	}
	tries[u]++; //numero de vezes que a palavra foi adicionada à trie. o nó guarda essa contagem. 
}

int query(char *s){  //consulta de quantas vezes a palavra aparece
	int u=0; //nó começa no zero
	for(int i=0;s[i];i++){
		if(!trie[u][s[i]]) return 0; //se estiver um zero ali, é pq a palavra não existe
		u=trie[u][s[i]]; // faz o nó percorrer a trie. sem isso vc ficaria parado no mesmo nó sempre. u atualiza pro próximo nó
	}
	return tries[u];
}

/*matriz: as arestas sao as letras e os nós sao as palavras formadas. cada linha da matriz é um nó: o numero que aparece na 
linha i e coluna j significa: o nó i liga a letra j ao nó seguinte (que é trie[i][j]). as colunas sao as 26 letras do alfabeto