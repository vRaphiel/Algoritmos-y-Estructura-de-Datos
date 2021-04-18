#include "sandia.h"

bool sandia(int porciones) {
	int i = 0;
	bool esPosible = false;
	while (i<porciones){
		if(i%2==0 && (porciones-i)%2 == 0){
			esPosible=true;
		}
		i++;
	}
	return esPosible;
	// Borrar el return dummy y completar
}
