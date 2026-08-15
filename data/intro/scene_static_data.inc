@ Intro scene static sprite metadata, ROM 0x085C5AEC-0x085C5D17.
@ Structure and naming follow the proven upstream intro declarations, while
@ pointer targets remain tied to the current JP build graph.

.set INTRO_TAG_VOLBEAT,   1500
.set INTRO_TAG_TORCHIC,   1501
.set INTRO_TAG_MANECTRIC, 1502
.set INTRO_TAG_LIGHTNING, 1503
.set INTRO_TAG_BUBBLES,   1504
.set INTRO_TAG_SPARKLE,   1505

@ Semantic aliases for already-owned graphics/palette storage.
.globl gIntroSparkle_Gfx
.set gIntroSparkle_Gfx, gLz77Asset_08D8D1EC

.globl gIntroLightning_Pal
.set gIntroLightning_Pal, gIntroData_08D8BA58 - 0x20

.globl gIntroVolbeat_Gfx
.set gIntroVolbeat_Gfx, sLz77Block_08D85F34

.globl gIntroTorchic_Gfx
.set gIntroTorchic_Gfx, gLz77Asset_08D86114

.globl gIntroManectric_Gfx
.set gIntroManectric_Gfx, gLz77Asset_08D86534

.globl gIntroVolbeat_Pal
.set gIntroVolbeat_Pal, gIntroCreditsFlygonPalette - 0x60

.globl gIntroTorchic_Pal
.set gIntroTorchic_Pal, gIntroCreditsFlygonPalette - 0x40

.globl gIntroManectric_Pal
.set gIntroManectric_Pal, gIntroCreditsFlygonPalette - 0x20

.globl gIntroLightning_Gfx
.set gIntroLightning_Gfx, gLz77Asset_08D8B7F0

sUnusedData: @ 0x085C5AEC
	.byte 0x02, 0x03, 0x04, 0x05, 0x01, 0x01, 0x01, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x02, 0x0D
	.byte 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x02, 0x0D, 0x0E, 0x0F
	.byte 0x10, 0x11, 0x12, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x02, 0x0D, 0x0E, 0x0F, 0x10
	.byte 0x11, 0x12, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x00

.globl sSpriteSheet_Sparkle
sSpriteSheet_Sparkle: @ 0x085C5B28
	rodata_compressed_sprite_sheet gIntroSparkle_Gfx, 0x0400, INTRO_TAG_SPARKLE
	rodata_compressed_sprite_sheet 0, 0, 0

.globl sSpritePalette_Sparkle
sSpritePalette_Sparkle: @ 0x085C5B38
	.4byte gIntroLightning_Pal
	.2byte INTRO_TAG_SPARKLE, 0
	.4byte 0
	.2byte 0, 0

sOamData_Sparkle: @ 0x085C5B48
	@ DISPLAY_HEIGHT, affine off, normal, 4bpp, square 16x16, priority 1.
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0

sAnim_Sparkle: @ 0x085C5B50
	rodata_anim_frame 0, 2
	rodata_anim_frame 4, 2
	rodata_anim_frame 8, 2
	rodata_anim_frame 12, 2
	rodata_anim_frame 16, 2
	rodata_anim_jump 0

sAnims_Sparkle: @ 0x085C5B68
	.4byte sAnim_Sparkle

.globl sSpriteTemplate_Sparkle
sSpriteTemplate_Sparkle: @ 0x085C5B6C
	@ callback is upstream SpriteCB_Sparkle.
	rodata_sprite_template INTRO_TAG_SPARKLE, INTRO_TAG_SPARKLE, sOamData_Sparkle, sAnims_Sparkle, 0, gDummySpriteAffineAnimTable, sub_0816D11C

.globl sSparkleCoords
sSparkleCoords: @ 0x085C5B84
	.byte 124, 40
	.byte 102, 30
	.byte 77, 30
	.byte 54, 15
	.byte 148, 9
	.byte 63, 28
	.byte 93, 40
	.byte 148, 32
	.byte 173, 41
	.byte 94, 20
	.byte 208, 38
	.byte 0, 0

