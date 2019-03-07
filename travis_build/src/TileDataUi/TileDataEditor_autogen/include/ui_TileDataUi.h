/********************************************************************************
** Form generated from reading UI file 'TileDataUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILEDATAUI_H
#define UI_TILEDATAUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TileDataUi
{
public:
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *id;
    QLabel *label_2;
    QLineEdit *category;
    QTabWidget *tabWidget;
    QLabel *label_3;
    QLineEdit *title;
    QLabel *label_4;
    QPlainTextEdit *description;
    QLabel *label_5;
    QLineEdit *author;
    QLabel *label_6;
    QSpinBox *powerProduction;
    QLabel *label_7;
    QSpinBox *waterProduction;
    QLabel *label_8;
    QSpinBox *upkeepCost;
    QLabel *label_9;
    QSpinBox *buildCost;

    void setupUi(QWidget *TileDataUi)
    {
        if (TileDataUi->objectName().isEmpty())
            TileDataUi->setObjectName(QString::fromUtf8("TileDataUi"));
        TileDataUi->resize(792, 678);
        formLayout_2 = new QFormLayout(TileDataUi);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(TileDataUi);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        id = new QLineEdit(TileDataUi);
        id->setObjectName(QString::fromUtf8("id"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, id);

        label_2 = new QLabel(TileDataUi);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        category = new QLineEdit(TileDataUi);
        category->setObjectName(QString::fromUtf8("category"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, category);

        tabWidget = new QTabWidget(TileDataUi);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 245));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, tabWidget);

        label_3 = new QLabel(TileDataUi);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_3);

        title = new QLineEdit(TileDataUi);
        title->setObjectName(QString::fromUtf8("title"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, title);

        label_4 = new QLabel(TileDataUi);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_4);

        description = new QPlainTextEdit(TileDataUi);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, description);

        label_5 = new QLabel(TileDataUi);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_5);

        author = new QLineEdit(TileDataUi);
        author->setObjectName(QString::fromUtf8("author"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, author);

        label_6 = new QLabel(TileDataUi);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_6);

        powerProduction = new QSpinBox(TileDataUi);
        powerProduction->setObjectName(QString::fromUtf8("powerProduction"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, powerProduction);

        label_7 = new QLabel(TileDataUi);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, label_7);

        waterProduction = new QSpinBox(TileDataUi);
        waterProduction->setObjectName(QString::fromUtf8("waterProduction"));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, waterProduction);

        label_8 = new QLabel(TileDataUi);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, label_8);

        upkeepCost = new QSpinBox(TileDataUi);
        upkeepCost->setObjectName(QString::fromUtf8("upkeepCost"));

        formLayout_2->setWidget(12, QFormLayout::FieldRole, upkeepCost);

        label_9 = new QLabel(TileDataUi);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(13, QFormLayout::LabelRole, label_9);

        buildCost = new QSpinBox(TileDataUi);
        buildCost->setObjectName(QString::fromUtf8("buildCost"));

        formLayout_2->setWidget(13, QFormLayout::FieldRole, buildCost);


        retranslateUi(TileDataUi);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TileDataUi);
    } // setupUi

    void retranslateUi(QWidget *TileDataUi)
    {
        TileDataUi->setWindowTitle(QApplication::translate("TileDataUi", "Form", nullptr));
        label->setText(QApplication::translate("TileDataUi", "ID", nullptr));
#ifndef QT_NO_TOOLTIP
        id->setToolTip(QApplication::translate("TileDataUi", "The ID of this item. Must be unique and can be referenced in the code.", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("TileDataUi", "Category", nullptr));
#ifndef QT_NO_TOOLTIP
        category->setToolTip(QApplication::translate("TileDataUi", "The  category this item resides in. Categories are used for the building menu in-game and for sorting the items in the editors tree view", nullptr));
#endif // QT_NO_TOOLTIP
        category->setText(QString());
        label_3->setText(QApplication::translate("TileDataUi", "Title", nullptr));
#ifndef QT_NO_TOOLTIP
        title->setToolTip(QApplication::translate("TileDataUi", "The items title. It's shown ingame and in the editors tree-view", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("TileDataUi", "Description", nullptr));
#ifndef QT_NO_TOOLTIP
        description->setToolTip(QApplication::translate("TileDataUi", "Description of the item that is shown in it's details", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("TileDataUi", "Author", nullptr));
#ifndef QT_NO_TOOLTIP
        author->setToolTip(QApplication::translate("TileDataUi", "Author of this item", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("TileDataUi", "Power production", nullptr));
#ifndef QT_NO_TOOLTIP
        powerProduction->setToolTip(QApplication::translate("TileDataUi", "Power production of this item. Negative values means power consumption.", nullptr));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("TileDataUi", "Water production", nullptr));
#ifndef QT_NO_TOOLTIP
        waterProduction->setToolTip(QApplication::translate("TileDataUi", "Water production of this item. Negative values means power consumption.", nullptr));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("TileDataUi", "Upkeep cost", nullptr));
#ifndef QT_NO_TOOLTIP
        upkeepCost->setToolTip(QApplication::translate("TileDataUi", "Monthly upkeep cost", nullptr));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("TileDataUi", "Build cost", nullptr));
#ifndef QT_NO_TOOLTIP
        buildCost->setToolTip(QApplication::translate("TileDataUi", "Buildcost", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class TileDataUi: public Ui_TileDataUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILEDATAUI_H
