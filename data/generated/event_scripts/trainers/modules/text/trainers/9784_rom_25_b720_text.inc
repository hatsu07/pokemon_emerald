	@ data/text/trainers.inc:818 Route110_Text_EdwinDefeated (+1 aliases)
	.globl gText_Rom_25B720
gText_Rom_25B720: @ 0x0825B720
	.string "コンプリート したかった……!$"
	.if (. - gText_Rom_25B720) > 0x10
	.error "gText_Rom_25B720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B720) < 0x10
	.space 0x10 - (. - gText_Rom_25B720)
	.endif
