	@ data/text/trainers.inc:389 Route106_Text_ElliotRematchIntro (+1 aliases)
	.globl gText_Rom_25A657
gText_Rom_25A657: @ 0x0825A657
	.string "ポケモン つりまくったからね\nすごい しょうぶを してみせるぞー!{EOS}"
	.if (. - gText_Rom_25A657) > 0x22
	.error "gText_Rom_25A657 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A657) < 0x22
	.space 0x22 - (. - gText_Rom_25A657)
	.endif
