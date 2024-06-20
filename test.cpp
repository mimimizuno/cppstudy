#include <bits/stdc++.h>
using namespace std;
#define Ordermax 1000

class menuinfomation
{
public:
    int food_num; // 料理番号
    int stock;    // 在庫数
    int price;    // 価格
};

class orderinformation
{
public:
    string str;
    int table_num; // テーブル番号
    int food_num; // 料理番号
    int order_num; // 注文回数
};

int main(int argc, char *argv[])
{
    // このコードは標準入力と標準出力を用いたサンプルコードです。
    // このコードは好きなように編集・削除してもらって構いません。
    // ---
    // This is a sample code to use stdin and stdout.
    // Edit and remove this code as you like.
    int stepnum = 0; // ステップ番号
    int menu;        // メニューの種類数
    bool can = false;

    cin >> stepnum;
    if (stepnum == 1)
    { // ステップ1の処理
        cin >> menu;
        vector<menuinfomation> menuinfo(menu);
        vector<orderinformation> orderinfo(Ordermax);
        for (int i = 0; i < menu; i++)
        {
            cin >> menuinfo.at(i).food_num >> menuinfo.at(i).stock >> menuinfo.at(i).price;
        }

        while (true)
        {
            int i = 0;
            cin >> orderinfo.at(i).str >> orderinfo.at(i).table_num >> orderinfo.at(i).food_num >> orderinfo.at(i).order_num;
            if (orderinfo[i].str != "order")
            {
                break;
            }
            i++;
        }
        for (int i = 0; i < Ordermax; i++)
        {
            for (int j = 0; j < menu; j++)
            {
                if (orderinfo.at(i).food_num == menuinfo.at(j).food_num)
                {
                    if (orderinfo.at(i).order_num <= menuinfo.at(j).stock)
                    {
                        can = true;
                        menuinfo.at(j).stock -= orderinfo.at(i).order_num;
                    }
                    if (can)
                    {
                        for (int rep = 0; rep < orderinfo.at(i).order_num; rep++)
                        {
                            cout << "received order" << " " << orderinfo.at(i).table_num << " " << menuinfo.at(j).food_num << endl;
                        }
                        can = false;
                    }
                    else
                        cout << "sold out " << orderinfo.at(i).table_num << endl;
                }
            }
        }
    }
    return 0;
}