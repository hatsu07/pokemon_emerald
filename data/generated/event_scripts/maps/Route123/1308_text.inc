	@ data/maps/Route123/scripts.inc:184 Route123_Text_CheckTreesWithMyGrassMon
	.globl gText_Rom_1EE722
gText_Rom_1EE722: @ 0x081EE722
	.string "くさポケモンと いっしょに\nきの ようすを みてまわってるの\lいってみれば きの おいしゃさんね$"
	.if (. - gText_Rom_1EE722) > 0x31
	.error "gText_Rom_1EE722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE722) < 0x31
	.space 0x31 - (. - gText_Rom_1EE722)
	.endif
