#include "Setting.h"

void Setting::initialize(QMap<Id, QString> &keys) {
  keys[Id::FetchAutomatically] = "global/autofetch/enable";
  keys[Id::AutomaticFetchPeriodInMinutes] = "global/autofetch/minutes";
  keys[Id::PushAfterEachCommit] = "global/autopush/enable";
  keys[Id::UpdateSubmodulesAfterPullAndClone] = "global/autoupdate/enable";
  keys[Id::PruneAfterFetch] = "global/autoprune/enable";
  keys[Id::FontFamily] = "editor/font/family";
  keys[Id::FontSize] = "editor/font/size";
  keys[Id::UseTabsForIndent] = "editor/indent/tabs";
  keys[Id::IndentWidth] = "editor/indent/width";
  keys[Id::TabWidth] = "editor/indent/tabwidth";
  keys[Id::ShowHeatmapInBlameMargin] = "editor/blame/heatmap";
  keys[Id::ColorTheme] = "window/theme";
  keys[Id::ShowFullRepoPath] = "window/path/full";
  keys[Id::HideLogAutomatically] = "window/log/hide";
  keys[Id::OpenSubmodulesInTabs] = "window/tabs/submodule";
  keys[Id::OpenAllReposInTabs] = "window/tabs/repository";
  keys[Id::HideMenuBar] = "window/view/menuBarHidden";
  keys[Id::ShowAvatars] = "window/view/avatarsVisible";
}

void Prompt::initialize(QMap<Kind, QString> &keys) {
  const QString root("window/prompt/");
  keys[Kind::Merge] = root + "merge";
  keys[Kind::Stash] = root + "stash";
  keys[Kind::Revert] = root + "revert";
  keys[Kind::CherryPick] = root + "cherrypick";
  keys[Kind::Directories] = root + "directories";
  keys[Kind::LargeFiles] = root + "largeFiles";
}
