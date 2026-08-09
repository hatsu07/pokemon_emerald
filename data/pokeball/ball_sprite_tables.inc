.include "constants/pokeball.inc"
.include "asm/macros/pokeball.inc"

@ -----------------------------------------------------------------------------
@ Compressed Poke Ball graphics
@
@ Each entry describes three complete 16x16 4bpp frames (12 tiles, 0x180 bytes).
@ The tag identifies the matching tile allocation in sprite VRAM.
@ -----------------------------------------------------------------------------
.globl gBallSpriteSheets
gBallSpriteSheets: @ 0x082FCE0C
    ball_sprite_sheet gBallGfx_Poke,    GFX_TAG_POKE_BALL    @ Poke Ball
    ball_sprite_sheet gBallGfx_Great,   GFX_TAG_GREAT_BALL   @ Great Ball
    ball_sprite_sheet gBallGfx_Safari,  GFX_TAG_SAFARI_BALL  @ Safari Ball
    ball_sprite_sheet gBallGfx_Ultra,   GFX_TAG_ULTRA_BALL   @ Ultra Ball
    ball_sprite_sheet gBallGfx_Master,  GFX_TAG_MASTER_BALL  @ Master Ball
    ball_sprite_sheet gBallGfx_Net,     GFX_TAG_NET_BALL     @ Net Ball
    ball_sprite_sheet gBallGfx_Dive,    GFX_TAG_DIVE_BALL    @ Dive Ball
    ball_sprite_sheet gBallGfx_Nest,    GFX_TAG_NEST_BALL    @ Nest Ball
    ball_sprite_sheet gBallGfx_Repeat,  GFX_TAG_REPEAT_BALL  @ Repeat Ball
    ball_sprite_sheet gBallGfx_Timer,   GFX_TAG_TIMER_BALL   @ Timer Ball
    ball_sprite_sheet gBallGfx_Luxury,  GFX_TAG_LUXURY_BALL  @ Luxury Ball
    ball_sprite_sheet gBallGfx_Premier, GFX_TAG_PREMIER_BALL @ Premier Ball

.if (. - gBallSpriteSheets) != (BALL_SPRITE_COUNT * COMPRESSED_SPRITE_SHEET_ENTRY_SIZE)
    .error "gBallSpriteSheets has an invalid size"
.endif

@ -----------------------------------------------------------------------------
@ Compressed Poke Ball palettes
@
@ Each entry points to one compressed 16-color OBJ palette. The palette tag is
@ intentionally identical to the corresponding graphics tag.
@ -----------------------------------------------------------------------------
.globl gBallSpritePalettes
gBallSpritePalettes: @ 0x082FCE6C
    ball_sprite_palette gBallPal_Poke,    GFX_TAG_POKE_BALL    @ Poke Ball
    ball_sprite_palette gBallPal_Great,   GFX_TAG_GREAT_BALL   @ Great Ball
    ball_sprite_palette gBallPal_Safari,  GFX_TAG_SAFARI_BALL  @ Safari Ball
    ball_sprite_palette gBallPal_Ultra,   GFX_TAG_ULTRA_BALL   @ Ultra Ball
    ball_sprite_palette gBallPal_Master,  GFX_TAG_MASTER_BALL  @ Master Ball
    ball_sprite_palette gBallPal_Net,     GFX_TAG_NET_BALL     @ Net Ball
    ball_sprite_palette gBallPal_Dive,    GFX_TAG_DIVE_BALL    @ Dive Ball
    ball_sprite_palette gBallPal_Nest,    GFX_TAG_NEST_BALL    @ Nest Ball
    ball_sprite_palette gBallPal_Repeat,  GFX_TAG_REPEAT_BALL  @ Repeat Ball
    ball_sprite_palette gBallPal_Timer,   GFX_TAG_TIMER_BALL   @ Timer Ball
    ball_sprite_palette gBallPal_Luxury,  GFX_TAG_LUXURY_BALL  @ Luxury Ball
    ball_sprite_palette gBallPal_Premier, GFX_TAG_PREMIER_BALL @ Premier Ball

.if (. - gBallSpritePalettes) != (BALL_SPRITE_COUNT * COMPRESSED_SPRITE_PALETTE_ENTRY_SIZE)
    .error "gBallSpritePalettes has an invalid size"
.endif

