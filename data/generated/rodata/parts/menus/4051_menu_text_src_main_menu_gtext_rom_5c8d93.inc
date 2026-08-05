	@ src/main_menu.c:262 gText_BatteryRunDry
	.globl gText_Rom_5C8D93
gText_Rom_5C8D93: @ 0x085C8D93
	.string "でんちぎれの ために\nとけいが うごかなくなりました\pとけいに かんけいする できごとは おきませんが\nゲームを つづけて あそぶことは できます$"
	.if (. - gText_Rom_5C8D93) > 0x4a
	.error "gText_Rom_5C8D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D93) < 0x4a
	.space 0x4a - (. - gText_Rom_5C8D93)
	.endif
