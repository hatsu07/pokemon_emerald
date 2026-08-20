	@ data/text/trainers.inc:1004 Route111_Text_WiltonPostRematch
	.globl gText_Rom_25BF63
gText_Rom_25BF63: @ 0x0825BF63
	.string "そんなに つよいなら\nポケモンリーグを めざすと いいよ!{EOS}"
	.if (. - gText_Rom_25BF63) > 0x1e
	.error "gText_Rom_25BF63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BF63) < 0x1e
	.space 0x1e - (. - gText_Rom_25BF63)
	.endif
