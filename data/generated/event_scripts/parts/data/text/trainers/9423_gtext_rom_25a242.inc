	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl gText_Rom_25A242
gText_Rom_25A242: @ 0x0825A242
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう$"
	.if (. - gText_Rom_25A242) > 0x22
	.error "gText_Rom_25A242 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A242) < 0x22
	.space 0x22 - (. - gText_Rom_25A242)
	.endif
