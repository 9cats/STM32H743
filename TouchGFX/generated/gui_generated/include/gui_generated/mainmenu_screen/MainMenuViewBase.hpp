/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINMENUVIEWBASE_HPP
#define MAINMENUVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class MainMenuViewBase : public touchgfx::View<MainMenuPresenter>
{
public:
    MainMenuViewBase();
    virtual ~MainMenuViewBase() {}
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);

    /*
     * Virtual Action Handlers
     */
    virtual void ToggleButtonClicked()
    {
        // Override and implement this function in MainMenu
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::MoveAnimator< touchgfx::ScalableImage > biter;
    touchgfx::ToggleButton toggleButton;
    touchgfx::TextArea bitworkshop;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainMenuViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MAINMENUVIEWBASE_HPP
