typedef struct NodoL {
	Elem dato;
	struct NodoL *sig;
}*Lista;
Lista vacia(){
	return NULL;
}
Lista cons(Elem e, Lista l){
	Lista temp=(Lista)malloc(sizeof(struct NodoL));
	temp->dato=e;
	temp->sig=l;
	return temp;
}
int esvacia(Lista l){ 
	return l==NULL;
}
Elem cabeza(Lista l){
	return l->dato;
}
Lista resto(Lista l){
	return l->sig;
}
void ImpLista(Lista l){
	if (!esvacia(l)){
		ImpElem(cabeza(l));
		ImpLista(resto(l));
	}
}
int NumElem(Lista l){
	if (esvacia(l)){
		return NULL;
	}else{
		return 1+NumElem(resto(l));
	}
}
Lista UnirLista(Lista l1, Lista l2){
	if (esvacia(l1)){
		return l2;
	}else{
		return cons(cabeza(l1),UnirLista(resto(l1),l2));
	}
}
Lista InvertirLista(Lista l){
	if (esvacia(l)){
		return l;
	}else{
		return UnirLista(InvertirLista(resto(l)),cons(cabeza(l),vacia()));
	}
}