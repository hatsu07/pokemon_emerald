	@ data/maps/Route104/scripts.inc:1089 Route104_Text_MayHowsYourPokedex
	.globl gText_Rom_1E7EB6
gText_Rom_1E7EB6: @ 0x081E7EB6
	.string "ハルカ『ところで {PLAYER}{KUN}の\nポケモンずかんの ちょうしは どう?$"
	.if (. - gText_Rom_1E7EB6) > 0x22
	.error "gText_Rom_1E7EB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7EB6) < 0x22
	.space 0x22 - (. - gText_Rom_1E7EB6)
	.endif
