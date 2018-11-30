#pragma once

#include <QDialog>
#include <QHeaderView>

#include <dialogs/xrefmanager.h>

namespace Ui {
    class XrefManager;
}

namespace lc {
    namespace ui {
        namespace dialog {
            /**
             * \brief Create a new window which shows a list of line patterns
             */
            class XrefManager : public QDialog {
                Q_OBJECT

                public:
                    /**
                     * \brief Create window
                     * \param document Document which contains the DXFLinePatterns
                     * \param parent Parent widget
                     */
                    XrefManager(QWidget* parent = 0);
                signals:
                    void openDialog();
                private:
                    Ui::XrefManager* ui;
            };
        }
    }
}
