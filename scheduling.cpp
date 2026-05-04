#include <iostream>
#include <fstream>

using namespace std;

  ifstream file("input.txt");
    
    if(!file.is_open()){
    	cout << "Errore lettura file " << endl;
    	return 1;
	}

     int N;
     inputFile>>N;
    
     int* I=new int [N];
     int* D=new int [N];
     int* P=new int [N];

     
     for(int i=0;i<N;i++)
        inputFile>> I[i] >> D[i] >> P[i];

     inputFile.close();


     
     for(int i=0; i<N-1;i++){
        for(int j=0;i<N - 1;j++){
            if(P[j]<P[j+1]|| P[j]==P[j+1]&& D[j]>D[j+1])
            swap(I[j], I[j+1]);
            swap(P[j], P[j+1]);
            swap(D[j], D[j+1]);
           
        }  
        
     }    
    
        
        
        for (int i = 1; i <= 10; i++) {
           << "Riga numero: " << i << endl;
        }

       
        mioFile.close();
        cout << "Ciclo completato e file salvato." << endl;
        
    } else {
        cout << "Errore apertura file." << endl;
    }

    return 0;
}
     ofstream fileOutput("output.txt");
     fileOutput<<"Ordine di esecuzione dei processi:";