@ -----------------------------------------------------------------------------
@ Shared OAM and animation data
@ -----------------------------------------------------------------------------
.globl gBallSpriteOamData
gBallSpriteOamData: @ 0x082FCECC
    @ 16x16 square OBJ, affine double-size mode, 4bpp, priority 2.
    @ The affine matrix number and initial tile/palette numbers are all zero.
    ball_sprite_oam_data

.if (. - gBallSpriteOamData) != 8
    .error "gBallSpriteOamData must be 8 bytes"
.endif

@ A 16x16 4bpp frame occupies four tiles. Offsets 0/4/8 select the three
@ frames stored in the 0x180-byte sheet. Offset 12 is also present in the ROM,
@ but points immediately past those 12 tiles; it belongs to the group marked
@ unused in the corresponding decompilation. The first four sequences loop
@ forever, while the following three are finite sequences.

gBallSpriteAnim_LoopFrame0: @ 0x082FCED4
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_0, BALL_ANIM_DURATION_TRANSITION
    sprite_anim_jump 0 @ repeat the first command forever

gBallSpriteAnim_LoopFrame1: @ 0x082FCEDC
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_1, BALL_ANIM_DURATION_SINGLE
    sprite_anim_jump 0

gBallSpriteAnim_LoopFrame2: @ 0x082FCEE4
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_2, BALL_ANIM_DURATION_TRANSITION
    sprite_anim_jump 0

gBallSpriteAnim_LoopTileOffset12_Unused: @ 0x082FCEEC
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_UNUSED_12, BALL_ANIM_DURATION_SINGLE
    sprite_anim_jump 0

gBallSpriteAnim_Frame0ThenEnd: @ 0x082FCEF4
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_0, BALL_ANIM_DURATION_SINGLE
    sprite_anim_end

gBallSpriteAnim_Frame1ToFrame2: @ 0x082FCEFC
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_1, BALL_ANIM_DURATION_TRANSITION
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_2, BALL_ANIM_DURATION_TRANSITION
    sprite_anim_end

gBallSpriteAnim_Frame1ToFrame0: @ 0x082FCF08
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_1, BALL_ANIM_DURATION_TRANSITION
    sprite_anim_frame BALL_SPRITE_TILE_OFFSET_FRAME_0, BALL_ANIM_DURATION_TRANSITION
    sprite_anim_end

@ Seven animation choices shared by every ball SpriteTemplate.
@ Entries 0-2 are finite animations; entries 3-6 are single-frame loops
@ retained from the ROM and appear to be unused.
.globl gBallSpriteAnimSequences
gBallSpriteAnimSequences: @ 0x082FCF14
    sprite_anim_sequence gBallSpriteAnim_Frame0ThenEnd  @ animation 0
    sprite_anim_sequence gBallSpriteAnim_Frame1ToFrame2 @ animation 1
    sprite_anim_sequence gBallSpriteAnim_Frame1ToFrame0 @ animation 2
    sprite_anim_sequence gBallSpriteAnim_LoopFrame0      @ animation 3
    sprite_anim_sequence gBallSpriteAnim_LoopFrame2      @ animation 4
    sprite_anim_sequence gBallSpriteAnim_LoopFrame1      @ animation 5
    sprite_anim_sequence gBallSpriteAnim_LoopTileOffset12_Unused @ animation 6, apparently unused

.if (. - gBallSpriteAnimSequences) != (BALL_SPRITE_ANIM_SEQUENCE_COUNT * SPRITE_ANIM_SEQUENCE_POINTER_SIZE)
    .error "gBallSpriteAnimSequences must contain 7 pointers"
.endif

@ Affine animation 0: no scale or rotation delta; loop forever.
gBallSpriteAffineAnim_NoRotation: @ 0x082FCF30
    sprite_affine_anim_frame SPRITE_AFFINE_SCALE_NO_CHANGE, SPRITE_AFFINE_SCALE_NO_CHANGE, BALL_AFFINE_ROTATION_NONE, BALL_AFFINE_DURATION_ONE
    sprite_affine_anim_jump 0

@ Affine animation 1: rotate right by three units per tick.
gBallSpriteAffineAnim_RotateRight: @ 0x082FCF40
    sprite_affine_anim_frame SPRITE_AFFINE_SCALE_NO_CHANGE, SPRITE_AFFINE_SCALE_NO_CHANGE, BALL_AFFINE_ROTATION_RIGHT, BALL_AFFINE_DURATION_ONE
    sprite_affine_anim_jump 0

