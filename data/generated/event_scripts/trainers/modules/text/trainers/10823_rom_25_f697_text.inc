	@ data/text/trainers.inc:2318 Route121_Text_JessicaIntro (+1 aliases)
	.globl gText_Rom_25F697
gText_Rom_25F697: @ 0x0825F697
	.string "あたくしの だいじな ポケモン\nちょっと みなさいよ!{EOS}"
	.if (. - gText_Rom_25F697) > 0x1c
	.error "gText_Rom_25F697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F697) < 0x1c
	.space 0x1c - (. - gText_Rom_25F697)
	.endif
