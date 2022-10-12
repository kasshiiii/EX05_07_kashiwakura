#include "getVolumeSurface.h"

void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}

bool isSendable(BOX* box) {
	double criterionPackSize[8] = { 60,80,100,120,140,160,180,200 };
	double baggageSize = box->x + box->y + box->z;
	for (int i = 0; i < sizeof(criterionPackSize) / sizeof(criterionPackSize[0]); i++) {
		if (baggageSize <= criterionPackSize[i]) {
			box->packSize = criterionPackSize[i];
			return true;
		}
	}
	return false;
}