.globl sSpriteSheet_RunningPokemon
sSpriteSheet_RunningPokemon: @ 0x085C5B9C
	rodata_compressed_sprite_sheet gIntroVolbeat_Gfx, 0x0400, INTRO_TAG_VOLBEAT
	rodata_compressed_sprite_sheet gIntroTorchic_Gfx, 0x0C00, INTRO_TAG_TORCHIC
	rodata_compressed_sprite_sheet gIntroManectric_Gfx, 0x2000, INTRO_TAG_MANECTRIC
	rodata_compressed_sprite_sheet 0, 0, 0

.globl sSpritePalettes_RunningPokemon
sSpritePalettes_RunningPokemon: @ 0x085C5BBC
	.4byte gIntroVolbeat_Pal
	.2byte INTRO_TAG_VOLBEAT, 0
	.4byte gIntroTorchic_Pal
	.2byte INTRO_TAG_TORCHIC, 0
	.4byte gIntroManectric_Pal
	.2byte INTRO_TAG_MANECTRIC, 0
	.4byte 0
	.2byte 0, 0

sOamData_Volbeat: @ 0x085C5BDC
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1, 0, 0

sAnim_Volbeat: @ 0x085C5BE4
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_jump 0

sAnims_Volbeat: @ 0x085C5BF0
	.4byte sAnim_Volbeat

.globl sSpriteTemplate_Volbeat
sSpriteTemplate_Volbeat: @ 0x085C5BF4
	@ callback is upstream SpriteCB_Volbeat.
	rodata_sprite_template INTRO_TAG_VOLBEAT, INTRO_TAG_VOLBEAT, sOamData_Volbeat, sAnims_Volbeat, 0, gDummySpriteAffineAnimTable, sub_0816D600

sOamData_Torchic: @ 0x085C5C0C
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1, 0, 0

sAnim_Torchic_Walk: @ 0x085C5C14
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 5
	rodata_anim_frame 16, 5
	rodata_anim_jump 0

sAnim_Torchic_Run: @ 0x085C5C28
	rodata_anim_frame 0, 3
	rodata_anim_frame 16, 3
	rodata_anim_frame 32, 3
	rodata_anim_frame 16, 3
	rodata_anim_jump 0

sAnim_Torchic_Trip: @ 0x085C5C3C
	rodata_anim_frame 48, 4
	rodata_anim_frame 64, 6
	rodata_anim_frame 80, 0
	rodata_anim_end

sAnims_Torchic: @ 0x085C5C4C
	.4byte sAnim_Torchic_Walk
	.4byte sAnim_Torchic_Run
	.4byte sAnim_Torchic_Trip

.globl sSpriteTemplate_Torchic
sSpriteTemplate_Torchic: @ 0x085C5C58
	@ callback is upstream SpriteCB_Torchic.
	rodata_sprite_template INTRO_TAG_TORCHIC, INTRO_TAG_TORCHIC, sOamData_Torchic, sAnims_Torchic, 0, gDummySpriteAffineAnimTable, sub_0816D7A4

sOamData_Manectric: @ 0x085C5C70
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 0, 0

sAnim_Manectric: @ 0x085C5C78
	rodata_anim_frame 0, 4
	rodata_anim_frame 64, 4
	rodata_anim_frame 128, 4
	rodata_anim_frame 192, 4
	rodata_anim_jump 0

sAnims_Manectric: @ 0x085C5C8C
	.4byte sAnim_Manectric

.globl sSpriteTemplate_Manectric
sSpriteTemplate_Manectric: @ 0x085C5C90
	@ callback is upstream SpriteCB_Manectric.
	rodata_sprite_template INTRO_TAG_MANECTRIC, INTRO_TAG_MANECTRIC, sOamData_Manectric, sAnims_Manectric, 0, gDummySpriteAffineAnimTable, sub_0816D8CC

.globl sSpriteSheet_Lightning
sSpriteSheet_Lightning: @ 0x085C5CA8
	rodata_compressed_sprite_sheet gIntroLightning_Gfx, 0x0C00, INTRO_TAG_LIGHTNING
	rodata_compressed_sprite_sheet 0, 0, 0

.globl sSpritePalette_Lightning
sSpritePalette_Lightning: @ 0x085C5CB8
	.4byte gIntroLightning_Pal
	.2byte INTRO_TAG_LIGHTNING, 0
	.4byte 0
	.2byte 0, 0

