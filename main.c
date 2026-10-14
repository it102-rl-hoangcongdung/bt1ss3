#include <stdio.h>

int main() {
    int maPhim, tuoi, loaiGhe, doiTuong;
    int giaCoBan = 80000;
    int phuThu = 0;
    int tongTruocGiam = 0;
    float tienGiam = 0;
    float tongTienThanhToan = 0;

    printf("=== HỆ THỐNG BÁN VÉ PHIM CGV / LOTTE ===\n");
    printf("Nhập mã loại phim (1: Phim P, 2: Phim C18): ");
    scanf("%d", &maPhim);
    
    printf("Nhập tuổi của khán giả: ");
    scanf("%d", &tuoi);
    
    printf("Nhập loại ghế (1: Ghế Thường, 2: Ghế VIP): ");
    scanf("%d", &loaiGhe);
    
    printf("Nhập đối tượng (1: Khách thông thường, 2: HSSV): ");
    scanf("%d", &doiTuong);

    if (maPhim == 2 && tuoi < 18) {
        printf("\n[THÔNG BÁO] Từ chối bán vé: Khán giả chưa đủ 18 tuổi để xem phim mác C18!\n");
        return 0;
    }

    switch (loaiGhe) {
        case 1:
            phuThu = 0;
            break;
        case 2:
            phuThu = 15000;
            break;
        default:
            printf("\n[LỖI] Mã loại ghế không hợp lệ! Vui lòng chọn 1 (Thường) hoặc 2 (VIP).\n");
            return 0;
    }

    tongTruocGiam = giaCoBan + phuThu;

    if (doiTuong == 2) {
        tienGiam = tongTruocGiam * 0.20;
    } else {
        tienGiam = 0;
    }

    tongTienThanhToan = tongTruocGiam - tienGiam;

    printf("\n=== HÓA ĐƠN THANH TOÁN VÉ PHIM ===\n");
    printf("Giá vé chuẩn: %d VNĐ\n", giaCoBan);
    printf("Phụ thu ghế VIP: %d VNĐ\n", phuThu);
    printf("Tổng phí dịch vụ: %d VNĐ\n", tongTruocGiam);
    if (doiTuong == 2) {
        printf("Giảm giá HSSV (20%%): %.0f VNĐ\n", tienGiam);
    } else {
        printf("Giảm giá HSSV (20%%): 0 VNĐ\n");
    }
    printf("-----------------------------------\n");
    printf("TỔNG TIỀN PHẢI THANH TOÁN: %.0f VNĐ\n", tongTienThanhToan);

    return 0;
}
