@ Intro scene static sprite metadata, ROM 0x085C5AEC-0x085C5D17.
@ Structure and naming follow the proven upstream intro declarations, while
@ pointer targets remain tied to the current JP build graph.

.set INTRO_TAG_VOLBEAT,   1500
.set INTRO_TAG_TORCHIC,   1501
.set INTRO_TAG_MANECTRIC, 1502
.set INTRO_TAG_LIGHTNING, 1503
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
