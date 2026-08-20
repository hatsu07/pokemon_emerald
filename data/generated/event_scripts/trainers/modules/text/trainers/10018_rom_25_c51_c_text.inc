	@ data/text/trainers.inc:1145 Route112_Text_BryantPostBattle
	.globl gText_Rom_25C51C
gText_Rom_25C51C: @ 0x0825C51C
	.string "ナカナカ すてきな\nたたかいかたじゃ ないか きみぃ!{EOS}"
	.if (. - gText_Rom_25C51C) > 0x1c
	.error "gText_Rom_25C51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C51C) < 0x1c
	.space 0x1c - (. - gText_Rom_25C51C)
	.endif
