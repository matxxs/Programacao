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
	    void inverter();
	    void imprimirArvoreInvertida();
	
	private:
	    NoArv* raiz;
	    void inverterRecursivo(NoArv* no);
	    void imprimirEmOrdem(NoArv* no);
    
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

void ArvBin::inverter() {
	
    inverterRecursivo(raiz);
    
}

void ArvBin::inverterRecursivo(NoArv* no) {
	
    if (no == NULL){
	
        return;
        
	}
	
    if (no->getEsq() != NULL && no->getDir() != NULL) {
    	
        NoArv* temp = no->getEsq();
        no->setEsq(no->getDir());
        no->setDir(temp);
        
    }

    inverterRecursivo(no->getEsq());
    inverterRecursivo(no->getDir());
    
}

void ArvBin::imprimirArvoreInvertida() {
	
    std::cout << "A Arvore invetida fica da seguinte forma:" << std::endl;
    imprimirEmOrdem(raiz);
    std::cout << std::endl;
    
}

void ArvBin::imprimirEmOrdem(NoArv* no) {
	
    if (no == NULL){
	
        return;
        
	}
	
    imprimirEmOrdem(no->getEsq());
    std::cout << no->getInfo() << " ";
    imprimirEmOrdem(no->getDir());
    
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
    minhaArvore.inverter();
    
    minhaArvore.imprimirArvoreInvertida();
    return 0;
    
}

