#include <stdio.h>
# define N  10
int busquedaBinaria(int i,int j,int arr[N],int b);
int busquedaBinariaRecursive(int i,int j,int arr[N],int b,int k);
int main()
{
    int arr[N] = {4,20,38,45,67,88,110,137,149,182};
    int i = 0;
    int j = N-1;
    int b;//4
    int pos;  

  printf("dame un valor");
  scanf("%d",&b);
  
 //pos = busquedaBinaria(i,j,arr,b); 
  pos = busquedaBinariaRecursive( i, j, arr, b,pos);
  
 if(pos == -1){
    
    if(b < arr[0]){
        printf("esta es la posicion: 0");
    }
    if(b > arr[N-1]){
        printf("esta es la posicio %d",N);
    }
    if(b > arr[0] &&  b < arr[N-1]){
        int arraux[N+1];
        int contaux = 0;
        for (int cont = 0;cont < N;cont++){
            arraux[contaux] = arr[cont];
            if(b >arr[cont] && b< arr[cont+1]){
                contaux++; 
                arraux[contaux] = b;
                
            }
         contaux++;   
        }
        pos = busquedaBinariaRecursive(i,j,arraux,b,pos);
        printf("esta en la posicion %d",pos);
    }
 
 }else{
     
     
     printf("esta es la posicion :%d",pos);
 }
  
    
}
int busquedaBinaria(int i,int j,int arr[N],int b){
  int k;
        do {
            k= (i+j)/2;
            if (arr[k]<=b ){
                i=k+1; 
            }
       
            if (arr[k]>=b ){
                j= k-1;
            }
        
        }while (i<=j);
        
        if(arr[k] != b){
            k = -1;
     
     
        }
 
        return k;
}
int busquedaBinariaRecursive(int i,int j,int arr[N],int b,int k){
    if(arr[i] == b){
        
        return i;
    }
    if(arr[j] == b){
        
        return j;
    }
    if(i>=j){
      if(arr[k] != b){
          
            k = -1;  
      }
      
      
      return k;
    }
    
      k= (i+j)/2;
      if (arr[k]<=b ){
          
                i=k+1; 
        }
       
       if (arr[k]>=b ){
           
                j= k-1;
        }
    return  busquedaBinariaRecursive( i, j, arr, b,k);
    
    
}    
    
    
    
    