	@ data/maps/Route104/scripts.inc:1026 Route104_Text_LikeFillingMouthWithSeedsTakeThis
	.globl gText_Rom_1E7C2A
gText_Rom_1E7C2A: @ 0x081E7C2A
	.string "くちのなかに タネを いっぱい いれて\nそれを プププッ! とふきだすのが すき!\pおまえも これを やるから つかえよ!\pポケモンに つかうとさ\nタネを とばす わざを おぼえるから!$"
	.if (. - gText_Rom_1E7C2A) > 0x5e
	.error "gText_Rom_1E7C2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7C2A) < 0x5e
	.space 0x5e - (. - gText_Rom_1E7C2A)
	.endif
