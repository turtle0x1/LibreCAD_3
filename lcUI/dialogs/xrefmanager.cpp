#include "xrefmanager.h"
#include "ui_xrefmanager.h"

using namespace lc::ui::dialog;

XrefManager::XrefManager(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::XrefManager) {
        ui->setupUi(this);

        // setDocument(std::move(document));
        // ui->lpView->setModel(_model);
        // ui->lpView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        // ui->lpView->horizontalHeader()->setSectionResizeMode(widgets::LinePatternModel::NAME, QHeaderView::Stretch);

        show();
    }
