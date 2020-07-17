/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QChartView *graph;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QLabel *label_pathCSV;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *tension_label;
    QLabel *Duree_label;
    QDoubleSpinBox *PWMBox;
    QSpinBox *DurationBox;
    QPushButton *enable_pushButton;
    QPushButton *disable_pushButton;
    QLabel *Donnees_brutes_label;
    QLineEdit *JsonKey;
    QPushButton *pulseButton;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QTextBrowser *textBrowser;
    QLabel *Message_Json_label;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_6;
    QLabel *Port_label;
    QComboBox *comboBoxPort;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *x_label_valeur;
    QLabel *x_pos_label;
    QLineEdit *x_pos_lineEdit;
    QLabel *x_label_pos;
    QLabel *x_kp_label;
    QLineEdit *x_kp_lineEdit;
    QLabel *x_label_kp;
    QLabel *x_ki_label;
    QLineEdit *x_ki_lineEdit;
    QLabel *x_label_ki;
    QLabel *x_kd_label;
    QLineEdit *x_kd_lineEdit;
    QLabel *x_label_kd;
    QLabel *x_seuil_label;
    QLineEdit *x_seuil_lineEdit;
    QLabel *x_label_seuil;
    QPushButton *x_envoie_pushButton;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_4;
    QLabel *Envoie_label;
    QLabel *angle_label_valeur;
    QLabel *angle_pos_label;
    QLineEdit *angle_pos_lineEdit;
    QLabel *angle_label_pos;
    QLabel *angle_kp_label;
    QLineEdit *angle_kp_lineEdit;
    QLabel *angle_label_kp;
    QLabel *angle_ki_label;
    QLineEdit *angle_ki_lineEdit;
    QLabel *angle_label_ki;
    QLabel *angle_kd_label;
    QLineEdit *angle_kd_lineEdit;
    QLabel *angle_label_kd;
    QLabel *angle_seuil_label;
    QLineEdit *angle_seuil_lineEdit;
    QLabel *angle_label_seuil;
    QPushButton *angle_envoie_pushButton;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_7;
    QLabel *label_etatrobot;
    QLineEdit *lineEdit_etatrobot;
    QPushButton *pushButton_etatrobot;
    QLabel *label_activation_robot;
    QWidget *widget;
    QGridLayout *gridLayout_8;
    QLabel *label_a_cst;
    QLineEdit *lineEdit_a_cst;
    QPushButton *pushButton_a_cst;
    QLabel *label_a_cst_val;
    QLabel *label_x_cst;
    QLineEdit *lineEdit_x_cst;
    QPushButton *pushButton_x_cst;
    QLabel *label_x_cst_val;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 539);
        MainWindow->setAcceptDrops(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graph = new QChartView(centralWidget);
        graph->setObjectName(QStringLiteral("graph"));
        graph->setGeometry(QRect(10, 260, 611, 261));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 211, 43));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        label_pathCSV = new QLabel(layoutWidget);
        label_pathCSV->setObjectName(QStringLiteral("label_pathCSV"));
        label_pathCSV->setFrameShape(QFrame::StyledPanel);
        label_pathCSV->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(label_pathCSV, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 90, 206, 161));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tension_label = new QLabel(layoutWidget1);
        tension_label->setObjectName(QStringLiteral("tension_label"));

        gridLayout->addWidget(tension_label, 0, 0, 1, 1);

        Duree_label = new QLabel(layoutWidget1);
        Duree_label->setObjectName(QStringLiteral("Duree_label"));

        gridLayout->addWidget(Duree_label, 0, 1, 1, 2);

        PWMBox = new QDoubleSpinBox(layoutWidget1);
        PWMBox->setObjectName(QStringLiteral("PWMBox"));
        PWMBox->setMinimum(-1);
        PWMBox->setMaximum(1);
        PWMBox->setSingleStep(0.1);

        gridLayout->addWidget(PWMBox, 1, 0, 1, 1);

        DurationBox = new QSpinBox(layoutWidget1);
        DurationBox->setObjectName(QStringLiteral("DurationBox"));
        DurationBox->setKeyboardTracking(false);
        DurationBox->setMinimum(0);
        DurationBox->setMaximum(5000);
        DurationBox->setSingleStep(25);

        gridLayout->addWidget(DurationBox, 1, 1, 1, 2);

        enable_pushButton = new QPushButton(layoutWidget1);
        enable_pushButton->setObjectName(QStringLiteral("enable_pushButton"));
        enable_pushButton->setIconSize(QSize(16, 16));
        enable_pushButton->setAutoDefault(false);

        gridLayout->addWidget(enable_pushButton, 3, 0, 1, 1);

        disable_pushButton = new QPushButton(layoutWidget1);
        disable_pushButton->setObjectName(QStringLiteral("disable_pushButton"));
        disable_pushButton->setAutoDefault(false);

        gridLayout->addWidget(disable_pushButton, 3, 1, 1, 2);

        Donnees_brutes_label = new QLabel(layoutWidget1);
        Donnees_brutes_label->setObjectName(QStringLiteral("Donnees_brutes_label"));

        gridLayout->addWidget(Donnees_brutes_label, 4, 0, 1, 1);

        JsonKey = new QLineEdit(layoutWidget1);
        JsonKey->setObjectName(QStringLiteral("JsonKey"));
        JsonKey->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(JsonKey, 4, 2, 1, 1);

        pulseButton = new QPushButton(layoutWidget1);
        pulseButton->setObjectName(QStringLiteral("pulseButton"));

        gridLayout->addWidget(pulseButton, 2, 0, 1, 3);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(630, 10, 258, 511));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout_3->addWidget(textBrowser, 2, 0, 1, 1);

        Message_Json_label = new QLabel(layoutWidget2);
        Message_Json_label->setObjectName(QStringLiteral("Message_Json_label"));
        Message_Json_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(Message_Json_label, 1, 0, 1, 1);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(5, 5, 211, 24));
        gridLayout_6 = new QGridLayout(layoutWidget3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        Port_label = new QLabel(layoutWidget3);
        Port_label->setObjectName(QStringLiteral("Port_label"));

        gridLayout_6->addWidget(Port_label, 0, 0, 1, 1);

        comboBoxPort = new QComboBox(layoutWidget3);
        comboBoxPort->setObjectName(QStringLiteral("comboBoxPort"));

        gridLayout_6->addWidget(comboBoxPort, 0, 1, 1, 1);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(231, 11, 191, 184));
        gridLayout_5 = new QGridLayout(layoutWidget4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget4);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label, 0, 0, 1, 2);

        x_label_valeur = new QLabel(layoutWidget4);
        x_label_valeur->setObjectName(QStringLiteral("x_label_valeur"));

        gridLayout_5->addWidget(x_label_valeur, 0, 2, 1, 1);

        x_pos_label = new QLabel(layoutWidget4);
        x_pos_label->setObjectName(QStringLiteral("x_pos_label"));

        gridLayout_5->addWidget(x_pos_label, 1, 0, 1, 1);

        x_pos_lineEdit = new QLineEdit(layoutWidget4);
        x_pos_lineEdit->setObjectName(QStringLiteral("x_pos_lineEdit"));

        gridLayout_5->addWidget(x_pos_lineEdit, 1, 1, 1, 1);

        x_label_pos = new QLabel(layoutWidget4);
        x_label_pos->setObjectName(QStringLiteral("x_label_pos"));

        gridLayout_5->addWidget(x_label_pos, 1, 2, 1, 1);

        x_kp_label = new QLabel(layoutWidget4);
        x_kp_label->setObjectName(QStringLiteral("x_kp_label"));

        gridLayout_5->addWidget(x_kp_label, 2, 0, 1, 1);

        x_kp_lineEdit = new QLineEdit(layoutWidget4);
        x_kp_lineEdit->setObjectName(QStringLiteral("x_kp_lineEdit"));

        gridLayout_5->addWidget(x_kp_lineEdit, 2, 1, 1, 1);

        x_label_kp = new QLabel(layoutWidget4);
        x_label_kp->setObjectName(QStringLiteral("x_label_kp"));

        gridLayout_5->addWidget(x_label_kp, 2, 2, 1, 1);

        x_ki_label = new QLabel(layoutWidget4);
        x_ki_label->setObjectName(QStringLiteral("x_ki_label"));

        gridLayout_5->addWidget(x_ki_label, 3, 0, 1, 1);

        x_ki_lineEdit = new QLineEdit(layoutWidget4);
        x_ki_lineEdit->setObjectName(QStringLiteral("x_ki_lineEdit"));

        gridLayout_5->addWidget(x_ki_lineEdit, 3, 1, 1, 1);

        x_label_ki = new QLabel(layoutWidget4);
        x_label_ki->setObjectName(QStringLiteral("x_label_ki"));

        gridLayout_5->addWidget(x_label_ki, 3, 2, 1, 1);

        x_kd_label = new QLabel(layoutWidget4);
        x_kd_label->setObjectName(QStringLiteral("x_kd_label"));

        gridLayout_5->addWidget(x_kd_label, 4, 0, 1, 1);

        x_kd_lineEdit = new QLineEdit(layoutWidget4);
        x_kd_lineEdit->setObjectName(QStringLiteral("x_kd_lineEdit"));

        gridLayout_5->addWidget(x_kd_lineEdit, 4, 1, 1, 1);

        x_label_kd = new QLabel(layoutWidget4);
        x_label_kd->setObjectName(QStringLiteral("x_label_kd"));

        gridLayout_5->addWidget(x_label_kd, 4, 2, 1, 1);

        x_seuil_label = new QLabel(layoutWidget4);
        x_seuil_label->setObjectName(QStringLiteral("x_seuil_label"));

        gridLayout_5->addWidget(x_seuil_label, 5, 0, 1, 1);

        x_seuil_lineEdit = new QLineEdit(layoutWidget4);
        x_seuil_lineEdit->setObjectName(QStringLiteral("x_seuil_lineEdit"));

        gridLayout_5->addWidget(x_seuil_lineEdit, 5, 1, 1, 1);

        x_label_seuil = new QLabel(layoutWidget4);
        x_label_seuil->setObjectName(QStringLiteral("x_label_seuil"));

        gridLayout_5->addWidget(x_label_seuil, 5, 2, 1, 1);

        x_envoie_pushButton = new QPushButton(layoutWidget4);
        x_envoie_pushButton->setObjectName(QStringLiteral("x_envoie_pushButton"));

        gridLayout_5->addWidget(x_envoie_pushButton, 6, 0, 1, 2);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(430, 11, 191, 184));
        gridLayout_4 = new QGridLayout(layoutWidget5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Envoie_label = new QLabel(layoutWidget5);
        Envoie_label->setObjectName(QStringLiteral("Envoie_label"));
        Envoie_label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(Envoie_label, 0, 0, 1, 1);

        angle_label_valeur = new QLabel(layoutWidget5);
        angle_label_valeur->setObjectName(QStringLiteral("angle_label_valeur"));

        gridLayout_4->addWidget(angle_label_valeur, 0, 2, 1, 1);

        angle_pos_label = new QLabel(layoutWidget5);
        angle_pos_label->setObjectName(QStringLiteral("angle_pos_label"));

        gridLayout_4->addWidget(angle_pos_label, 1, 0, 1, 1);

        angle_pos_lineEdit = new QLineEdit(layoutWidget5);
        angle_pos_lineEdit->setObjectName(QStringLiteral("angle_pos_lineEdit"));

        gridLayout_4->addWidget(angle_pos_lineEdit, 1, 1, 1, 1);

        angle_label_pos = new QLabel(layoutWidget5);
        angle_label_pos->setObjectName(QStringLiteral("angle_label_pos"));
        angle_label_pos->setTextFormat(Qt::AutoText);
        angle_label_pos->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        gridLayout_4->addWidget(angle_label_pos, 1, 2, 1, 1);

        angle_kp_label = new QLabel(layoutWidget5);
        angle_kp_label->setObjectName(QStringLiteral("angle_kp_label"));

        gridLayout_4->addWidget(angle_kp_label, 2, 0, 1, 1);

        angle_kp_lineEdit = new QLineEdit(layoutWidget5);
        angle_kp_lineEdit->setObjectName(QStringLiteral("angle_kp_lineEdit"));

        gridLayout_4->addWidget(angle_kp_lineEdit, 2, 1, 1, 1);

        angle_label_kp = new QLabel(layoutWidget5);
        angle_label_kp->setObjectName(QStringLiteral("angle_label_kp"));

        gridLayout_4->addWidget(angle_label_kp, 2, 2, 1, 1);

        angle_ki_label = new QLabel(layoutWidget5);
        angle_ki_label->setObjectName(QStringLiteral("angle_ki_label"));

        gridLayout_4->addWidget(angle_ki_label, 3, 0, 1, 1);

        angle_ki_lineEdit = new QLineEdit(layoutWidget5);
        angle_ki_lineEdit->setObjectName(QStringLiteral("angle_ki_lineEdit"));

        gridLayout_4->addWidget(angle_ki_lineEdit, 3, 1, 1, 1);

        angle_label_ki = new QLabel(layoutWidget5);
        angle_label_ki->setObjectName(QStringLiteral("angle_label_ki"));

        gridLayout_4->addWidget(angle_label_ki, 3, 2, 1, 1);

        angle_kd_label = new QLabel(layoutWidget5);
        angle_kd_label->setObjectName(QStringLiteral("angle_kd_label"));

        gridLayout_4->addWidget(angle_kd_label, 4, 0, 1, 1);

        angle_kd_lineEdit = new QLineEdit(layoutWidget5);
        angle_kd_lineEdit->setObjectName(QStringLiteral("angle_kd_lineEdit"));

        gridLayout_4->addWidget(angle_kd_lineEdit, 4, 1, 1, 1);

        angle_label_kd = new QLabel(layoutWidget5);
        angle_label_kd->setObjectName(QStringLiteral("angle_label_kd"));

        gridLayout_4->addWidget(angle_label_kd, 4, 2, 1, 1);

        angle_seuil_label = new QLabel(layoutWidget5);
        angle_seuil_label->setObjectName(QStringLiteral("angle_seuil_label"));

        gridLayout_4->addWidget(angle_seuil_label, 5, 0, 1, 1);

        angle_seuil_lineEdit = new QLineEdit(layoutWidget5);
        angle_seuil_lineEdit->setObjectName(QStringLiteral("angle_seuil_lineEdit"));

        gridLayout_4->addWidget(angle_seuil_lineEdit, 5, 1, 1, 1);

        angle_label_seuil = new QLabel(layoutWidget5);
        angle_label_seuil->setObjectName(QStringLiteral("angle_label_seuil"));

        gridLayout_4->addWidget(angle_label_seuil, 5, 2, 1, 1);

        angle_envoie_pushButton = new QPushButton(layoutWidget5);
        angle_envoie_pushButton->setObjectName(QStringLiteral("angle_envoie_pushButton"));
        angle_envoie_pushButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(angle_envoie_pushButton, 6, 0, 1, 2);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(231, 200, 391, 24));
        gridLayout_7 = new QGridLayout(layoutWidget6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_etatrobot = new QLabel(layoutWidget6);
        label_etatrobot->setObjectName(QStringLiteral("label_etatrobot"));

        gridLayout_7->addWidget(label_etatrobot, 0, 0, 1, 1);

        lineEdit_etatrobot = new QLineEdit(layoutWidget6);
        lineEdit_etatrobot->setObjectName(QStringLiteral("lineEdit_etatrobot"));

        gridLayout_7->addWidget(lineEdit_etatrobot, 0, 1, 1, 1);

        pushButton_etatrobot = new QPushButton(layoutWidget6);
        pushButton_etatrobot->setObjectName(QStringLiteral("pushButton_etatrobot"));

        gridLayout_7->addWidget(pushButton_etatrobot, 0, 2, 1, 1);

        label_activation_robot = new QLabel(layoutWidget6);
        label_activation_robot->setObjectName(QStringLiteral("label_activation_robot"));

        gridLayout_7->addWidget(label_activation_robot, 0, 3, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(231, 230, 391, 24));
        gridLayout_8 = new QGridLayout(widget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_a_cst = new QLabel(widget);
        label_a_cst->setObjectName(QStringLiteral("label_a_cst"));

        gridLayout_8->addWidget(label_a_cst, 0, 0, 1, 1);

        lineEdit_a_cst = new QLineEdit(widget);
        lineEdit_a_cst->setObjectName(QStringLiteral("lineEdit_a_cst"));

        gridLayout_8->addWidget(lineEdit_a_cst, 0, 1, 1, 1);

        pushButton_a_cst = new QPushButton(widget);
        pushButton_a_cst->setObjectName(QStringLiteral("pushButton_a_cst"));

        gridLayout_8->addWidget(pushButton_a_cst, 0, 2, 1, 1);

        label_a_cst_val = new QLabel(widget);
        label_a_cst_val->setObjectName(QStringLiteral("label_a_cst_val"));

        gridLayout_8->addWidget(label_a_cst_val, 0, 3, 1, 1);

        label_x_cst = new QLabel(widget);
        label_x_cst->setObjectName(QStringLiteral("label_x_cst"));

        gridLayout_8->addWidget(label_x_cst, 0, 4, 1, 1);

        lineEdit_x_cst = new QLineEdit(widget);
        lineEdit_x_cst->setObjectName(QStringLiteral("lineEdit_x_cst"));

        gridLayout_8->addWidget(lineEdit_x_cst, 0, 5, 1, 1);

        pushButton_x_cst = new QPushButton(widget);
        pushButton_x_cst->setObjectName(QStringLiteral("pushButton_x_cst"));

        gridLayout_8->addWidget(pushButton_x_cst, 0, 6, 1, 1);

        label_x_cst_val = new QLabel(widget);
        label_x_cst_val->setObjectName(QStringLiteral("label_x_cst_val"));

        gridLayout_8->addWidget(label_x_cst_val, 0, 7, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        enable_pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Interface Identification", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Enregistrement des donnees sous:", Q_NULLPTR));
        label_pathCSV->setText(QString());
        tension_label->setText(QApplication::translate("MainWindow", "Tension [-1,1]", Q_NULLPTR));
        Duree_label->setText(QApplication::translate("MainWindow", "Duree (ms)", Q_NULLPTR));
        enable_pushButton->setText(QApplication::translate("MainWindow", "On", Q_NULLPTR));
        disable_pushButton->setText(QApplication::translate("MainWindow", "Off", Q_NULLPTR));
        Donnees_brutes_label->setText(QApplication::translate("MainWindow", "Donnees brutes:", Q_NULLPTR));
        JsonKey->setText(QApplication::translate("MainWindow", "sonar", Q_NULLPTR));
        pulseButton->setText(QApplication::translate("MainWindow", "Commande de pulse", Q_NULLPTR));
        Message_Json_label->setText(QApplication::translate("MainWindow", "Messages Json de l'Arduino:", Q_NULLPTR));
        Port_label->setText(QApplication::translate("MainWindow", "Port:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "POSITION", Q_NULLPTR));
        x_label_valeur->setText(QApplication::translate("MainWindow", "Valeur", Q_NULLPTR));
        x_pos_label->setText(QApplication::translate("MainWindow", "Position", Q_NULLPTR));
        x_label_pos->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        x_kp_label->setText(QApplication::translate("MainWindow", "kp", Q_NULLPTR));
        x_label_kp->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        x_ki_label->setText(QApplication::translate("MainWindow", "ki", Q_NULLPTR));
        x_label_ki->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        x_kd_label->setText(QApplication::translate("MainWindow", "kd", Q_NULLPTR));
        x_label_kd->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        x_seuil_label->setText(QApplication::translate("MainWindow", "Seuil", Q_NULLPTR));
        x_label_seuil->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        x_envoie_pushButton->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        Envoie_label->setText(QApplication::translate("MainWindow", "ANGLE", Q_NULLPTR));
        angle_label_valeur->setText(QApplication::translate("MainWindow", "Valeur", Q_NULLPTR));
        angle_pos_label->setText(QApplication::translate("MainWindow", "Position", Q_NULLPTR));
        angle_label_pos->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        angle_kp_label->setText(QApplication::translate("MainWindow", "kp", Q_NULLPTR));
        angle_label_kp->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        angle_ki_label->setText(QApplication::translate("MainWindow", "ki", Q_NULLPTR));
        angle_label_ki->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        angle_kd_label->setText(QApplication::translate("MainWindow", "kd", Q_NULLPTR));
        angle_label_kd->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        angle_seuil_label->setText(QApplication::translate("MainWindow", "Seuil", Q_NULLPTR));
        angle_label_seuil->setText(QApplication::translate("MainWindow", "------------", Q_NULLPTR));
        angle_envoie_pushButton->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        label_etatrobot->setText(QApplication::translate("MainWindow", "Etat du robot", Q_NULLPTR));
        pushButton_etatrobot->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        label_activation_robot->setText(QApplication::translate("MainWindow", "------------------", Q_NULLPTR));
        label_a_cst->setText(QApplication::translate("MainWindow", "a_cst", Q_NULLPTR));
        pushButton_a_cst->setText(QApplication::translate("MainWindow", "send", Q_NULLPTR));
        label_a_cst_val->setText(QApplication::translate("MainWindow", "-----", Q_NULLPTR));
        label_x_cst->setText(QApplication::translate("MainWindow", "x_cst", Q_NULLPTR));
        pushButton_x_cst->setText(QApplication::translate("MainWindow", "send", Q_NULLPTR));
        label_x_cst_val->setText(QApplication::translate("MainWindow", "-----", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
