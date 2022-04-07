#include <stdio.h>

int main() {
    char tab[] = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
    char tab2[] = "ddf6ewg64f";
    int a = 0;
    int b = 0;
    for(int i = 0; tab2[i] != '\0'; i++){
        a++;
    }
    for(int i = 0; tab2[i] != '\0'; i++){
        for(int j = 0; tab[j] != '\0';j++){
            if(tab2[i] == tab[j]){
                b++;
                break;
            }
        }
    }

    if(b == a){
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}
