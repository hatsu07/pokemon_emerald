	@ data/text/trainers.inc:2279 Route121_Text_WalterRematchDefeat (+1 aliases)
	.globl gText_Rom_25F4F0
gText_Rom_25F4F0: @ 0x0825F4F0
	.string "おみごと ですな!{EOS}"
	.if (. - gText_Rom_25F4F0) > 0xa
	.error "gText_Rom_25F4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4F0) < 0xa
	.space 0xa - (. - gText_Rom_25F4F0)
	.endif
