	@ data/maps/MossdeepCity_House3/scripts.inc:34 MossdeepCity_House3_Text_TryDroppingRodInWater
	.globl gText_Rom_20C7C5
gText_Rom_20C7C5: @ 0x0820C7C5
	.string "みずの ある ところなら\nどこでも つりざお つかうと いいぞお!{EOS}"
	.if (. - gText_Rom_20C7C5) > 0x22
	.error "gText_Rom_20C7C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7C5) < 0x22
	.space 0x22 - (. - gText_Rom_20C7C5)
	.endif
