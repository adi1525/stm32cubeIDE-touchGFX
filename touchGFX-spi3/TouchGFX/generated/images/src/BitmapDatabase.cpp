// 4.12.2 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB565 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0xe05020df
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

extern const unsigned char _blue_buttons_round_edge_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID = 0, Size: 60x60 pixels
extern const unsigned char _dark_backgrounds_main_bg_texture_480x272px[]; // BITMAP_DARK_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID = 1, Size: 480x272 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _blue_buttons_round_edge_icon_button, 0, 60, 60, 7, 6, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _dark_backgrounds_main_bg_texture_480x272px, 0, 480, 272, 0, 0, 480, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 272, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
