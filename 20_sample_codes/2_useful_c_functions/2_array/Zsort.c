/*
aşağıda prototipi verilen fonksiyonların içini yazınız ve örnek bir main fonksiyonunda çağırarak bu dosyaya pull-request değişiklik isteğinde bulununuz

*/

void Zsort(int D[],int n);
void Zsort(float D[],int n);
void Zsort(double D[],int n);
void Zsort(char D[]);

// son parametre 1 gelirse artan sırada, -1 gelirse azalan sırada sıralayınız
void Zsort(int D[],int n,int st);
void Zsort(float D[],int n,int st);
void Zsort(double D[],int n,int st);
void Zsort(char D[],int st);

void Zsort(char D[],int st)
{
	int i,j;
	char temp;
	
	int n = strlen(D); // Girilen kelimenin uzunluðu bulundu.
	
	/* Artan sýrada sýralama */	
	if(st == 1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if (D[i] > D[j]){
           		temp = D[i];
           		D[i] = D[j];
           		D[j] = temp;
				}	
			}
		}
	}	
	
		/* Azalan sýrada sýralama */	
		if(st == -1)
		{
			for(i=0; i<n-1; i++)
			{
				for(j=i+1; j<n; j++)
				{
					if (D[i] < D[j]){
           			temp = D[i];
           			D[i] = D[j];
           			D[j] = temp;
				}	
			}
		}
	}
	
	printf("Siralanmis kelime : %s ",D);
}

void Zsort(double D[],int n,int st)
{
	int i,j;
	double temp;

	/* Artan sırada sıralama */	
	if(st == 1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(D[j] > D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
	
	}
	
	/* Azalan sırada sıralama */
	if(st == -1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(D[j] < D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
		
	}
	
}

void Zsort(float D[],int n,int st)
{
	int i,j;
	float temp;

	/* Artan sırada sıralama */	
	if(st == 1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(D[j] > D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
	
	}
	
	/* Azalan sırada sıralama */
	if(st == -1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-1-i; j++)
			{
				if(D[j] < D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
		
	}
	
}


void Zsort(int D[],int n,int st)
{
	int i,j,temp;

	/* Artan sırada sıralama */	
	if(st == 1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(D[j] > D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
	
	}
	
	/* Azalan sırada sıralama */
	if(st == -1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(D[j] < D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
		
	}
	
}
