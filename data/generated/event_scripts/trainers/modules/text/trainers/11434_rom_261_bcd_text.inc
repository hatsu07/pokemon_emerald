	@ data/text/trainers.inc:3227 Route132_Text_DanaPostBattle
	.globl gText_Rom_261BCD
gText_Rom_261BCD: @ 0x08261BCD
	.string "ながされると じぶんが どこに いるのか\nわからなく なっちゃうの……$"
	.if (. - gText_Rom_261BCD) > 0x24
	.error "gText_Rom_261BCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261BCD) < 0x24
	.space 0x24 - (. - gText_Rom_261BCD)
	.endif
