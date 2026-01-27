/******************************************************************************
 * Họ và tên: [LỤC VĂN VIỆT]
 * MSSV:      [PS49691]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    int soDien; 
    float tienDien; 
    printf("Nhap so dien tieu thu trong thang: ");
    scanf("%d", &soDien); 

    if(soDien <= 50){
        tienDien = soDien * 1000; 
    } else {
        tienDien = 50 * 1000 + (soDien - 50) * 1200; 
    }

    printf("So tien dien phai dong: %.2f VND\n", tienDien);

    return 0;
}
