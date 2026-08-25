	.globl sMoveRelearnerSpriteSheet
sMoveRelearnerSpriteSheet:
	rodata_sprite_sheet 0x085AD820, 0x180, 0x1595 @ GFXTAG_UI
	.globl sMoveRelearnerPalette
sMoveRelearnerPalette:
	rodata_sprite_palette 0x085AD800, 0x1596 @ PALTAG_UI
	.globl sDisplayModeArrowsTemplate
sDisplayModeArrowsTemplate:
	rodata_scroll_arrows_template 0, 48, 16, 1, 112, 16, -1, -1, 0x14CD, 0x14CD, 0
	.globl sMoveListScrollArrowsTemplate
sMoveListScrollArrowsTemplate:
	rodata_scroll_arrows_template 2, 200, 8, 3, 200, 104, 0, 0, 0x1531, 0x1531, 0
sHeartSprite_AppealEmptyFrame:
	rodata_anim_frame 8, 5
	rodata_anim_end
sHeartSprite_AppealFullFrame:
	rodata_anim_frame 9, 5
	rodata_anim_end
sHeartSprite_JamEmptyFrame:
	rodata_anim_frame 10, 5
	rodata_anim_end
sHeartSprite_JamFullFrame:
	rodata_anim_frame 11, 5
	rodata_anim_end
sHeartSpriteAnimationCommands:
	.4byte sHeartSprite_AppealEmptyFrame
	.4byte sHeartSprite_AppealFullFrame
	.4byte sHeartSprite_JamEmptyFrame
	.4byte sHeartSprite_JamFullFrame
	.globl sContestMoveHeartSprite
sContestMoveHeartSprite:
	rodata_sprite_template 0x1595, 0x1596, 0x085ADADC, sHeartSpriteAnimationCommands, 0, 0x082BF310, 0x08007141
	.globl sMoveRelearnerMenuBackgroundTemplates
sMoveRelearnerMenuBackgroundTemplates:
	bg_template 0, 0, 31, 0, 0, 0, 0 @ raw=0x000001F0
	bg_template 1, 0, 30, 0, 0, 1, 0 @ raw=0x000011E1
