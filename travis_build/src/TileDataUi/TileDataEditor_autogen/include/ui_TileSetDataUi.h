/********************************************************************************
** Form generated from reading UI file 'TileSetDataUi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILESETDATAUI_H
#define UI_TILESETDATAUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TileSetDataUi
{
public:
    QFormLayout *formLayout;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *fileName;
    QPushButton *fileButton;
    QPushButton *deleteButton;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QSpinBox *width;
    QLabel *label_15;
    QSpinBox *height;
    QLabel *imageSize;
    QLabel *label_12;
    QSpinBox *count;
    QLabel *origImage;
    QVBoxLayout *verticalLayout;
    QRadioButton *size1;
    QRadioButton *size2;
    QRadioButton *size4;
    QSpacerItem *verticalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *image;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *TileSetDataUi)
    {
        if (TileSetDataUi->objectName().isEmpty())
            TileSetDataUi->setObjectName(QString::fromUtf8("TileSetDataUi"));
        TileSetDataUi->resize(777, 310);
        formLayout = new QFormLayout(TileSetDataUi);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_10 = new QLabel(TileSetDataUi);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fileName = new QLineEdit(TileSetDataUi);
        fileName->setObjectName(QString::fromUtf8("fileName"));

        horizontalLayout_2->addWidget(fileName);

        fileButton = new QPushButton(TileSetDataUi);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        fileButton->setIcon(icon);

        horizontalLayout_2->addWidget(fileButton);

        deleteButton = new QPushButton(TileSetDataUi);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        deleteButton->setIcon(icon1);

        horizontalLayout_2->addWidget(deleteButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_11 = new QLabel(TileSetDataUi);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        width = new QSpinBox(TileSetDataUi);
        width->setObjectName(QString::fromUtf8("width"));
        width->setMaximum(20000);

        horizontalLayout->addWidget(width);

        label_15 = new QLabel(TileSetDataUi);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout->addWidget(label_15);

        height = new QSpinBox(TileSetDataUi);
        height->setObjectName(QString::fromUtf8("height"));
        height->setMaximum(20000);

        horizontalLayout->addWidget(height);

        imageSize = new QLabel(TileSetDataUi);
        imageSize->setObjectName(QString::fromUtf8("imageSize"));

        horizontalLayout->addWidget(imageSize);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_12 = new QLabel(TileSetDataUi);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_12);

        count = new QSpinBox(TileSetDataUi);
        count->setObjectName(QString::fromUtf8("count"));
        count->setMinimum(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, count);

        origImage = new QLabel(TileSetDataUi);
        origImage->setObjectName(QString::fromUtf8("origImage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(origImage->sizePolicy().hasHeightForWidth());
        origImage->setSizePolicy(sizePolicy);
        origImage->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, origImage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        size1 = new QRadioButton(TileSetDataUi);
        buttonGroup = new QButtonGroup(TileSetDataUi);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(size1);
        size1->setObjectName(QString::fromUtf8("size1"));
        size1->setChecked(true);

        verticalLayout->addWidget(size1);

        size2 = new QRadioButton(TileSetDataUi);
        buttonGroup->addButton(size2);
        size2->setObjectName(QString::fromUtf8("size2"));

        verticalLayout->addWidget(size2);

        size4 = new QRadioButton(TileSetDataUi);
        buttonGroup->addButton(size4);
        size4->setObjectName(QString::fromUtf8("size4"));

        verticalLayout->addWidget(size4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        formLayout->setLayout(4, QFormLayout::LabelRole, verticalLayout);

        scrollArea = new QScrollArea(TileSetDataUi);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 680, 138));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        image = new QLabel(scrollAreaWidgetContents);
        image->setObjectName(QString::fromUtf8("image"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy2);
        image->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(image);

        scrollArea->setWidget(scrollAreaWidgetContents);

        formLayout->setWidget(4, QFormLayout::FieldRole, scrollArea);


        retranslateUi(TileSetDataUi);

        QMetaObject::connectSlotsByName(TileSetDataUi);
    } // setupUi

    void retranslateUi(QWidget *TileSetDataUi)
    {
        TileSetDataUi->setWindowTitle(QApplication::translate("TileSetDataUi", "Form", nullptr));
        label_10->setText(QApplication::translate("TileSetDataUi", "Filename", nullptr));
#ifndef QT_NO_TOOLTIP
        fileName->setToolTip(QApplication::translate("TileSetDataUi", "The filename of the tiles image.", nullptr));
#endif // QT_NO_TOOLTIP
        fileButton->setText(QString());
        deleteButton->setText(QString());
        label_11->setText(QApplication::translate("TileSetDataUi", "Size", nullptr));
#ifndef QT_NO_TOOLTIP
        width->setToolTip(QApplication::translate("TileSetDataUi", "Size of this element or of one tile, if the image contains multiple tiles in a tileset.", nullptr));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("TileSetDataUi", "x", nullptr));
#ifndef QT_NO_TOOLTIP
        height->setToolTip(QApplication::translate("TileSetDataUi", "Size of this element or of one tile, if the image contains multiple tiles in a tileset.", nullptr));
#endif // QT_NO_TOOLTIP
        imageSize->setText(QString());
        label_12->setText(QApplication::translate("TileSetDataUi", "Count", nullptr));
#ifndef QT_NO_TOOLTIP
        count->setToolTip(QApplication::translate("TileSetDataUi", "How many frames  / tiles this image contains.", nullptr));
#endif // QT_NO_TOOLTIP
        origImage->setText(QApplication::translate("TileSetDataUi", "image", nullptr));
        size1->setText(QApplication::translate("TileSetDataUi", "&1x", nullptr));
        size2->setText(QApplication::translate("TileSetDataUi", "&2x", nullptr));
        size4->setText(QApplication::translate("TileSetDataUi", "&4x", nullptr));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TileSetDataUi: public Ui_TileSetDataUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILESETDATAUI_H
