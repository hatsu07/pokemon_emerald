	@ data/maps/VictoryRoad_1F/scripts.inc:157 VictoryRoad_1F_Text_HopeIntro (+1 aliases)
	.globl gText_Rom_219856
gText_Rom_219856: @ 0x08219856
	.string "この はてしなく けわしい みち こそ\nまさに チャンピオンへの みち なのよ!"
	.byte EOS
	.if (. - gText_Rom_219856) > 0x29
	.error "gText_Rom_219856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219856) < 0x29
	.space 0x29 - (. - gText_Rom_219856)
	.endif