sOamData_Lightning: @ 0x085C5CC8
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0

sAnim_Lightning_Top: @ 0x085C5CD0
	rodata_anim_frame 0, 2
	rodata_anim_frame 48, 2
	rodata_anim_end

sAnim_Lightning_Middle: @ 0x085C5CDC
	rodata_anim_frame 16, 2
	rodata_anim_frame 64, 2
	rodata_anim_end

sAnim_Lightning_Bottom: @ 0x085C5CE8
	rodata_anim_frame 32, 2
	rodata_anim_frame 80, 2
	rodata_anim_end

sAnims_Lightning: @ 0x085C5CF4
	.4byte sAnim_Lightning_Top
	.4byte sAnim_Lightning_Middle
	.4byte sAnim_Lightning_Bottom

.globl sSpriteTemplate_Lightning
sSpriteTemplate_Lightning: @ 0x085C5D00
	rodata_sprite_template INTRO_TAG_LIGHTNING, INTRO_TAG_LIGHTNING, sOamData_Lightning, sAnims_Lightning, 0, gDummySpriteAffineAnimTable, SpriteCB_IntroRayquazaLightning

.if (. - sUnusedData) != 0x22C
.error "Intro scene static data 0x085C5AEC-0x085C5D17 size mismatch"
.endif


@ ----------------------------------------------------------------------
@ Groudon rocks, Kyogre bubbles, water-drop sprite data and bike anims.
@ ROM 0x085C5D18-0x085C5E77.

.globl gIntroBubbles_Gfx
.set gIntroBubbles_Gfx, gLz77Asset_08D8CF28

.globl gIntroBubbles_Pal
.set gIntroBubbles_Pal, gLz77Asset_08D8D114 - 0x20

.globl sGroudonRockData
sGroudonRockData: @ 0x085C5D18
	@ x, animation index, speed
	.2byte 104, 0, 0x0C0
	.2byte 142, 3, 0x280
	.2byte 83, 1, 0x180
	.2byte 155, 0, 0x080
	.2byte 56, 2, 0x200
	.2byte 174, 1, 0x100

.globl sSpriteSheet_Bubbles
sSpriteSheet_Bubbles: @ 0x085C5D3C
	rodata_compressed_sprite_sheet gIntroBubbles_Gfx, 0x0600, INTRO_TAG_BUBBLES
	rodata_compressed_sprite_sheet 0, 0, 0

.globl sSpritePalette_Bubbles
sSpritePalette_Bubbles: @ 0x085C5D4C
	.4byte gIntroBubbles_Pal
	.2byte INTRO_TAG_BUBBLES, 0
	.4byte 0
	.2byte 0, 0

.globl sKyogreBubbleData
sKyogreBubbleData: @ 0x085C5D5C
	@ Set 1: Kyogre body. x, y, delay.
	.2byte 66, 64, 1
	.2byte 96, 96, 8
	.2byte 128, 64, 1
	.2byte 144, 48, 8
	.2byte 160, 72, 1
	.2byte 176, 96, 8
	@ Set 2: Kyogre fins.
	.2byte 96, 96, 4
	.2byte 112, 104, 8
	.2byte 128, 96, 4
	.2byte 88, 32, 4
	.2byte 104, 24, 8
	.2byte 120, 32, 4

sOamData_Bubbles: @ 0x085C5DA4
	@ DISPLAY_HEIGHT, affine off, normal, 4bpp, vertical 16x32, priority 0.
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0

sAnim_Bubbles: @ 0x085C5DAC
	rodata_anim_frame 0, 4
	rodata_anim_frame 8, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 24, 4
	rodata_anim_frame 32, 4
	rodata_anim_end

sAnims_Bubbles: @ 0x085C5DC4
	.4byte sAnim_Bubbles

.globl sSpriteTemplate_Bubbles
sSpriteTemplate_Bubbles: @ 0x085C5DC8
	rodata_sprite_template INTRO_TAG_BUBBLES, INTRO_TAG_BUBBLES, sOamData_Bubbles, sAnims_Bubbles, 0, gDummySpriteAffineAnimTable, SpriteCB_IntroKyogreBubbles

