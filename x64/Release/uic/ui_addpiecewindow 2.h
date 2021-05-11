/********************************************************************************
** Form generated from reading UI file 'addpiecewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPIECEWINDOW_H
#define UI_ADDPIECEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QSplitter *splitter;
    QLabel *piece_label;
    QRadioButton *bishopButton;
    QRadioButton *kingButton;
    QRadioButton *knightButton;
    QSplitter *splitter_2;
    QLabel *color_label;
    QRadioButton *whiteButton;
    QRadioButton *blackButton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->resize(493, 133);
        WelcomeWindow->setMinimumSize(QSize(0, 133));
        WelcomeWindow->setMaximumSize(QSize(16777215, 133));
        layoutWidget = new QWidget(WelcomeWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 100, 481, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(WelcomeWindow);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(400, 100, 80, 22));
        addButton->setMaximumSize(QSize(100, 30));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton { color: rgb(25, 10, 5) ; background-color: rgb(179, 135, 75) }"));
        splitter = new QSplitter(WelcomeWindow);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(30, 20, 401, 20));
        splitter->setOrientation(Qt::Horizontal);
        piece_label = new QLabel(splitter);
        piece_label->setObjectName(QString::fromUtf8("piece_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(piece_label->sizePolicy().hasHeightForWidth());
        piece_label->setSizePolicy(sizePolicy);
        piece_label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        splitter->addWidget(piece_label);
        bishopButton = new QRadioButton(splitter);
        bishopButton->setObjectName(QString::fromUtf8("bishopButton"));
        bishopButton->setChecked(true);
        splitter->addWidget(bishopButton);
        kingButton = new QRadioButton(splitter);
        kingButton->setObjectName(QString::fromUtf8("kingButton"));
        splitter->addWidget(kingButton);
        knightButton = new QRadioButton(splitter);
        knightButton->setObjectName(QString::fromUtf8("knightButton"));
        splitter->addWidget(knightButton);
        splitter_2 = new QSplitter(WelcomeWindow);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(30, 60, 421, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        color_label = new QLabel(splitter_2);
        color_label->setObjectName(QString::fromUtf8("color_label"));
        sizePolicy.setHeightForWidth(color_label->sizePolicy().hasHeightForWidth());
        color_label->setSizePolicy(sizePolicy);
        color_label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        splitter_2->addWidget(color_label);
        whiteButton = new QRadioButton(splitter_2);
        whiteButton->setObjectName(QString::fromUtf8("whiteButton"));
        whiteButton->setChecked(true);
        splitter_2->addWidget(whiteButton);
        blackButton = new QRadioButton(splitter_2);
        blackButton->setObjectName(QString::fromUtf8("blackButton"));
        splitter_2->addWidget(blackButton);

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        addButton->setText(QCoreApplication::translate("WelcomeWindow", "Add", nullptr));
#if QT_CONFIG(shortcut)
        addButton->setShortcut(QCoreApplication::translate("WelcomeWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        piece_label->setText(QCoreApplication::translate("WelcomeWindow", "Piece", nullptr));
        bishopButton->setText(QCoreApplication::translate("WelcomeWindow", "Bishop", nullptr));
        kingButton->setText(QCoreApplication::translate("WelcomeWindow", "King", nullptr));
        knightButton->setText(QCoreApplication::translate("WelcomeWindow", "Knight", nullptr));
        color_label->setText(QCoreApplication::translate("WelcomeWindow", "Color", nullptr));
        whiteButton->setText(QCoreApplication::translate("WelcomeWindow", "White", nullptr));
        blackButton->setText(QCoreApplication::translate("WelcomeWindow", "Black", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPIECEWINDOW_H
