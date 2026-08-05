	@ data/text/trainers.inc:2057 Route119_Text_YasuPostBattle
	.globl gText_Rom_25EB80
gText_Rom_25EB80: @ 0x0825EB80
	.string "しょうぶに やぶれた ものは\nいさぎよく かげに もどる……\lそれも さだめ……$"
	.if (. - gText_Rom_25EB80) > 0x29
	.error "gText_Rom_25EB80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB80) < 0x29
	.space 0x29 - (. - gText_Rom_25EB80)
	.endif
