#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define ENGBET 256
#include "haffmantree.h"
#include <QMainWindow>
//文件对话框
#include <QFileDialog>
#include <QTextEdit>
#include <QByteArray>
#include <QMessageBox>
#include <QDialog>
#include <QVector>
#include <QChar>
#include <qmap.h>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pCompressSave_triggered();

    void on_pOpen_triggered();

    void on_pNew_triggered();

    void on_mainTextView_textChanged();

private:
    Ui::MainWindow *ui;
    void firstOpen();//初始化
    void turnUI(bool);//设置ui是否可见
    void countChars();//计算字符出现次数
    void getHaffmanTree();

    void readFile();//读取文件
    void readByHaffman();//以哈夫曼编码读取
    void readByNormal();//正常读取
    void saveByHaffman();//哈夫曼编码保存
    void saveByNormal();//普通格式保存

    void closeEvent(QCloseEvent *);

    bool isOpenOk = false;//是否成功打开
    bool isHaffman = false;//是否为哈夫曼编码文件
    bool isSave = true;//是否需要保存

    QTextEdit *mainText;//文本显示
    QFileDialog fileDialog;//文件选择
    QString filePath;//选择文件地址
    QFile file;//打开文件
    QFile dataFile;//存放地址的文件
    QByteArray array;//读取出的array

    QMap<QChar, int> charMap;
};

#endif // MAINWINDOW_H
