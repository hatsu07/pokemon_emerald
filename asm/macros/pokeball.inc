@ -----------------------------------------------------------------------------
@ Serialized sprite resource records
@ -----------------------------------------------------------------------------

@ Emits one 8-byte struct CompressedSpriteSheet:
@   const void *data; u16 size; u16 tag;
.macro ball_sprite_sheet data:req, tag:req
    .4byte \data
    .2byte BALL_SPRITE_GFX_SIZE
    .2byte \tag
.endm

@ Emits one 8-byte struct CompressedSpritePalette:
@   const void *data; u16 tag; u16 padding;
.macro ball_sprite_palette data:req, tag:req
    .4byte \data
    .2byte \tag
    .2byte 0 @ structure padding
.endm

@ -----------------------------------------------------------------------------
@ struct OamData serializer
@ -----------------------------------------------------------------------------

@ Packs the four GBA OBJ attribute halfwords from semantic field values.
.macro sprite_oam_data y:req, affineMode:req, objMode:req, mosaic:req, bpp:req, shape:req, x:req, matrixNum:req, size:req, tileNum:req, priority:req, paletteNum:req, affineParam:req
    .2byte ((\y) & 0xFF) | (((\affineMode) & 3) << 8) | (((\objMode) & 3) << 10) | (((\mosaic) & 1) << 12) | (((\bpp) & 1) << 13) | (((\shape) & 3) << 14)
    .2byte ((\x) & 0x1FF) | (((\matrixNum) & 0x1F) << 9) | (((\size) & 3) << 14)
    .2byte ((\tileNum) & 0x3FF) | (((\priority) & 3) << 10) | (((\paletteNum) & 0xF) << 12)
    .2byte (\affineParam) & 0xFFFF
.endm

@ Emits the shared 16x16 Poke Ball OAM definition.
.macro ball_sprite_oam_data
    sprite_oam_data BALL_SPRITE_OAM_Y, BALL_SPRITE_OAM_AFFINE_MODE, BALL_SPRITE_OAM_OBJ_MODE, BALL_SPRITE_OAM_MOSAIC, BALL_SPRITE_OAM_BPP, BALL_SPRITE_OAM_SHAPE, BALL_SPRITE_OAM_X, BALL_SPRITE_OAM_MATRIX_NUM, BALL_SPRITE_OAM_SIZE, BALL_SPRITE_OAM_TILE_NUM, BALL_SPRITE_OAM_PRIORITY, BALL_SPRITE_OAM_PALETTE_NUM, BALL_SPRITE_OAM_AFFINE_PARAM
.endm

@ -----------------------------------------------------------------------------
@ union AnimCmd serializers (4 bytes per command)
@ -----------------------------------------------------------------------------

@ Displays a frame for duration ticks. hFlip/vFlip are boolean values.
.macro sprite_anim_frame_ex tileOffset:req, duration:req, hFlip:req, vFlip:req
    .2byte (\tileOffset) & SPRITE_ANIM_TILE_INDEX_MASK
    .byte (\duration) | (((\hFlip) & 1) << SPRITE_ANIM_HFLIP_SHIFT) | (((\vFlip) & 1) << SPRITE_ANIM_VFLIP_SHIFT)
    .byte 0 @ padding
.endm

@ Displays an unflipped frame for duration ticks.
.macro sprite_anim_frame tileOffset:req, duration:req
    sprite_anim_frame_ex \tileOffset, \duration, 0, 0
.endm

@ Jumps to command index target within the same animation sequence.
.macro sprite_anim_jump target:req
    .2byte SPRITE_ANIMCMD_JUMP
    .2byte \target
.endm

@ Terminates the animation sequence.
.macro sprite_anim_end
    .2byte SPRITE_ANIMCMD_END
    .2byte 0
.endm

@ Emits one AnimCmd sequence pointer.
.macro sprite_anim_sequence sequence:req
    .4byte \sequence
.endm

@ -----------------------------------------------------------------------------
@ union AffineAnimCmd serializers (8 bytes per command)
@ -----------------------------------------------------------------------------

@ Applies x/y scale values and signed 8-bit rotation for duration ticks.
.macro sprite_affine_anim_frame xScale:req, yScale:req, rotation:req, duration:req
    .2byte (\xScale) & 0xFFFF
    .2byte (\yScale) & 0xFFFF
    .2byte (((\duration) & 0xFF) << 8) | ((\rotation) & 0xFF)
    .2byte 0
.endm

@ Jumps to command index target within the same affine animation sequence.
.macro sprite_affine_anim_jump target:req
    .2byte SPRITE_AFFINEANIMCMD_JUMP
    .2byte \target
    .2byte 0
    .2byte 0
.endm

@ Terminates the affine animation sequence.
.macro sprite_affine_anim_end
    .2byte SPRITE_AFFINEANIMCMD_END
    .2byte 0
    .2byte 0
    .2byte 0
.endm

@ Emits one AffineAnimCmd sequence pointer.
.macro sprite_affine_anim_sequence sequence:req
    .4byte \sequence
.endm
