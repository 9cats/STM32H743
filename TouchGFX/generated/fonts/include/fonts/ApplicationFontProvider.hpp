/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
#define TOUCHGFX_APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

namespace touchgfx
{
class FlashDataReader;
}

struct Typography
{
    static const touchgfx::FontId OUTPUT = 0;
    static const touchgfx::FontId MAIN = 1;
    static const touchgfx::FontId CODE = 2;
    static const touchgfx::FontId DESCRIPTION = 3;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId OUTPUT = 0;      // SourceSansPro_Bold_128_4bpp
    static const touchgfx::FontId MAIN = 1;        // SourceSansPro_Bold_30_4bpp
    static const touchgfx::FontId CODE = 2;        // SourceCodePro_Regular_16_4bpp
    static const touchgfx::FontId DESCRIPTION = 3; // SourceCodePro_Regular_10_4bpp
    static const uint16_t NUMBER_OF_FONTS = 4;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);

    static void setFlashReader(touchgfx::FlashDataReader* /* flashReader */)
    {
    }
    static touchgfx::FlashDataReader* getFlashReader()
    {
        return 0;
    }
};

#endif // TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
