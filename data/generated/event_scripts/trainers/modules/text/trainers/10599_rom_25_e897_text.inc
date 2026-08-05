	@ data/text/trainers.inc:1988 Route119_Text_KentPostBattle
	.globl gText_Rom_25E897
gText_Rom_25E897: @ 0x0825E897
	.string "キミも モノマネサークルに はいらない?$"
	.if (. - gText_Rom_25E897) > 0x15
	.error "gText_Rom_25E897 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E897) < 0x15
	.space 0x15 - (. - gText_Rom_25E897)
	.endif
