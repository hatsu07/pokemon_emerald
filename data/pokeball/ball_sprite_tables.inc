.include "constants/pokeball.inc"
.include "asm/macros/pokeball.inc"

.globl gBallSpriteSheets
gBallSpriteSheets: @ 0x082FCE0C
    ball_sprite_sheet gBallGfx_Poke,    GFX_TAG_POKE_BALL
    ball_sprite_sheet gBallGfx_Great,   GFX_TAG_GREAT_BALL
    ball_sprite_sheet gBallGfx_Safari,  GFX_TAG_SAFARI_BALL
    ball_sprite_sheet gBallGfx_Ultra,   GFX_TAG_ULTRA_BALL
    ball_sprite_sheet gBallGfx_Master,  GFX_TAG_MASTER_BALL
    ball_sprite_sheet gBallGfx_Net,     GFX_TAG_NET_BALL
    ball_sprite_sheet gBallGfx_Dive,    GFX_TAG_DIVE_BALL
    ball_sprite_sheet gBallGfx_Nest,    GFX_TAG_NEST_BALL
    ball_sprite_sheet gBallGfx_Repeat,  GFX_TAG_REPEAT_BALL
    ball_sprite_sheet gBallGfx_Timer,   GFX_TAG_TIMER_BALL
    ball_sprite_sheet gBallGfx_Luxury,  GFX_TAG_LUXURY_BALL
    ball_sprite_sheet gBallGfx_Premier, GFX_TAG_PREMIER_BALL

.globl gBallSpritePalettes
gBallSpritePalettes: @ 0x082FCE6C
    ball_sprite_palette gBallPal_Poke,    GFX_TAG_POKE_BALL
    ball_sprite_palette gBallPal_Great,   GFX_TAG_GREAT_BALL
    ball_sprite_palette gBallPal_Safari,  GFX_TAG_SAFARI_BALL
    ball_sprite_palette gBallPal_Ultra,   GFX_TAG_ULTRA_BALL
    ball_sprite_palette gBallPal_Master,  GFX_TAG_MASTER_BALL
    ball_sprite_palette gBallPal_Net,     GFX_TAG_NET_BALL
    ball_sprite_palette gBallPal_Dive,    GFX_TAG_DIVE_BALL
    ball_sprite_palette gBallPal_Nest,    GFX_TAG_NEST_BALL
    ball_sprite_palette gBallPal_Repeat,  GFX_TAG_REPEAT_BALL
    ball_sprite_palette gBallPal_Timer,   GFX_TAG_TIMER_BALL
    ball_sprite_palette gBallPal_Luxury,  GFX_TAG_LUXURY_BALL
    ball_sprite_palette gBallPal_Premier, GFX_TAG_PREMIER_BALL

.globl gBallSpriteOamAndAnimData
gBallSpriteOamAndAnimData: @ 0x082FCECC
    .incbin "baserom.gba", 0x2fcecc, 0xc8

.if (. - gBallSpriteOamAndAnimData) != 0xC8
    .error "gBallSpriteOamAndAnimData must be 0xC8 bytes"
.endif
