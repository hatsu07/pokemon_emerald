	@ data/maps/Route119/scripts.inc:486 Route119_Text_MayDefeat (+1 aliases)
	.globl gText_Rom_1ED318
gText_Rom_1ED318: @ 0x081ED318
	.string "あっちゃー!\n{PLAYER}{KUN} つよい じゃない!\pポケモン そだってなくて\nこまってるかも って しんぱい してたのに$"
	.if (. - gText_Rom_1ED318) > 0x39
	.error "gText_Rom_1ED318 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED318) < 0x39
	.space 0x39 - (. - gText_Rom_1ED318)
	.endif
