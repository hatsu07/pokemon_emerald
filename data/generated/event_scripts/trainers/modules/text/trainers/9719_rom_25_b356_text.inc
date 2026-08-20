	@ data/text/trainers.inc:725 Route109_Text_ElijahPostBattle
	.globl gText_Rom_25B356
gText_Rom_25B356: @ 0x0825B356
	.string "こうはの おれさまには\nみなとまちが おにあいだぜ!\lカイナシティに いってくるか{EOS}"
	.if (. - gText_Rom_25B356) > 0x2a
	.error "gText_Rom_25B356 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B356) < 0x2a
	.space 0x2a - (. - gText_Rom_25B356)
	.endif
