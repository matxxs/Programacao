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
	    int valorMaisAEsquerda();
	    int valorMaisADireita();
	
	private:
	    NoArv* raiz;
	    int encontrarMaisAEsquerda(NoArv* no);
	    int encontrarMaisADireita(NoArv* no);
	    
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

int ArvBin::valorMaisAEsquerda() {
	
    return encontrarMaisAEsquerda(raiz);
    
}

int ArvBin::encontrarMaisAEsquerda(NoArv* no) {
	
    while (no->getEsq() != NULL) {
    	
        no = no->getEsq();
        
    }
    
    return no->getInfo();
    
}

int ArvBin::valorMaisADireita() {
	
    return encontrarMaisADireita(raiz);
    
}

int ArvBin::encontrarMaisADireita(NoArv* no) {
	
    while (no->getDir() != NULL) {
    	
        no = no->getDir();
        
    }
    
    return no->getInfo();
    
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

    std::cout << "Esquerda da arvore: " << minhaArvore.valorMaisAEsquerda() << std::endl;
    std::cout << "Direita da arvore: " << minhaArvore.valorMaisADireita() << std::endl;
    return 0;
    
}