sOamData_WaterDrop: @ 0x085C5DE0
	@ DISPLAY_HEIGHT, affine off, normal, 4bpp, square 32x32, priority 0.
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0

sAnim_WaterDrop_UpperHalf: @ 0x085C5DE8
	rodata_anim_frame 16, 8
	rodata_anim_end

sAnim_WaterDrop_LowerHalf: @ 0x085C5DF0
	rodata_anim_frame 24, 8
	rodata_anim_end

sAnim_WaterDrop_Reflection: @ 0x085C5DF8
	rodata_anim_frame 0, 8
	rodata_anim_end

sAnim_WaterDrop_Ripple: @ 0x085C5E00
	rodata_anim_frame 48, 8
	rodata_anim_end

sAnims_WaterDrop: @ 0x085C5E08
	.4byte sAnim_WaterDrop_UpperHalf
	.4byte sAnim_WaterDrop_LowerHalf
	.4byte sAnim_WaterDrop_Reflection
	.4byte sAnim_WaterDrop_Ripple

.globl sSpriteTemplate_WaterDrop
sSpriteTemplate_WaterDrop: @ 0x085C5E18
	@ Tags 2000 are the already-proven drops/logo graphics and drops palette.
	@ callback is upstream SpriteCB_WaterDrop.
	rodata_sprite_template 2000, 2000, sOamData_WaterDrop, sAnims_WaterDrop, 0, gDummySpriteAffineAnimTable, sub_0816F238

sAnim_PlayerBicycle_Fast: @ 0x085C5E30
	rodata_anim_frame 0, 4
	rodata_anim_frame 64, 4
	rodata_anim_frame 128, 4
	rodata_anim_frame 192, 4
	rodata_anim_jump 0

sAnim_PlayerBicycle_Slow: @ 0x085C5E44
	rodata_anim_frame 0, 8
	rodata_anim_frame 64, 8
	rodata_anim_frame 128, 8
	rodata_anim_frame 192, 8
	rodata_anim_jump 0

sAnim_PlayerBicycle_LookBack: @ 0x085C5E58
	rodata_anim_frame 256, 4
	rodata_anim_frame 320, 4
	rodata_anim_frame 384, 4
	rodata_anim_end

sAnim_PlayerBicycle_LookForward: @ 0x085C5E68
	rodata_anim_frame 384, 16
	rodata_anim_frame 320, 16
	rodata_anim_frame 256, 16
	rodata_anim_end

.if (. - sGroudonRockData) != 0x160
.error "Intro Groudon/Bubbles/WaterDrop data 0x085C5D18-0x085C5E77 size mismatch"
.endif

@ ----------------------------------------------------------------------
@ Player bicycle animation table and GAME FREAK / PRESENTS logo metadata.
@ ROM 0x085C5E78-0x085C5FFB.

.set INTRO_GAMEFREAK_G, 0
.set INTRO_GAMEFREAK_A, 1
.set INTRO_GAMEFREAK_M, 2
.set INTRO_GAMEFREAK_E, 3
.set INTRO_GAMEFREAK_F, 4
.set INTRO_GAMEFREAK_R, 5
.set INTRO_GAMEFREAK_K, 6

.set INTRO_PRESENTS_P, 0
.set INTRO_PRESENTS_R, 1
.set INTRO_PRESENTS_E, 2
.set INTRO_PRESENTS_S, 3
.set INTRO_PRESENTS_N, 4
.set INTRO_PRESENTS_T, 5

.globl sAnims_PlayerBicycle
sAnims_PlayerBicycle: @ 0x085C5E78
	.4byte sAnim_PlayerBicycle_Fast
	.4byte sAnim_PlayerBicycle_Slow
	.4byte sAnim_PlayerBicycle_LookBack
	.4byte sAnim_PlayerBicycle_LookForward

sOamData_GameFreakLetter: @ 0x085C5E88
	@ DISPLAY_HEIGHT, affine double, normal, 4bpp, square 16x16.
	rodata_sprite_oam_data 160, 3, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0

sOamData_PresentsLetter: @ 0x085C5E90
	@ DISPLAY_HEIGHT, affine off, normal, 4bpp, square 8x8.
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

