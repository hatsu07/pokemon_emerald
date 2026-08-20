	@ data/text/trainers.inc:3413 Route134_Text_ReynaDefeat (+1 aliases)
	.globl gText_Rom_2622F2
gText_Rom_2622F2: @ 0x082622F2
	.string "うっそだろ!\nあたいが まけるなんて!{EOS}"
	.if (. - gText_Rom_2622F2) > 0x14
	.error "gText_Rom_2622F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2622F2) < 0x14
	.space 0x14 - (. - gText_Rom_2622F2)
	.endif
