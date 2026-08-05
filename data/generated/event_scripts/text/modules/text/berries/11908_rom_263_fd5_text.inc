	@ data/text/berries.inc:210 SootopolisCity_Text_WhatKindOfWishInYourName
	.globl gText_Rom_263FD5
gText_Rom_263FD5: @ 0x08263FD5
	.string "{STR_VAR_1}の なまえには\nどんな ねがいが こめられてるの?$"
	.if (. - gText_Rom_263FD5) > 0x1c
	.error "gText_Rom_263FD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FD5) < 0x1c
	.space 0x1c - (. - gText_Rom_263FD5)
	.endif