sOamData_GameFreakLogo: @ 0x085C5E98
	@ DISPLAY_HEIGHT, affine double, blend, 4bpp, vertical 32x64.
	rodata_sprite_oam_data 160, 3, 1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0

sAnim_GameFreakLetter_G: @ 0x085C5EA0
	rodata_anim_frame 80, 8
	rodata_anim_end

sAnim_GameFreakLetter_A: @ 0x085C5EA8
	rodata_anim_frame 84, 8
	rodata_anim_end

sAnim_GameFreakLetter_M: @ 0x085C5EB0
	rodata_anim_frame 88, 8
	rodata_anim_end

sAnim_GameFreakLetter_E: @ 0x085C5EB8
	rodata_anim_frame 92, 8
	rodata_anim_end

sAnim_GameFreakLetter_F: @ 0x085C5EC0
	rodata_anim_frame 96, 8
	rodata_anim_end

sAnim_GameFreakLetter_R: @ 0x085C5EC8
	rodata_anim_frame 100, 8
	rodata_anim_end

sAnim_GameFreakLetter_K: @ 0x085C5ED0
	rodata_anim_frame 104, 8
	rodata_anim_end

sAnim_PresentsLetter_P: @ 0x085C5ED8
	rodata_anim_frame 112, 8
	rodata_anim_end

sAnim_PresentsLetter_R: @ 0x085C5EE0
	rodata_anim_frame 113, 8
	rodata_anim_end

sAnim_PresentsLetter_E: @ 0x085C5EE8
	rodata_anim_frame 114, 8
	rodata_anim_end

sAnim_PresentsLetter_S: @ 0x085C5EF0
	rodata_anim_frame 115, 8
	rodata_anim_end

sAnim_PresentsLetter_N: @ 0x085C5EF8
	rodata_anim_frame 116, 8
	rodata_anim_end

sAnim_PresentsLetter_T: @ 0x085C5F00
	rodata_anim_frame 117, 8
	rodata_anim_end

sAnim_GameFreakLogo: @ 0x085C5F08
	rodata_anim_frame 128, 8
	rodata_anim_end

sAnims_GameFreakLetter: @ 0x085C5F10
	.4byte sAnim_GameFreakLetter_G
	.4byte sAnim_GameFreakLetter_A
	.4byte sAnim_GameFreakLetter_M
	.4byte sAnim_GameFreakLetter_E
	.4byte sAnim_GameFreakLetter_F
	.4byte sAnim_GameFreakLetter_R
	.4byte sAnim_GameFreakLetter_K

sAnims_PresentsLetter: @ 0x085C5F2C
	.4byte sAnim_PresentsLetter_P
	.4byte sAnim_PresentsLetter_R
	.4byte sAnim_PresentsLetter_E
	.4byte sAnim_PresentsLetter_S
	.4byte sAnim_PresentsLetter_N
	.4byte sAnim_PresentsLetter_T

sAnims_GameFreakLogo: @ 0x085C5F44
	.4byte sAnim_GameFreakLogo

.globl sGameFreakLetterData
sGameFreakLetterData: @ 0x085C5F48
	@ Letter animation index, x offset.
	.2byte INTRO_GAMEFREAK_G, -72
	.2byte INTRO_GAMEFREAK_A, -56
	.2byte INTRO_GAMEFREAK_M, -40
	.2byte INTRO_GAMEFREAK_E, -24
	.2byte INTRO_GAMEFREAK_F, 8
	.2byte INTRO_GAMEFREAK_R, 24
	.2byte INTRO_GAMEFREAK_E, 40
	.2byte INTRO_GAMEFREAK_A, 56
	.2byte INTRO_GAMEFREAK_K, 72

sPresentsLetterData: @ 0x085C5F6C
	@ Letter animation index, x offset.
	.2byte INTRO_PRESENTS_P, -28
	.2byte INTRO_PRESENTS_R, -20
	.2byte INTRO_PRESENTS_E, -12
	.2byte INTRO_PRESENTS_S, -4
	.2byte INTRO_PRESENTS_E, 4
	.2byte INTRO_PRESENTS_N, 12
	.2byte INTRO_PRESENTS_T, 20
	.2byte INTRO_PRESENTS_S, 28

