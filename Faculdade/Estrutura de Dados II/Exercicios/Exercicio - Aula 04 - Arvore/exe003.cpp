#include <iostream>

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
	    int gerRaiz() { return (raiz != NULL) ? raiz->getInfo() : -1; }
	    void cria(int x, ArvBin* sae, ArvBin* sad);
	    void montaArvore();
	    void insere(int x);
	    bool vazia() { return raiz == NULL; }
	    void preOrdem();
	    int contaNos();
	    int contaNosFolhas();
	    int altura();
	
	private:
	    NoArv* raiz;
	    NoArv* libera(NoArv* p);
	    NoArv* auxMontaArvore();
	    NoArv* auxInsere(NoArv* p, int x);
	    void auxPreOrdem(NoArv* p);
	    int contaNos(NoArv* p);
	    int contaNosFolhas(NoArv* p);
	    int altura(NoArv* p);
	    
};

int ArvBin::contaNos() {
	
    return contaNos(raiz);
    
}

int ArvBin::contaNos(NoArv* p) {
	
    if (p == NULL){
	
        return 0;
	}

    else{
	
        return 1 + contaNos(p->getEsq()) + contaNos(p->getDir());
        
	}
	
}

int ArvBin::contaNosFolhas() {
	
    return contaNosFolhas(raiz);
    
}

int ArvBin::altura() {
	
    return altura(raiz);
    
}

void ArvBin::insere(int x) {
	
    if (raiz == NULL) {
    	
        raiz = new NoArv();
        raiz->setInfo(x);
        
    }
	 
	else {
    	
        NoArv* atual = raiz;
        NoArv* anterior = NULL;

        while (atual != NULL) {
        	
            anterior = atual;
            
            if (x < atual->getInfo()) {
            	
                atual = atual->getEsq();
                
            } 
            
			else {
				
                atual = atual->getDir();
                
            }
            
        }

        if (x < anterior->getInfo()) {
            anterior->setEsq(new NoArv());
            anterior->getEsq()->setInfo(x);
       
	    } 
		
		else {
        
		    anterior->setDir(new NoArv());
            anterior->getDir()->setInfo(x);
        
		}
		
    }
    
}

int ArvBin::contaNosFolhas(NoArv* p) {
	
    if (p == NULL) {
    	
        return 0;
        
    } 
    
	else if (p->getEsq() == NULL && p->getDir() == NULL) {
		
        return 1;
        
    } 
    
	else {
		
        return contaNosFolhas(p->getEsq()) + contaNosFolhas(p->getDir());
        
    }
    
}

int ArvBin::altura(NoArv* p) {
	
    if (p == NULL) {

        return -1;
        
    } 
    
	else {

        int altura_esq = altura(p->getEsq());
        int altura_dir = altura(p->getDir());

        return 1 + std::max(altura_esq, altura_dir);
        
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

    std::cout << "O numero de nos eh: " << minhaArvore.contaNos() << std::endl;
    std::cout << "O numero de folhas eh: " << minhaArvore.contaNosFolhas() << std::endl;
    std::cout << "A arvore tem uma altura de: " << minhaArvore.altura() << std::endl;
	return 0;
	
}
