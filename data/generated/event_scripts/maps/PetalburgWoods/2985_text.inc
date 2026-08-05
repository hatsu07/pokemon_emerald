	@ data/maps/PetalburgWoods/scripts.inc:335 PetalburgWoods_Text_YouHaveToHelpMe
	.globl gText_Rom_214673
gText_Rom_214673: @ 0x08214673
	.string "ひやー!\pきみ ポケモントレーナー だよね\nおじさんを たすけてよぉ$"
	.if (. - gText_Rom_214673) > 0x23
	.error "gText_Rom_214673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214673) < 0x23
	.space 0x23 - (. - gText_Rom_214673)
	.endif
