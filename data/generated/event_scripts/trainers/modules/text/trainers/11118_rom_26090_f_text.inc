	@ data/text/trainers.inc:2759 Route125_Text_ErnestRematchDefeat (+1 aliases)
	.globl gText_Rom_26090F
gText_Rom_26090F: @ 0x0826090F
	.string "かてねえ\nちっとも かてねえよ!{EOS}"
	.if (. - gText_Rom_26090F) > 0x11
	.error "gText_Rom_26090F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26090F) < 0x11
	.space 0x11 - (. - gText_Rom_26090F)
	.endif
