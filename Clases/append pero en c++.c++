class vec_int(){
    int *v;
    int sz;
    int cap;
    void grow(){
        int *aux= malloc(2*cap*sizeof(int));
        for(int i=0;i<sz;i++) aux[i]=v[i];
        cap *=2;
        free(v);
        v=aux;
    }

    public:
        vec_int(){
            cap=10;
            //new se aplica a objeto
            v=malloc(cap*sizeof(int));
            sz=0;
        }
        int set(int pos, int e){
            if(pos<sz){
                v[pos]=e;
                return 1;
            } else{
                return 0;
            }
        }
        int getsz(){
            return sz;
        }
        int get(int pos){
            if(pos<sz){
                return v[pos];
            } else {
                return 0;
            }
        }
        int append(int e){
            if(sz==cap) grow();
            v[sz++]=e;
        }
};

int main(){
    vec_int= mi_v;
    mi_v.append(10);
    mi_v.append(15);
    for(int i=0;i<20;i++) mi_v.append(i);
    for(int i=0;i<mi_v.get();++i) printf("%d", mi_v.get(i));
}



/*
para certamen
sobrecarge el operador suma para poder sumar 2 puntos en 3 dimensiones
*/