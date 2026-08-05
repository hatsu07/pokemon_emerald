	@ src/strings.c:556 gText_WhatYouSayIfYouLose
	.globl gText_Rom_5CB944
gText_Rom_5CB944: @ 0x085CB944
	.string "たいせんに まけたときの あいさつは$"
	.if (. - gText_Rom_5CB944) > 0x13
	.error "gText_Rom_5CB944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB944) < 0x13
	.space 0x13 - (. - gText_Rom_5CB944)
	.endif
