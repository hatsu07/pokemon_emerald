@ Emits one 8-byte CompressedSpriteSheet record.
.macro ball_sprite_sheet data:req, tag:req
    .4byte \data
    .2byte BALL_SPRITE_GFX_SIZE
    .2byte \tag
.endm

@ Emits one 8-byte CompressedSpritePalette record.
.macro ball_sprite_palette data:req, tag:req
    .4byte \data
    .2byte \tag
    .2byte 0
.endm
