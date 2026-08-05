	@ data/text/trainers.inc:2561 Route123_Text_EdPostBattle
	.globl gText_Rom_26000A
gText_Rom_26000A: @ 0x0826000A
	.string "へへへ きみの たたかいかたの\nアイディア いただき!\lつよく なれそう だよぅ$"
	.if (. - gText_Rom_26000A) > 0x29
	.error "gText_Rom_26000A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26000A) < 0x29
	.space 0x29 - (. - gText_Rom_26000A)
	.endif
