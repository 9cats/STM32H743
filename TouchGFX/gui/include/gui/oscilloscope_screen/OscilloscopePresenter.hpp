#ifndef OSCILLOSCOPEPRESENTER_HPP
#define OSCILLOSCOPEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class OscilloscopeView;

class OscilloscopePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    OscilloscopePresenter(OscilloscopeView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~OscilloscopePresenter() {};

private:
    OscilloscopePresenter();

    OscilloscopeView& view;
};

#endif // OSCILLOSCOPEPRESENTER_HPP
