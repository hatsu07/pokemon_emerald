	@ data/text/trainers.inc:827 Route110_Text_EdwinRematchIntro (+1 aliases)
	.globl gText_Rom_25B776
gText_Rom_25B776: @ 0x0825B776
	.string "ねえ キミ\nあたらしい ポケモン つかまえた?\pよかったら ポケモン みせてくれない?\nひとめで いいから おねがい!{EOS}"
	.if (. - gText_Rom_25B776) > 0x3c
	.error "gText_Rom_25B776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B776) < 0x3c
	.space 0x3c - (. - gText_Rom_25B776)
	.endif
