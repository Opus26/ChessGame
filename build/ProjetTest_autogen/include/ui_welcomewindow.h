/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_player1;
    QLabel *label_player2;
    QLineEdit *player2_lineEdit;
    QLineEdit *player1_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->setWindowModality(Qt::NonModal);
        WelcomeWindow->setEnabled(true);
        WelcomeWindow->resize(498, 175);
        WelcomeWindow->setMinimumSize(QSize(0, 175));
        WelcomeWindow->setMaximumSize(QSize(16777215, 175));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../ChessImages/black_king.png"), QSize(), QIcon::Normal, QIcon::Off);
        WelcomeWindow->setWindowIcon(icon);
        WelcomeWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52)"));
        WelcomeWindow->setSizeGripEnabled(false);
        WelcomeWindow->setModal(false);
        gridLayout = new QGridLayout(WelcomeWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(WelcomeWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 30));
        pushButton_2->setMaximumSize(QSize(100, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton { color: rgb(25, 10, 5) ; background-color: rgb(179, 135, 75) }"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(WelcomeWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { color: rgb(25, 10, 5) ; background-color: rgb(179, 135, 75) }"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        label = new QLabel(WelcomeWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(234, 203, 152)"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_player1 = new QLabel(WelcomeWindow);
        label_player1->setObjectName(QString::fromUtf8("label_player1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_player1->sizePolicy().hasHeightForWidth());
        label_player1->setSizePolicy(sizePolicy);
        label_player1->setStyleSheet(QString::fromUtf8("color: rgb(234, 203, 152)"));
        label_player1->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        gridLayout->addWidget(label_player1, 0, 0, 1, 1);

        label_player2 = new QLabel(WelcomeWindow);
        label_player2->setObjectName(QString::fromUtf8("label_player2"));
        sizePolicy.setHeightForWidth(label_player2->sizePolicy().hasHeightForWidth());
        label_player2->setSizePolicy(sizePolicy);
        label_player2->setStyleSheet(QString::fromUtf8("color: rgb(234, 203, 152)"));
        label_player2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        gridLayout->addWidget(label_player2, 1, 0, 1, 1);

        player2_lineEdit = new QLineEdit(WelcomeWindow);
        player2_lineEdit->setObjectName(QString::fromUtf8("player2_lineEdit"));
        player2_lineEdit->setMinimumSize(QSize(0, 25));
        player2_lineEdit->setStyleSheet(QString::fromUtf8(" border: 1px solid #686868;\n"
"color: rgb(234, 203, 152);\n"
""));

        gridLayout->addWidget(player2_lineEdit, 1, 1, 1, 1);

        player1_lineEdit = new QLineEdit(WelcomeWindow);
        player1_lineEdit->setObjectName(QString::fromUtf8("player1_lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(player1_lineEdit->sizePolicy().hasHeightForWidth());
        player1_lineEdit->setSizePolicy(sizePolicy1);
        player1_lineEdit->setMinimumSize(QSize(0, 25));
        player1_lineEdit->setStyleSheet(QString::fromUtf8(" border: 1px solid #686868;\n"
"color: rgb(234, 203, 152);"));

        gridLayout->addWidget(player1_lineEdit, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox = new QComboBox(WelcomeWindow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));
        comboBox->setStyleSheet(QString::fromUtf8("border: 1px solid #686868;\n"
"color: rgb(234, 203, 152);"));
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);


        retranslateUi(WelcomeWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), WelcomeWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Players", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WelcomeWindow", "Quit", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomeWindow", "Play!", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("WelcomeWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("WelcomeWindow", "Simulation", nullptr));
        label_player1->setText(QCoreApplication::translate("WelcomeWindow", "Player 1     ", nullptr));
        label_player2->setText(QCoreApplication::translate("WelcomeWindow", "Player 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
