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
	    void imprimirNivel(int nivel);
	
	private:
	    NoArv* raiz;
	    void imprimirNivel(NoArv* p, int nivel);
	    
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

void ArvBin::imprimirNivel(int nivel) {
	
    imprimirNivel(raiz, nivel);
    
}

void ArvBin::imprimirNivel(NoArv* p, int nivel) {
	
    if (p == NULL){
	
        return;
        
	}
    std::queue<std::pair<NoArv*, int> > fila;
    fila.push(std::make_pair(p, 0));

    while (!fila.empty()) {
    	
        std::pair<NoArv*, int> par = fila.front();
        fila.pop();

        NoArv* no = par.first;
        int nivel_atual = par.second;

        if (nivel_atual == nivel) {
        	
            std::cout << no->getInfo() << " ";
            
        }

        if (no->getEsq() != NULL){
		
            fila.push(std::make_pair(no->getEsq(), nivel_atual + 1));
            
    	}

        if (no->getDir() != NULL){
		
            fila.push(std::make_pair(no->getDir(), nivel_atual + 1));
            
    	}
    }
    
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

    std::cout << "Os valores do nivel K: ";
    minhaArvore.imprimirNivel(2);
    std::cout << std::endl;

    return 0;
}

