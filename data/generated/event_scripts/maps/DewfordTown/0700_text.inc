	@ data/maps/DewfordTown/scripts.inc:693 DewfordTown_Text_TellMeWhatsNewAndIn
	.globl gText_Rom_1E5546
gText_Rom_1E5546: @ 0x081E5546
	.string "え?\nはやって ないの!?\pじゃあ いま なにが はやってるか\nきかせてよ!{EOS}"
	.if (. - gText_Rom_1E5546) > 0x27
	.error "gText_Rom_1E5546 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5546) < 0x27
	.space 0x27 - (. - gText_Rom_1E5546)
	.endif
