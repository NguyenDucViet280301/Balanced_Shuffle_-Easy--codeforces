/*
Ý tưởng chính:
1. Tính độ cân bằng tiền tố: đối với mỗi vị trí trong chuỗi, tính độ cân bằng của chuỗi từ đầu đến vị trí đó.
2. Lưu thông tin: Lưu thông tin về độ cần bằng và các vị trí của các ký tự trong chuỗi vào một mảng.
3. Sắp xếp: Sắp xếp các cột của bảng này theo độ cân bẳng tăng dần. Nếu có độ cân bằng giống nhau, sắp xếp theo vị trí giảm dần.
4. Tạo chuỗi mới: Sau khi sắp xếp, tạo chuỗi mới từ kết quả đã sắp xếp.
*/

#include <stdio.h>
#include <stdlib.h>

//Cấu trúc để lưu trữ độ cân bằng, vị trí và ký tự tương ứng
typedef struct{
    int balance;
    int position;
    char character;
}   BracketInFo;

// Hàm so sánh cho qsort
int compare(const void *a, const void *b){
    BracketInFo *x = (BracketInFo *)a;
    BracketInFo *y = (BracketInFo *)b;

    // So sánh độ cân bằng tiền tố
    if(x->balance !=y->balance)
    return x->balance - y->balance;

    // Nếu độ cân bằng giống nhau, sắp xếp theo vị trí giảm dần
    return y->position - x->position;
}

int main(){
    char s[500001];     //chuỗi ngoặc, kích tước tối đa là 500.000 + 1 cho ký tự '\0'
    scanf("%s", s);

    //Tìm độ dài của chuỗi
    int n;
    for(n = 0; s[n] != '\0'; n++);

    //Khởi tạo mảng để lưu thông tin
    BracketInFo *brackets = (BracketInFo *)malloc(n * sizeof(BracketInFo));

    int balance = 0; // Độ cân bằng hiên tại

    //Duyệt qua chuỗi và tính toán độ cân bằng tiền đó cho từng vị trí
    for(int i = 0; i < n; i++){
        brackets[i].balance = balance;
        brackets[i].position = i;
        brackets[i].character = s[i];

        // Cập nhật độ cân bằng dựa vào ký tự hiện tại
        if(s[i] == '('){
            balance++;
        }else{
            balance--;
        }
    }

    // sắp xếp các cột của bẳng theo độ cân bằng tiền tố và vị trí 
    qsort(brackets, n, sizeof(BracketInFo), compare);

    //In ra kết quả sau khi hoán vị cân bằng
    for(int i = 0; i < n; i++){
        printf("%c", brackets[i].character);
    }
    printf("\n");

    //Giải phóng bộ nhớ
    free(brackets);

    return 0;
}
