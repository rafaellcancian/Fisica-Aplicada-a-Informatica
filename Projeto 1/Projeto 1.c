#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float q1=0.0000000012,q2=0.0000000024,q3=0.0000000031,q4=0.0000000017,k=9000000000,r=0.0092,v,Camp1,Camp2,Camp3,Camp4,d=0.013,rad,V1[2],V2[2],V3[2],V4[2],VR[2];

// Inicial
	printf("Cargas:\nQ1: %.10f\nQ2: %.10f\nQ3: %.10f\nQ4: %.10f\n\n", q1,q2,q3,q4);
	printf("Distancia: %.4f\n\n", r);
	
	v = (k * (q1 - q2 + q3 + q4)) / r;
    	printf("O potencial eletrico no ponto P e: %.2f\n\n", v);
	
// Campo
    Camp1 = (k * q1) / (d * d);
		printf("Campo eletrico 1: %.2f\n", Camp1);

    Camp2 = (k * q2) / (d * d);
		printf("Campo eletrico 2: %.2f\n", Camp2);

    Camp3 = (k * q3) / (d * d);
		printf("Campo eletrico 3: %.2f\n", Camp3);

    Camp4 = (k * q4) / (d * d);
		printf("Campo eletrico 4: %.2f\n\n", Camp4);
		
// Vetores
    rad = ((M_PI / 180) * 45);
    cos(rad);
    sin(rad);

    V1[0] = Camp1 * cos(rad);
    V1[1] = -(Camp1) * sin(rad);
		printf("Vetor 1 (Cos): %.2f\nVetor 1 (Sen): %.2f\n\n", V1[0],V1[1]);
		
    V2[0] = Camp2 * cos(rad);
    V2[1] = Camp2 * sin(rad);
		printf("Vetor 2 (Cos): %.2f\nVetor 2 (Sen): %.2f\n\n", V2[0],V2[1]);
		
    V3[0] = Camp3 * cos(rad);
    V3[1] = Camp3 * sin(rad);
		printf("Vetor 3 (Cos): %.2f\nVetor 3 (Sen): %.2f\n\n", V3[0],V3[1]);
		
    V4[0] = -(Camp4) * cos(rad);
    V4[1] = Camp4 * sin(rad);
		printf("Vetor 4 (Cos): %.2f\nVetor 4 (Sen): %.2f\n\n", V4[0],V4[1]);
	 
    VR[0] = V1[0] + V2[0] + V3[0] + V4[0];

    VR[1] = V1[1] + V2[1] + V3[1] + V4[1];

    printf("Vetor resultante (Cos): %.2f\nVetor resultante (Sen): %.2f\n\n", VR[0],VR[1]);

	return 0;
}
