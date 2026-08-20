	@ data/text/trainers.inc:1577 Route116_Text_JoseIntro (+1 aliases)
	.globl gText_Rom_25D69F
gText_Rom_25D69F: @ 0x0825D69F
	.string "ぼくの むしポケモンは つよいよ!\nしょうぶ しようよ!{EOS}"
	.if (. - gText_Rom_25D69F) > 0x1d
	.error "gText_Rom_25D69F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D69F) < 0x1d
	.space 0x1d - (. - gText_Rom_25D69F)
	.endif
