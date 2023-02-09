/********************************************************************************
** Form generated from reading UI file 'launcherYOZPXF.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LAUNCHERYOZPXF_H
#define LAUNCHERYOZPXF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include <QProcess>
#include <windows.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow : public QMainWindow {

    Q_OBJECT

public:
    QWidget *centralwidget;
    QTextBrowser *header;
    QGroupBox *a_propos;
    QTextBrowser *textBrowser_2;
    QGroupBox *infos;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextBrowser *textBrowser_3;
    QWidget *page_2;
    QTextBrowser *textBrowser_4;
    QGroupBox *nav;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QGroupBox *arbo;
    QTreeWidget *treeWidget;
    QTextBrowser *img_gauche;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(628, 476);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        header = new QTextBrowser(centralwidget);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(-10, 0, 661, 71));
        a_propos = new QGroupBox(centralwidget);
        a_propos->setObjectName(QString::fromUtf8("a_propos"));
        a_propos->setGeometry(QRect(170, 80, 211, 261));
        textBrowser_2 = new QTextBrowser(a_propos);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 20, 191, 231));
        infos = new QGroupBox(centralwidget);
        infos->setObjectName(QString::fromUtf8("infos"));
        infos->setGeometry(QRect(170, 340, 211, 131));
        stackedWidget = new QStackedWidget(infos);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 20, 191, 101));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        textBrowser_3 = new QTextBrowser(page);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 191, 101));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        textBrowser_4 = new QTextBrowser(page_2);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 0, 191, 101));
        stackedWidget->addWidget(page_2);
        nav = new QGroupBox(centralwidget);
        nav->setObjectName(QString::fromUtf8("nav"));
        nav->setGeometry(QRect(390, 340, 231, 131));
        layoutWidget = new QWidget(nav);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 221, 95));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QObject::connect(pushButton, &QPushButton::clicked, [](){
            QProcess process;
            process.setProgram("C:\\windows\\system32\\cmd.exe");
            process.setArguments({"/c", ".\\tp1.exe"});
            process.setCreateProcessArgumentsModifier(
                        [](QProcess::CreateProcessArguments *args) {
                args->flags |= CREATE_NEW_CONSOLE;
                args->startupInfo->dwFlags &=~ STARTF_USESTDHANDLES;
            });
            process.start();
            process.waitForFinished();
        });
        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QObject::connect(pushButton_2, &QPushButton::clicked, [](){
            QProcess process;
            process.setProgram("C:\\windows\\system32\\cmd.exe");
            process.setArguments({"/c", ".\\tp2.exe"});
            process.setCreateProcessArgumentsModifier(
                        [](QProcess::CreateProcessArguments *args) {
                args->flags |= CREATE_NEW_CONSOLE;
                args->startupInfo->dwFlags &=~ STARTF_USESTDHANDLES;
            });
            process.start();
            process.waitForFinished();
        });
        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QObject::connect(pushButton_3, &QPushButton::clicked, [](){
            QProcess process;
            process.setProgram("C:\\windows\\system32\\cmd.exe");
            process.setArguments({"/c", ".\\tp3.exe"});
            process.setCreateProcessArgumentsModifier(
                        [](QProcess::CreateProcessArguments *args) {
                args->flags |= CREATE_NEW_CONSOLE;
                args->startupInfo->dwFlags &=~ STARTF_USESTDHANDLES;
            });
            process.start();
            process.waitForFinished();
        });
        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_3);

        arbo = new QGroupBox(centralwidget);
        arbo->setObjectName(QString::fromUtf8("arbo"));
        arbo->setGeometry(QRect(390, 80, 231, 261));
        treeWidget = new QTreeWidget(arbo);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 20, 211, 231));
        treeWidget->setAutoScroll(true);
        treeWidget->setAnimated(true);
        treeWidget->header()->setVisible(false);
        img_gauche = new QTextBrowser(centralwidget);
        img_gauche->setObjectName(QString::fromUtf8("img_gauche"));
        img_gauche->setGeometry(QRect(10, 80, 151, 391));
        MainWindow->setCentralWidget(centralwidget);
        
        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        
        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Launcher", nullptr));
        header->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:6pt; font-weight:704;\">	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:704;\">          MENU PRINCIPAL POUR LES TP EN LANGAGES C</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:7pt; font-weight:704;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">          Vous retrouverez ici tous les TP demand\303\251s au cours de l'ann\303\251e.</span></p></body></html>", nullptr));
        a_propos->setTitle(QCoreApplication::translate("MainWindow", "A Propos", nullptr));
        infos->setTitle(QCoreApplication::translate("MainWindow", "Informations", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:704;\">META</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:6pt;\">     </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:704;\">Auteur</span><span style=\" font-family:'Segoe UI'; font-size:8pt;\"> : Mah\303\251"
                        " Bouchardeau</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:704;\">Date</span><span style=\" font-family:'Segoe UI'; font-size:8pt;\"> (de lancement) : 11/2022</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:704;\">Date</span><span style=\" font-family:'Segoe UI'; font-size:8pt;\"> (derni\303\250re maj.) : 20/01/2023</span></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:704;\">NEW FEATURES</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:6pt;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:8pt;\">- Son existence</span></p></body></html>", nullptr));
        nav->setTitle(QCoreApplication::translate("MainWindow", "Navigation", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Les Bases", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "TP1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Les Boucles", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "TP2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pointeurs et Structures", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "TP3", nullptr));
        arbo->setTitle(QCoreApplication::translate("MainWindow", "Arborescence", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "1", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "TP1 - Les Bases", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "arbre.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "ascii.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "factoriel.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "multi.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("MainWindow", "table.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("MainWindow", "trapeze.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("MainWindow", "TP2 -  Les Boucles", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("MainWindow", "archi.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("MainWindow", "des.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem8->child(2);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("MainWindow", "suite1.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem8->child(3);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("MainWindow", "suite2.c", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("MainWindow", "TP3 - Structures et Pointeurs", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem13->child(0);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("MainWindow", "date.c", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LAUNCHERYOZPXF_H