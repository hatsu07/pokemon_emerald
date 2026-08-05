	@ data/text/trainers.inc:761 Route110_Text_BenjaminRematchDefeated (+1 aliases)
	.globl gText_Rom_25B4C9
gText_Rom_25B4C9: @ 0x0825B4C9
	.string "べつに あせってないけど\nなぜだか まけて しまうな……$"
	.if (. - gText_Rom_25B4C9) > 0x1d
	.error "gText_Rom_25B4C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B4C9) < 0x1d
	.space 0x1d - (. - gText_Rom_25B4C9)
	.endif
