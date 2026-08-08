	@ data/text/trainers.inc:1913 Route118_Text_DaltonPostBattle
	.globl gText_Rom_25E575
gText_Rom_25E575: @ 0x0825E575
	.string "エレキギターって\nただ うるさい だけじゃ ないんだ……\pこうして こころに しみる\nメロディも かなでられるのさ……$"
	.if (. - gText_Rom_25E575) > 0x3c
	.error "gText_Rom_25E575 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E575) < 0x3c
	.space 0x3c - (. - gText_Rom_25E575)
	.endif
