#include <iostream>
#include <queue>

class NoArv {
	
	public:
	    NoArv() : esq(NULL), info(0), dir(NULL) {}
	    ~NoArv() {}
	    void setEsq(NoArv* p) { esq = p; }
	    void setInfo(int val) { info = val; }
	    void setDir(NoArv* p) { dir = p; }
	    NoArv* getEsq() { return esq; }
	    int getInfo() { return info; }
	    NoArv* getDir() { return dir; }
	
	private:
	    NoArv* esq;
	    int info;
	    NoArv* dir;
    
};

class ArvBin {
	
	public:
	    ArvBin() : raiz(NULL) {}
	    ~ArvBin() {}
	    void insere(int x);
	    int encontrarMaior();
	    int encontrarMenor();
	
	private:
	    NoArv* raiz;
	    void encontrarMaiorRecursivo(NoArv* no, int& maior);
	    void encontrarMenorRecursivo(NoArv* no, int& menor);
    
};

void ArvBin::insere(int x) {
	
    if (raiz == NULL) {
    	
        raiz = new NoArv();
        raiz->setInfo(x);
        
    } 
	
	else {
		
        std::queue<NoArv*> fila;
        fila.push(raiz);

        while (!fila.empty()) {
        	
            NoArv* atual = fila.front();
            fila.pop();

            if (atual->getEsq() == NULL) {
            	
                atual->setEsq(new NoArv());
                atual->getEsq()->setInfo(x);
                break;
                
            } 
			
			else {
				
                fila.push(atual->getEsq());
                
            }

            if (atual->getDir() == NULL) {
            	
                atual->setDir(new NoArv());
                atual->getDir()->setInfo(x);
                break;
                
            } 
			
			else {
				
                fila.push(atual->getDir());
                
            }
            
        }
        
    }
    
}

int ArvBin::encontrarMaior() {
	
    int maior = INT_MIN;
    encontrarMaiorRecursivo(raiz, maior);
    return maior;
    
}

void ArvBin::encontrarMaiorRecursivo(NoArv* no, int& maior) {
	
    if (no == NULL){
	
        return;
    
	}

    if (no->getInfo() > maior){
	
        maior = no->getInfo();
    
	}

    encontrarMaiorRecursivo(no->getEsq(), maior);
    encontrarMaiorRecursivo(no->getDir(), maior);
    
}

int ArvBin::encontrarMenor() {
	
    int menor = INT_MAX; // Inicializamos com o maior valor possível
    encontrarMenorRecursivo(raiz, menor);
    return menor;
    
}

void ArvBin::encontrarMenorRecursivo(NoArv* no, int& menor) {
	
    if (no == NULL){
	
        return;
        
    }

    if (no->getInfo() < menor){ 
	
        menor = no->getInfo();
        
    }

    encontrarMenorRecursivo(no->getEsq(), menor);
    encontrarMenorRecursivo(no->getDir(), menor);
    
}

int main() {
	
    ArvBin minhaArvore;

    minhaArvore.insere(10);
    minhaArvore.insere(5);
    minhaArvore.insere(15);
    minhaArvore.insere(3);
    minhaArvore.insere(7);
    minhaArvore.insere(12);
    minhaArvore.insere(20);

    int maior = minhaArvore.encontrarMaior();
    int menor = minhaArvore.encontrarMenor();

    std::cout << "Maior valor na árvore: " << maior << std::endl;
    std::cout << "Menor valor na árvore: " << menor << std::endl;
    return 0;
    
}

