#include "rsa.c"  
#include "canny.c"

int main(){
    int p=11,q=13;
    n=p*q;
    t=(p-1)*(q-1);
    ce();

    // Import the img 
    static bitmap_info_header_t ih;
    const pixel_t *in_bitmap_data = load_bmp("../media/out.bmp", &ih);
    if (in_bitmap_data == NULL) {
        fprintf(stderr, "main: BMP image not loaded.\n");
        return 1;
    }
    // convert it to nos & encrypt
    for(int pixelNo=0; i< ih.bmp_bytesz; pixelNo=pixelNo+3){
        
    }
    // edit the encryption part 

    // edit the decryption part 
    return 0;
}