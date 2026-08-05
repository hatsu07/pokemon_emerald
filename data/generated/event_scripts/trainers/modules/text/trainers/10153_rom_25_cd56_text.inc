	@ data/text/trainers.inc:1346 Route114_Text_BernieDefeat (+1 aliases)
	.globl gText_Rom_25CD56
gText_Rom_25CD56: @ 0x0825CD56
	.string "しょうか かつどう\nありがとう! ってか$"
	.if (. - gText_Rom_25CD56) > 0x15
	.error "gText_Rom_25CD56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD56) < 0x15
	.space 0x15 - (. - gText_Rom_25CD56)
	.endif
