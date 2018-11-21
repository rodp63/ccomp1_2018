template<typename T>
class Arr
{
 public:
  Arr(){
    size = 0;
    data = new T[size];
  }
  Arr(int s){
    size = s;
    data = new T[size];
  }
  Arr(Arr &o){
    size = o.size;
    data = new T[size];
    for(int i=0; i<size; i++)
      data[i] = o.data[i];
  }
  ~Arr(){
    delete[] data;
  }
  void push_back(T temp){
    resize(size+1);
    data[size-1] = temp;
  }
  void insert(T temp, int pos){
    resize(size+1);
    for(int i=size-1; i>pos; i--)
      data[i]=data[i-1];
    data[pos] = temp;
  }
  void erase(int pos){
    for(int i=pos; i<size-1; i++)
      data[i]=data[i+1];
    resize(size-1);
  }
  void print(){
    for(int i=0; i<size; i++)
      data[i].print();
  }

 private:
  T* data;
  int size;
  void resize(int s){
    int temp = (s<size) ? s : size;
    T* t = new T[size];
    for(int i=0; i<temp; i++)
      t[i]=data[i];
    delete[] data;
    data = t;
    size = s;
  }
 
};
