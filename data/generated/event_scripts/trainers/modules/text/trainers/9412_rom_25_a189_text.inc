	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl gText_Rom_25A189
gText_Rom_25A189: @ 0x0825A189
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう{EOS}"
	.if (. - gText_Rom_25A189) > 0x22
	.error "gText_Rom_25A189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A189) < 0x22
	.space 0x22 - (. - gText_Rom_25A189)
	.endif
