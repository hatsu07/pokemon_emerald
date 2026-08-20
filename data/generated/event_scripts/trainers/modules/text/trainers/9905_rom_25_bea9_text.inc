	@ data/text/trainers.inc:989 Route111_Text_WiltonDefeat (+1 aliases)
	.globl gText_Rom_25BEA9
gText_Rom_25BEA9: @ 0x0825BEA9
	.string "なるほど\nかなり きたえてるね!{EOS}"
	.if (. - gText_Rom_25BEA9) > 0x11
	.error "gText_Rom_25BEA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BEA9) < 0x11
	.space 0x11 - (. - gText_Rom_25BEA9)
	.endif