sAffineAnim_GameFreak_Small: @ 0x085C5F8C
	@ AFFINEANIMCMD_FRAME(128, 128, 0, 0)
	rodata_affine_anim_frame 128, 128, 0, 0
	rodata_affine_anim_end

sAffineAnim_GameFreak_GrowAndShrink: @ 0x085C5F9C
	@ AFFINEANIMCMD_FRAME(128, 128, 0, 0)
	rodata_affine_anim_frame 128, 128, 0, 0
	@ AFFINEANIMCMD_FRAME(16, 16, 0, 16): duration occupies the packed high byte.
	rodata_affine_anim_frame 16, 16, 0x1000, 0
	@ AFFINEANIMCMD_FRAME(-16, -16, 0, 8)
	rodata_affine_anim_frame -16, -16, 0x0800, 0
	rodata_affine_anim_end

sAffineAnim_GameFreak_GrowBig: @ 0x085C5FBC
	@ AFFINEANIMCMD_FRAME(256, 256, 0, 0)
	rodata_affine_anim_frame 256, 256, 0, 0
	@ AFFINEANIMCMD_FRAME(8, 8, 0, 48)
	rodata_affine_anim_frame 8, 8, 0x3000, 0
	rodata_affine_anim_end

sAffineAnim_GameFreak_GrowMedium: @ 0x085C5FD4
	@ AFFINEANIMCMD_FRAME(256, 256, 0, 0)
	rodata_affine_anim_frame 256, 256, 0, 0
	@ AFFINEANIMCMD_FRAME(2, 2, 0, 48)
	rodata_affine_anim_frame 2, 2, 0x3000, 0
	rodata_affine_anim_end

sAffineAnims_GameFreak: @ 0x085C5FEC
	.4byte sAffineAnim_GameFreak_Small
	.4byte sAffineAnim_GameFreak_GrowAndShrink
	.4byte sAffineAnim_GameFreak_GrowBig
	.4byte sAffineAnim_GameFreak_GrowMedium

.if (. - sAnims_PlayerBicycle) != 0x184
.error "Intro logo metadata 0x085C5E78-0x085C5FFB size mismatch"
.endif

@ ----------------------------------------------------------------------
@ Remaining Part 1 intro metadata: GAME FREAK / PRESENTS templates,
@ Flygon silhouette, and Rayquaza glow scene support data.
@ ROM 0x085C5FFC-0x085C611B.

.set INTRO_TAG_PART1_SPRITES,        2000
.set INTRO_TAG_PART1_PALETTE,        2001
.set INTRO_TAG_FLYGON_SILHOUETTE,    2002
.set INTRO_TAG_RAYQUAZA_ORB,        2003

.globl gIntroFlygonSilhouette_Gfx
.set gIntroFlygonSilhouette_Gfx, gLz77Asset_08D8D114

.globl sGameFreakLettersMoveSpeed
sGameFreakLettersMoveSpeed: @ 0x085C5FFC
	@ Fixed-point move speed for G A M E F R E A K.
	.2byte 0x0100, 0x00C0, 0x0080, 0x0040, 0x0000
	.2byte 0x0040, 0x0080, 0x00C0, 0x0100
	.2byte 0x0000 @ alignment

.globl sSpriteTemplate_GameFreakLetter
sSpriteTemplate_GameFreakLetter: @ 0x085C6010
	@ GAME FREAK letter sprites
	rodata_sprite_template INTRO_TAG_PART1_SPRITES, INTRO_TAG_PART1_PALETTE, sOamData_GameFreakLetter, sAnims_GameFreakLetter, 0, sAffineAnims_GameFreak, sub_0816F91C

.globl sSpriteTemplate_PresentsLetter
sSpriteTemplate_PresentsLetter: @ 0x085C6028
	@ PRESENTS letter sprites
	rodata_sprite_template INTRO_TAG_PART1_SPRITES, INTRO_TAG_PART1_PALETTE, sOamData_PresentsLetter, sAnims_PresentsLetter, 0, gDummySpriteAffineAnimTable, sub_0816F91C

.globl sSpriteTemplate_GameFreakLogo
sSpriteTemplate_GameFreakLogo: @ 0x085C6040
	rodata_sprite_template INTRO_TAG_PART1_SPRITES, INTRO_TAG_PART1_PALETTE, sOamData_GameFreakLogo, sAnims_GameFreakLogo, 0, sAffineAnims_GameFreak, sub_0816FB3C

