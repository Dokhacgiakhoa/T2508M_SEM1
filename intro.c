// intro.c — Giới thiệu bản thân (T2508M) — UTF-8 console friendly
// Cách biên dịch/chạy
//   • Windows (MSVC):   cl /utf-8 intro.c && intro.exe
//   • Windows (MinGW):  gcc intro.c -o intro.exe -finput-charset=UTF-8 -fexec-charset=UTF-8 && intro.exe
//   • Linux/macOS:      gcc intro.c -o intro && ./intro
//
// Gợi ý Windows Terminal/PowerShell: dùng font Consolas/Cascadia Mono; nếu cần, chạy 'chcp 65001' trước.

#include <stdio.h>
#include <locale.h>

#ifdef _WIN32
  #include <windows.h>
  #include <io.h>
  #include <fcntl.h>
#endif

int main(void) {
#ifdef _WIN32
    // Thiết lập mã UTF-8 cho console Windows
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    // Nếu vẫn lỗi hiển thị, bỏ comment dòng dưới để xuất Wide UTF-8:
    // _setmode(_fileno(stdout), _O_U8TEXT);
#else
    setlocale(LC_ALL, "");
#endif

    printf("===== GIỚI THIỆU BẢN THÂN =====\n\n");
    printf("Họ và tên      : Đỗ Khắc Gia Khoa\n");
    printf("Mã sinh viên   : FTH00042\n");
    printf("Lớp            : T2508M\n");
    printf("Trường         : FPT Aptech Hà Nội\n\n");

    printf("Sở thích/Định hướng:\n");
    printf(" - Lập trình C (FPC), Web (React, Laravel).\n");
    printf(" - Xây kênh TikTok về Tarot/huyền học/truyền cảm hứng.\n");
    printf(" - Luyện tập có chủ đích, học theo Bloom.\n\n");

    printf("Mục tiêu gần:\n");
    printf(" - Coursera (BNDW) trước 13/10/2025.\n");
    printf(" - Thi: FPC 19/09, BNDW 17/10, RMWD 14/11, MDSS 28/11, MPAL 26/12.\n");
    printf(" - ePRJ1: bảo vệ 19/01/2026, nộp 23/01/2026.\n\n");

    printf("Thông điệp: 'Ngắn gọn, súc tích, làm việc thông minh mỗi ngày.'\n\n");

    printf("(Biên dịch: %s %s)\n", __DATE__, __TIME__);
    return 0;
}
