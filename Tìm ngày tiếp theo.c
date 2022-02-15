Viết chương trình nhập từ bàn phím 3 giá trị là dd, mm, yy biểu thị là ngày, tháng, năm nào đó; tính và hiển thị giá trị ngày, tháng, năm của ngày hôm sau.
Ví dụ:
Nhập vào:
11 3 2018
In ra:
12/03/2018
Nhập vào:
28 2 1990
In ra:
01/03/1990
Đầu vào:
  3 số nguyên mô tả ngày, tháng và năm.
Đầu ra:
  In ra ngày hôm sau theo mẫu dd/mm/yyyy như bên trên.
====================================================================================================================================================================================

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int Day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    bool namnhuan = false;
    int ngay, thang, nam;
    scanf("%d %d %d", &ngay, &thang, &nam);
    if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
    {
        namnhuan = true;
    }
    switch (thang)
    {
        case 1:
        {
            if(ngay < Day[1])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 2:
            {
                if (namnhuan == false)
                {
                    if(ngay < Day[2])
                    {
                        ngay++;
                    }else
                    {
                        ngay = 1;
                        thang++;
                    }
                }else
                {
                    if(ngay <= 28)
                    {
                        ngay++;
                    }else
                    {
                        ngay = 1;
                        thang++;
                    }
                }
        break;
            }
        case 3:
        {
            if(ngay < Day[3])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 4:
        {
            if(ngay < Day[4])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 5:
        {
            if(ngay < Day[5])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 6:
        {
            if(ngay < Day[6])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 7:
        {
            if(ngay < Day[7])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 8:
        {
            if(ngay < Day[8])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 9:
        {
            if(ngay < Day[9])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 10:
        {
            if(ngay < Day[10])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 11:
        {
            if(ngay < Day[11])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang++;
            }
        break;
        }
        case 12:
        {
            if(ngay < Day[12])
            {
                ngay++;
            }else
            {
                ngay = 1;
                thang = 1;
                nam++;
            }
        break;
        }

    }
    printf("%02d/%02d/%d", ngay, thang, nam);


    return 0;
}
