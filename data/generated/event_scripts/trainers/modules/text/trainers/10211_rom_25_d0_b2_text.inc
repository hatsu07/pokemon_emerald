	@ data/text/trainers.inc:1430 Route114_Text_AngelinaPostBattle
	.globl gText_Rom_25D0B2
gText_Rom_25D0B2: @ 0x0825D0B2
	.string "しんか させると\nみためが ものすごく かわって\lビックリする ポケモンが いるよね!$"
	.if (. - gText_Rom_25D0B2) > 0x2c
	.error "gText_Rom_25D0B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D0B2) < 0x2c
	.space 0x2c - (. - gText_Rom_25D0B2)
	.endif
