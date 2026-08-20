	@ data/maps/MossdeepCity/scripts.inc:315 MossdeepCity_Text_WhatToDoWithWeirdRock
	.globl gText_Rom_1E1845
gText_Rom_1E1845: @ 0x081E1845
	.string "そうだろ! へんてこな いしを\nもらっても こまっちゃうよな!{EOS}"
	.if (. - gText_Rom_1E1845) > 0x20
	.error "gText_Rom_1E1845 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1845) < 0x20
	.space 0x20 - (. - gText_Rom_1E1845)
	.endif
