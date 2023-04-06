#include <stdio.h>
#include <stdlib.h>

/* Aga�taki K�k degeri alt 
d�g�mlerin toplami mi?. A�iklama : Size tam olarak 3 d�g�mden olusan ikili bir agacin k�k� verildiginde, bu 
degerin alt d�g�mlerin(child) toplami olup olmadigini bulun */


struct node {
	// tree yi tanimladik.
	int data;	//veri bilgisini tanimladim			
	struct node *left; // sol child' i g�steren pointer
	struct node *right; //sag child'i g�steren pointer
	
};

int main(int argc, char *argv[]) {
	
	
	printf("Hazirlayan: Eda Nur Ergin - 1220505032\n\n");
	printf("--------------\n");
	
	struct node *tree;
	tree = (struct node*)malloc(sizeof(struct node));               // tree i�in hafiza yer olusturduk.
	tree->left = (struct node*)malloc(sizeof(struct node));		   // tree nin sol childi i�in hafiza yer olusturduk
	tree->right = (struct node*)malloc(sizeof(struct node));      // tree nin sag childi i�in hafiza yer olusturduk
	
	printf("kok degerini giriniz:"); 
	scanf("%d",&tree->data); //kullanicidan kok degerini aldik
	printf("\nsol child in degerini giriniz:");
	scanf("%d",&tree->left->data); //kullanicidan sol child degerini aldik
	printf("\nsag child in degerini giriniz:");
	scanf("%d",&tree->right->data); //kullanicidan sag child degerini aldik
	printf("\n");
	
	int toplam;
	toplam = (tree->left->data + tree->right->data);  //sol ve sag cocuk toplamini tanimladik.
	
	if(tree->data == toplam){ //kok toplaminin sag ve sol cocuk toplamina esit olup olmadigini sorguladik.
		printf("sag ve sol cocuklarin toplami kokun degerine esittir.\n");
	}
	else{
		printf("sag ve sol cocuklarin toplami kokun degerine esit degildir.\n");
	}
	
	return 0;
}
