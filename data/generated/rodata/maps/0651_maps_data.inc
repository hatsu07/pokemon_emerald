	@ pret/pokeemerald-jp direct xref for 0x084E8B14: reset_rtc_screen.s: CreateCursor, FreeCursorPalette
	.globl gResetRtcScreenData_084E8B14
gResetRtcScreenData_084E8B14:
	.globl gUnknown_84E8B14
gUnknown_84E8B14: @ 0x084E8B14
gResetRtcCursorSpritePalette: @ 0x084E8B14
	rodata_sprite_palette gResetRtcCursorPalette, 0x1000

gResetRtcCursorAnim_Wait: @ 0x084E8B1C
	.2byte 0, 30
	.2byte 0xFFFE, 0 @ ANIMCMD_JUMP(0)
gResetRtcCursorAnim_Blink: @ 0x084E8B24
	.2byte 0, 158
	.2byte 0xFFFE, 0 @ ANIMCMD_JUMP(0)
gResetRtcCursorAnim_Confirm: @ 0x084E8B2C
	.2byte 1, 30
	.2byte 0xFFFE, 0 @ ANIMCMD_JUMP(0)

gResetRtcCursorAnims: @ 0x084E8B34
	.4byte gResetRtcCursorAnim_Wait
	.4byte gResetRtcCursorAnim_Blink
	.4byte gResetRtcCursorAnim_Confirm
	@ pret/pokeemerald-jp direct xref for 0x084E8B40: reset_rtc_screen.s: CreateCursor
	.globl gResetRtcScreenData_084E8B40
gResetRtcScreenData_084E8B40:
	.globl gUnknown_84E8B40
gUnknown_84E8B40: @ 0x084E8B40
	@ analyzed canonical ROM range 0x084E8B40-0x084E8B57
gResetRtcCursorSpriteTemplate: @ 0x084E8B40
sSpriteTemplate_084E8B40: @ 0x084E8B40
	rodata_sprite_template 0xFFFF, 0x1000, gResetRtcCursorOam, gResetRtcCursorAnims, gResetRtcCursorFrameImages, gDummySpriteAffineAnimTable, SpriteCallbackDummy
