	@ data/text/trainers.inc:1127 Route112_Text_LarryPostBattle
	.globl gText_Rom_25C464
gText_Rom_25C464: @ 0x0825C464
	.string "おかあさんに あえなくて\nさみしいから ないてるんじゃ ないよ!\lぐすん……$"
	.if (. - gText_Rom_25C464) > 0x27
	.error "gText_Rom_25C464 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C464) < 0x27
	.space 0x27 - (. - gText_Rom_25C464)
	.endif
