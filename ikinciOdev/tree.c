#include <stdio.h>
#include <stdlib.h>

/* Agaçtaki Kök degeri alt 
dügümlerin toplami mi?. Açiklama : Size tam olarak 3 dügümden olusan ikili bir agacin kökü verildiginde, bu 
degerin alt dügümlerin(child) toplami olup olmadigini bulun */


struct node {
	// tree yi tanimladik.
	int data;	//veri bilgisini tanimladim			
	struct node *left; // sol child' i gösteren pointer
	struct node *right; //sag child'i gösteren pointer
	
};

int main(int argc, char *argv[]) {
	
	
	printf("Hazirlayan: Eda Nur Ergin - 1220505032\n\n");
	printf("--------------\n");
	
	struct node *tree;
	tree = (struct node*)malloc(sizeof(struct node));               // tree için hafiza yer olusturduk.
	tree->left = (struct node*)malloc(sizeof(struct node));		   // tree nin sol childi için hafiza yer olusturduk
	tree->right = (struct node*)malloc(sizeof(struct node));      // tree nin sag childi için hafiza yer olusturduk
	
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
