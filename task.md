# Spec

0. 投入と払い戻し
    * お金を1つずつ投入できる
        * 10円玉  = 10
        * 50円玉  = 50
        * 100円玉 = 100
        * 500円玉 = 500
        * 1000円札 = 1000
    * お金の投入は複数回できる
    * 投入金額総計を取得できる
    * 払い戻し操作をできる

# Design
0. 投入と払い戻し
    * class Vendor
        * bool insert(Money m);
        * total getTotal();
        * bool payBack(); 
    * enum Money お金
        * M_10YEN = 1
        * M_50YEN = 5
        * M_100YEN = 10
        * M_500YEN = 50
        * M_1000YEN = 100
    * typedef unsigned int total;
# ToDo

0. 投入と払い戻し
    * お金を1つずつ投入できる
        * 10円玉を投入すると、投入金額総計が10円増える
    * お金の投入は複数回できる
        * 
# Doing

# Done
