/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-Studio-CLA-applies
 *
 * MuseScore Studio
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore Limited
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

#include "uicomponents/view/abstractmenumodel.h"

#include "muse_framework_config.h"

#include "modularity/ioc.h"
#include "actions/iactionsdispatcher.h"
#include "extensions/iextensionsprovider.h"
#include "global/iglobalconfiguration.h"
#ifdef MUSE_MODULE_MUSESAMPLER
#include "musesampler/imusesamplerinfo.h"
#endif
#include "ui/imainwindow.h"
#include "ui/inavigationcontroller.h"
#include "ui/iuiactionsregister.h"
#include "ui/iuiconfiguration.h"
#include "update/iupdateconfiguration.h"
#include "workspace/iworkspacemanager.h"

namespace ae::appshell {

class AppMenuModel : public muse::uicomponents::AbstractMenuModel
{
    Q_OBJECT

public:
    explicit AppMenuModel(QObject* parent = nullptr);

    Q_INVOKABLE void load() override;
    Q_INVOKABLE bool isGlobalMenuAvailable();

private:
    using muse::uicomponents::AbstractMenuModel::makeMenuItem;
    muse::uicomponents::MenuItem* makeMenuItem(const muse::actions::ActionCode& actionCode, muse::uicomponents::MenuItemRole role);

    muse::uicomponents::MenuItem* makeFileMenu();
    muse::uicomponents::MenuItem* makeEditMenu();
    muse::uicomponents::MenuItem* makeViewMenu();
    muse::uicomponents::MenuItem* makeAddMenu();
    muse::uicomponents::MenuItem* makeFormatMenu();
    muse::uicomponents::MenuItem* makeToolsMenu();
    muse::uicomponents::MenuItem* makePluginsMenu();
    muse::uicomponents::MenuItemList makePluginsMenuSubitems();
    muse::uicomponents::MenuItem* makeHelpMenu(bool addDiagnosticsSubMenu);
    muse::uicomponents::MenuItem* makeDiagnosticsMenu();

    muse::uicomponents::MenuItemList makeRecentScoresItems();
    muse::uicomponents::MenuItemList appendClearRecentSection(const muse::uicomponents::MenuItemList& recentScores);

    muse::uicomponents::MenuItemList makeNotesItems();
    muse::uicomponents::MenuItemList makeIntervalsItems();
    muse::uicomponents::MenuItemList makeTupletsItems();
    muse::uicomponents::MenuItemList makeMeasuresItems();
    muse::uicomponents::MenuItemList makeFramesItems();
    muse::uicomponents::MenuItemList makeFramesAppendItems();
    muse::uicomponents::MenuItemList makeTextItems();
    muse::uicomponents::MenuItemList makeLinesItems();
    muse::uicomponents::MenuItemList makeChordAndFretboardDiagramsItems();
    muse::uicomponents::MenuItemList makeToolbarsItems();
    muse::uicomponents::MenuItemList makeWorkspacesItems();
    muse::uicomponents::MenuItemList makeShowItems();
    muse::uicomponents::MenuItemList makePluginsItems();

    std::shared_ptr<muse::uicomponents::AbstractMenuModel> m_workspacesMenuModel;
};
}
