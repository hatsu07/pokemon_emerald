	@ data/text/trainers.inc:884 Route110_Text_JosephIntro (+1 aliases)
	.globl gText_Rom_25B9B9
gText_Rom_25B9B9: @ 0x0825B9B9
	.string "よぉぉし とばして いくぜえェ!\nノリの わるいやつは おいてくぜェ!{EOS}"
	.if (. - gText_Rom_25B9B9) > 0x24
	.error "gText_Rom_25B9B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B9B9) < 0x24
	.space 0x24 - (. - gText_Rom_25B9B9)
	.endif
