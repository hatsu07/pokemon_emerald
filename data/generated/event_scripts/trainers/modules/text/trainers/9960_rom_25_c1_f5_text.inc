	@ data/text/trainers.inc:1064 Route111_Text_CelinaIntro (+1 aliases)
	.globl gText_Rom_25C1F5
gText_Rom_25C1F5: @ 0x0825C1F5
	.string "うふん……\nわたくしを ドキドキ させてね!{EOS}"
	.if (. - gText_Rom_25C1F5) > 0x17
	.error "gText_Rom_25C1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C1F5) < 0x17
	.space 0x17 - (. - gText_Rom_25C1F5)
	.endif
