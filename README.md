Chuỗi ngoặc cân bằng là một dãy ký tự chỉ gồm "(" và ")" và có thể trở thành một biểu thức toán học hợp lệ sau khi chèn số và phép toán vào. Ví dụ: "()(())".

Độ cân bằng của một chuỗi ngoặc được định nghĩa là số lượng dấu ngoặc mở "(" trừ đi số lượng dấu ngoặc đóng ")". Ví dụ: Độ cân bằng của chuỗi "(()((" là 3.

Một cách định nghĩa khác về chuỗi ngoặc cân bằng là một chuỗi ngoặc có độ cân bằng bằng 0 và mỗi tiền tố của nó đều có độ cân bằng không âm.

Hoán vị cân bằng là một phép toán thực hiện trên chuỗi ngoặc như sau: Đầu tiên, đối với mỗi ký tự trong chuỗi đầu vào, ta tính độ cân bằng của tiền tố trước ký tự đó và ghi lại vào một bảng cùng với vị trí của các ký tự trong chuỗi đầu vào. Ví dụ:

| Độ cân bằng tiền tố | 0  1  2  3  1  2  3  2 1 |

|---|---|---|---|---|---|---|---|

| Vị trí               | 1  2  3  4  5  6  7  8 |

| Ký tự               | (  (  (  )  (  )  )  ) |

Sau đó, ta sắp xếp các cột của bảng này theo thứ tự tăng dần của độ cân bằng tiền tố, và nếu có các cột có cùng độ cân bằng thì sắp xếp theo thứ tự giảm dần của vị trí. Trong ví dụ trên, ta được:

| Độ cân bằng tiền tố | 0  1  1  1  2  2  2  3 |

|---|---|---|---|---|---|---|---|

| Vị trí               | 1  8  4  2  7  5  3  6 |

| Ký tự               | (  )  (  (  )  )  )  ) |

Dòng cuối cùng của bảng này tạo thành một chuỗi ngoặc mới, trong trường hợp này là "()(())". Chuỗi này được gọi là kết quả của phép hoán vị cân bằng áp dụng lên chuỗi đầu vào.

Đầu vào:

Dòng đầu tiên của đầu vào chứa một chuỗi s chỉ gồm các ký tự "(" và ")". Chuỗi này đảm bảo là một chuỗi ngoặc cân bằng không rỗng và có độ dài không vượt quá 500.000.

Đầu ra:

In ra chuỗi ngoặc t - kết quả của phép hoán vị cân bằng của s.

Giải quyết:

1. Tính độ cân bằng tiền tố: đối với mỗi vị trí trong chuỗi, tính độ cân bằng của chuỗi từ đầu đến vị trí đó.
   
2. Lưu thông tin: Lưu thông tin về độ cần bằng và các vị trí của các ký tự trong chuỗi vào một mảng.
   
3. Sắp xếp: Sắp xếp các cột của bảng này theo độ cân bẳng tăng dần. Nếu có độ cân bằng giống nhau, sắp xếp theo vị trí giảm dần.
   
4. Tạo chuỗi mới: Sau khi sắp xếp, tạo chuỗi mới từ kết quả đã sắp xếp.
