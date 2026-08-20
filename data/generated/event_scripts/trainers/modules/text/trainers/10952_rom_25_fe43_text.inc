	@ data/text/trainers.inc:2513 Route123_Text_FernandoRematchDefeat (+1 aliases)
	.globl gText_Rom_25FE43
gText_Rom_25FE43: @ 0x0825FE43
	.string "おいおい まだ サビまで いってないゼ!{EOS}"
	.if (. - gText_Rom_25FE43) > 0x15
	.error "gText_Rom_25FE43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FE43) < 0x15
	.space 0x15 - (. - gText_Rom_25FE43)
	.endif
