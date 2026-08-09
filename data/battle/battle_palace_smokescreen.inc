@ Battle Palace target + Smokescreen/Enemy Shadow metadata.
@ ROM 0x082ECF8C-0x082ED04F.

	.globl gUnknown_82ECF8C
gUnknown_82ECF8C: @ 0x082ECF8C
	.globl gBattlePalaceNatureToMoveTarget
gBattlePalaceNatureToMoveTarget:
	.byte 0 @ NATURE_HARDY: PALACE_TARGET_STRONGER
	.byte 0 @ NATURE_LONELY: PALACE_TARGET_STRONGER
	.byte 1 @ NATURE_BRAVE: PALACE_TARGET_WEAKER
	.byte 0 @ NATURE_ADAMANT: PALACE_TARGET_STRONGER
	.byte 1 @ NATURE_NAUGHTY: PALACE_TARGET_WEAKER
	.byte 1 @ NATURE_BOLD: PALACE_TARGET_WEAKER
	.byte 2 @ NATURE_DOCILE: PALACE_TARGET_RANDOM
	.byte 0 @ NATURE_RELAXED: PALACE_TARGET_STRONGER
	.byte 0 @ NATURE_IMPISH: PALACE_TARGET_STRONGER
	.byte 0 @ NATURE_LAX: PALACE_TARGET_STRONGER
	.byte 1 @ NATURE_TIMID: PALACE_TARGET_WEAKER
	.byte 1 @ NATURE_HASTY: PALACE_TARGET_WEAKER
	.byte 1 @ NATURE_SERIOUS: PALACE_TARGET_WEAKER
	.byte 0 @ NATURE_JOLLY: PALACE_TARGET_STRONGER
	.byte 2 @ NATURE_NAIVE: PALACE_TARGET_RANDOM
	.byte 1 @ NATURE_MODEST: PALACE_TARGET_WEAKER
	.byte 0 @ NATURE_MILD: PALACE_TARGET_STRONGER
	.byte 1 @ NATURE_QUIET: PALACE_TARGET_WEAKER
	.byte 1 @ NATURE_BASHFUL: PALACE_TARGET_WEAKER
	.byte 0 @ NATURE_RASH: PALACE_TARGET_STRONGER
	.byte 0 @ NATURE_CALM: PALACE_TARGET_STRONGER
	.byte 0 @ NATURE_GENTLE: PALACE_TARGET_STRONGER
	.byte 1 @ NATURE_SASSY: PALACE_TARGET_WEAKER
	.byte 1 @ NATURE_CAREFUL: PALACE_TARGET_WEAKER
	.byte 0 @ NATURE_QUIRKY: PALACE_TARGET_STRONGER
	.byte 0, 0, 0 @ alignment

	.globl gUnknown_82ECFA8
gUnknown_82ECFA8: @ 0x082ECFA8
sSmokescreenImpactSpriteSheet:
	.4byte 0x08C0164C @ gSmokescreenImpactTiles
	.2byte 0x0180, 0xD6EB @ size, TAG_SMOKESCREEN

	.globl gUnknown_82ECFB0
gUnknown_82ECFB0: @ 0x082ECFB0
sSmokescreenImpactSpritePalette:
	.4byte 0x08C0172C @ gSmokescreenImpactPalette
	.4byte 0x0000D6EB @ TAG_SMOKESCREEN
sOamData_SmokescreenImpact: @ 0x082ECFB8
	.2byte 0x0000
	.2byte 0x4000
	.2byte 0x0400
	.2byte 0x0000

sAnim_SmokescreenImpact_0: @ 0x082ECFC0
	.2byte 0x0000, 0x0004
	.2byte 0x0004, 0x0004
	.2byte 0x0008, 0x0004
	.2byte 0xFFFF, 0x0000

sAnim_SmokescreenImpact_1: @ 0x082ECFD0
	.2byte 0x0000, 0x0044
	.2byte 0x0004, 0x0044
	.2byte 0x0008, 0x0044
	.2byte 0xFFFF, 0x0000

sAnim_SmokescreenImpact_2: @ 0x082ECFE0
	.2byte 0x0000, 0x0084
	.2byte 0x0004, 0x0084
	.2byte 0x0008, 0x0084
	.2byte 0xFFFF, 0x0000

sAnim_SmokescreenImpact_3: @ 0x082ECFF0
	.2byte 0x0000, 0x00C4
	.2byte 0x0004, 0x00C4
	.2byte 0x0008, 0x00C4
	.2byte 0xFFFF, 0x0000

sAnims_SmokescreenImpact: @ 0x082ED000
	.4byte sAnim_SmokescreenImpact_0
	.4byte sAnim_SmokescreenImpact_1
	.4byte sAnim_SmokescreenImpact_2
	.4byte sAnim_SmokescreenImpact_3

	.globl gUnknown_82ED010
gUnknown_82ED010: @ 0x082ED010
sSmokescreenImpactSpriteTemplate:
	.2byte 0xD6EB, 0xD6EB
	.4byte sOamData_SmokescreenImpact @ OAM
	.4byte sAnims_SmokescreenImpact @ anims
	.4byte 0x00000000 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte sub_08074DBC @ callback

	.globl gUnknown_82ED028
gUnknown_82ED028: @ 0x082ED028
	.globl gSpriteSheet_EnemyShadow
gSpriteSheet_EnemyShadow:
	.4byte 0x08D8FB74 @ gEnemyMonShadow_Gfx
	.2byte 0x0080, 0xD759 @ size, GFXTAG_SHADOW
sOamData_EnemyShadow: @ 0x082ED030
	.2byte 0x4000
	.2byte 0x4000
	.2byte 0x0C00
	.2byte 0x0000

	.globl gUnknown_82ED038
gUnknown_82ED038: @ 0x082ED038
	.globl gSpriteTemplate_EnemyShadow
gSpriteTemplate_EnemyShadow:
	.2byte 0xD759, 0xD6FF
	.4byte sOamData_EnemyShadow @ OAM
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0x00000000 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte SpriteCB_SetInvisible @ callback
