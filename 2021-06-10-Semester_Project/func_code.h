//void line1() {printf("\n");}
//void line2() { printf("\n\n"); }
//void line2() { printf("\n\n\n"); }


void line(int a) {
	if (a >= 1 && a <= 5) {
		switch (a) {
		case 1:
			printf("\n");
			break;
		case 2:
			printf("\n\n");
			break;
		case 3:
			printf("\n\n\n");
			break;
		case 4:
			printf("\n\n\n\n");
			break;
		case 5:
			printf("\n\n\n\n\n");
			break;
		}
	}

	else printf("\n--------------------\n");

}

