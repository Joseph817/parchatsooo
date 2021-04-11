#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shiftCipher(char* word, int shift);

int main(){
	
	int shift=0;
	char word[255];
	
	printf("Enter a word you want to encrypt: ");
	fgets(word, sizeof(word), stdin);
	
	printf("Enter number to shift: ");
	scanf("%d",&shift);

	printf("The Ciphered text is : ");
	shiftCipher(word, shift);
}

void shiftCipher(char* word, int shift){
	
	int i=0;
	int cipherValue=0;
	char cipher;
	
	while (word[i] != '\0' && strlen(word)-1 > i){
		cipherValue = ((int)word[i] -97 + shift) % 26 + 97;
		cipher = (char)(cipherValue);
		
		printf("%c", cipher);
		i++;
	}
}
