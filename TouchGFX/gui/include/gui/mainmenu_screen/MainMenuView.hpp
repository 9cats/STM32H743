#ifndef MAINMENUVIEW_HPP
#define MAINMENUVIEW_HPP

#include <gui_generated/mainmenu_screen/MainMenuViewBase.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>

class MainMenuView : public MainMenuViewBase
{
public:
    MainMenuView();
    virtual ~MainMenuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

protected:
    /* Add User Event Handle Function */
    virtual void ToggleButtonClicked();
};

#endif // MAINMENUVIEW_HPP
