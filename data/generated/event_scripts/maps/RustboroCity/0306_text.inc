	@ data/maps/RustboroCity/scripts.inc:1247 RustboroCity_Text_CitySign
	.globl gText_Rom_1DFBB4
gText_Rom_1DFBB4: @ 0x081DFBB4
	.string "ここは カナズミ シティ\pしぜんと かがくの ゆうごうを\nついきゅうする まち{EOS}"
	.if (. - gText_Rom_1DFBB4) > 0x28
	.error "gText_Rom_1DFBB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFBB4) < 0x28
	.space 0x28 - (. - gText_Rom_1DFBB4)
	.endif