.globl sGameFreakLetterStartDelays
sGameFreakLetterStartDelays: @ 0x085C6058
	@ 9 letters in "GAME FREAK".
	.byte 0x00, 0x17, 0x17, 0x31, 0x3E, 0x24, 0x24, 0x0A, 0x0A
	.byte 0x00, 0x00, 0x00 @ alignment

sOamData_FlygonSilhouette: @ 0x085C6064
	@ DISPLAY_HEIGHT, affine off, normal, 4bpp, horizontal 64x32.
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0

sAnim_FlygonSilhouette: @ 0x085C606C
	rodata_anim_frame 0, 10
	rodata_anim_jump 0

sAnims_FlygonSilhouette: @ 0x085C6074
	.4byte sAnim_FlygonSilhouette

.globl sSpriteTemplate_FlygonSilhouette
sSpriteTemplate_FlygonSilhouette: @ 0x085C6078
	rodata_sprite_template INTRO_TAG_FLYGON_SILHOUETTE, INTRO_TAG_FLYGON_SILHOUETTE, sOamData_FlygonSilhouette, sAnims_FlygonSilhouette, 0, gDummySpriteAffineAnimTable, sub_0816FCD4

.globl sSpriteSheet_WaterDropsAndLogo
sSpriteSheet_WaterDropsAndLogo: @ 0x085C6090
	rodata_compressed_sprite_sheet gIntroDropsLogo_Gfx, 0x1400, INTRO_TAG_PART1_SPRITES
	rodata_compressed_sprite_sheet 0, 0, 0

.globl sSpriteSheet_FlygonSilhouette
sSpriteSheet_FlygonSilhouette: @ 0x085C60A0
	rodata_compressed_sprite_sheet gIntroFlygonSilhouette_Gfx, 0x0400, INTRO_TAG_FLYGON_SILHOUETTE
	rodata_compressed_sprite_sheet 0, 0, 0

.globl sSpritePalettes_Intro1
sSpritePalettes_Intro1: @ 0x085C60B0
	.4byte gIntroDrops_Pal
	.2byte INTRO_TAG_PART1_SPRITES, 0
	.4byte gIntroLogo_Pal
	.2byte INTRO_TAG_PART1_PALETTE, 0
	.4byte gIntroFlygonSilhouette_Pal
	.2byte INTRO_TAG_FLYGON_SILHOUETTE, 0
	.4byte 0
	.2byte 0, 0

sOamData_RayquazaOrb: @ 0x085C60D0
	@ DISPLAY_HEIGHT, affine off, normal, 4bpp, square 64x64.
	rodata_sprite_oam_data 160, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0

sAnim_RayquazaOrb: @ 0x085C60D8
	rodata_anim_frame 16, 8
	rodata_anim_end

sAnims_RayquazaOrb: @ 0x085C60E0
	.4byte sAnim_RayquazaOrb

.globl sSpriteTemplate_RayquazaOrb
sSpriteTemplate_RayquazaOrb: @ 0x085C60E4
	rodata_sprite_template INTRO_TAG_RAYQUAZA_ORB, INTRO_TAG_RAYQUAZA_ORB, sOamData_RayquazaOrb, sAnims_RayquazaOrb, 0, gDummySpriteAffineAnimTable, SpriteCB_IntroRayquazaHyperbeam

.globl sSpriteSheet_RayquazaOrb
sSpriteSheet_RayquazaOrb: @ 0x085C60FC
	rodata_compressed_sprite_sheet gIntroMisc_Gfx, 0x0A00, INTRO_TAG_RAYQUAZA_ORB
	rodata_compressed_sprite_sheet 0, 0, 0

.globl sSpritePalette_RayquazaOrb
sSpritePalette_RayquazaOrb: @ 0x085C610C
	.4byte gIntroRayquazaOrb_Pal
	.2byte INTRO_TAG_RAYQUAZA_ORB, 0
	.4byte 0
	.2byte 0, 0

.if (. - sGameFreakLettersMoveSpeed) != 0x120
.error "Intro part1 remaining metadata 0x085C5FFC-0x085C611B size mismatch"
.endif
