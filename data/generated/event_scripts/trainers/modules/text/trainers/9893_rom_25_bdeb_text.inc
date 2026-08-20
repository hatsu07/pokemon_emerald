	@ data/text/trainers.inc:971 Route111_Text_IreneDefeat (+1 aliases)
	.globl gText_Rom_25BDEB
gText_Rom_25BDEB: @ 0x0825BDEB
	.string "にくらしいほど つよいのね!{EOS}"
	.if (. - gText_Rom_25BDEB) > 0xf
	.error "gText_Rom_25BDEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BDEB) < 0xf
	.space 0xf - (. - gText_Rom_25BDEB)
	.endif
