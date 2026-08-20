	@ data/text/trainers.inc:1514 Route115_Text_KyraIntro (+1 aliases)
	.globl gText_Rom_25D454
gText_Rom_25D454: @ 0x0825D454
	.string "はしりながら しょうぶを するわよッ!\nあなたも ついて きなさーい!{EOS}"
	.if (. - gText_Rom_25D454) > 0x24
	.error "gText_Rom_25D454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D454) < 0x24
	.space 0x24 - (. - gText_Rom_25D454)
	.endif