@ Affine animation 2: rotate left by three units per tick.
gBallSpriteAffineAnim_RotateLeft: @ 0x082FCF50
    sprite_affine_anim_frame SPRITE_AFFINE_SCALE_NO_CHANGE, SPRITE_AFFINE_SCALE_NO_CHANGE, BALL_AFFINE_ROTATION_LEFT, BALL_AFFINE_DURATION_ONE
    sprite_affine_anim_jump 0

@ Affine animation 3: immediately set identity scale, then stop.
gBallSpriteAffineAnim_IdentityScale: @ 0x082FCF60
    sprite_affine_anim_frame SPRITE_AFFINE_SCALE_IDENTITY, SPRITE_AFFINE_SCALE_IDENTITY, BALL_AFFINE_ROTATION_NONE, BALL_AFFINE_DURATION_IMMEDIATE
    sprite_affine_anim_end

@ Affine animation 4: rotate by +25 units per tick; loop forever.
gBallSpriteAffineAnim_RotatePlus25: @ 0x082FCF70
    sprite_affine_anim_frame SPRITE_AFFINE_SCALE_NO_CHANGE, SPRITE_AFFINE_SCALE_NO_CHANGE, BALL_AFFINE_ROTATION_PLUS_25, BALL_AFFINE_DURATION_ONE
    sprite_affine_anim_jump 0

@ Five affine animation choices shared by every ball SpriteTemplate.
.globl gBallSpriteAffineAnimSequences
gBallSpriteAffineAnimSequences: @ 0x082FCF80
    sprite_affine_anim_sequence gBallSpriteAffineAnim_NoRotation   @ affine animation 0
    sprite_affine_anim_sequence gBallSpriteAffineAnim_RotateRight  @ affine animation 1
    sprite_affine_anim_sequence gBallSpriteAffineAnim_RotateLeft   @ affine animation 2
    sprite_affine_anim_sequence gBallSpriteAffineAnim_IdentityScale @ affine animation 3
    sprite_affine_anim_sequence gBallSpriteAffineAnim_RotatePlus25 @ affine animation 4

.if (. - gBallSpriteAffineAnimSequences) != (BALL_SPRITE_AFFINE_SEQUENCE_COUNT * SPRITE_ANIM_SEQUENCE_POINTER_SIZE)
    .error "gBallSpriteAffineAnimSequences must contain 5 pointers"
.endif

@ -----------------------------------------------------------------------------
@ Poke Ball SpriteTemplates
@ -----------------------------------------------------------------------------
.globl gBallSpriteTemplates
.globl gUnknown_82FCF94
gBallSpriteTemplates: @ 0x082FCF94
gUnknown_82FCF94:
    rodata_sprite_template GFX_TAG_POKE_BALL       , GFX_TAG_POKE_BALL       , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 0
    rodata_sprite_template GFX_TAG_GREAT_BALL      , GFX_TAG_GREAT_BALL      , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 1
    rodata_sprite_template GFX_TAG_SAFARI_BALL     , GFX_TAG_SAFARI_BALL     , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 2
    rodata_sprite_template GFX_TAG_ULTRA_BALL      , GFX_TAG_ULTRA_BALL      , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 3
    rodata_sprite_template GFX_TAG_MASTER_BALL     , GFX_TAG_MASTER_BALL     , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 4
    rodata_sprite_template GFX_TAG_NET_BALL        , GFX_TAG_NET_BALL        , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 5
    rodata_sprite_template GFX_TAG_DIVE_BALL       , GFX_TAG_DIVE_BALL       , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 6
    rodata_sprite_template GFX_TAG_NEST_BALL       , GFX_TAG_NEST_BALL       , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 7
    rodata_sprite_template GFX_TAG_REPEAT_BALL     , GFX_TAG_REPEAT_BALL     , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 8
    rodata_sprite_template GFX_TAG_TIMER_BALL      , GFX_TAG_TIMER_BALL      , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 9
    rodata_sprite_template GFX_TAG_LUXURY_BALL     , GFX_TAG_LUXURY_BALL     , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 10
    rodata_sprite_template GFX_TAG_PREMIER_BALL    , GFX_TAG_PREMIER_BALL    , gBallSpriteOamData, gBallSpriteAnimSequences, NULL, gBallSpriteAffineAnimSequences, SpriteCB_TestBallThrow @ ball 11

.if (. - gBallSpriteTemplates) != (BALL_SPRITE_COUNT * 24)
    .error "gBallSpriteTemplates has an invalid size"
.endif
