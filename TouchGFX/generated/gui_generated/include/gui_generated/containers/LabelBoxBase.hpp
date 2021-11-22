/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef LABELBOXBASE_HPP
#define LABELBOXBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class LabelBoxBase : public touchgfx::Container
{
public:
    LabelBoxBase();
    virtual ~LabelBoxBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box border;
    touchgfx::Box background;
    touchgfx::TextArea text;

private:

};

#endif // LABELBOXBASE_HPP