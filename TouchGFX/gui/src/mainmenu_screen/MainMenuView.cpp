#include <gui/mainmenu_screen/MainMenuView.hpp>

MainMenuView::MainMenuView()
{

}

void MainMenuView::setupScreen()
{
    MainMenuViewBase::setupScreen();
}

void MainMenuView::tearDownScreen()
{
    MainMenuViewBase::tearDownScreen();
}

void MainMenuView::ToggleButtonClicked()
{
    static uint8_t flag = 0;
    if(flag) {
    	//Move biter to x:0, y:0 with SineIn easing in 1200 ms (72 Ticks)
    	biter.clearMoveAnimationEndedAction();
    	biter.startMoveAnimation(0  , 0, 36, touchgfx::EasingEquations::sineEaseIn, touchgfx::EasingEquations::sineEaseIn);
    }
    else {
    	biter.clearMoveAnimationEndedAction();
    	biter.startMoveAnimation(400, 0, 36, touchgfx::EasingEquations::sineEaseIn, touchgfx::EasingEquations::sineEaseIn);
    }
    flag = !flag;
}
