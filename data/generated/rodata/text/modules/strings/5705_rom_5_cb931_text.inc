	@ src/strings.c:555 gText_WhatYouSayIfYouWin
	.globl gText_Rom_5CB931
gText_Rom_5CB931: @ 0x085CB931
	.string "たいせんに かったときの あいさつは{EOS}"
	.if (. - gText_Rom_5CB931) > 0x13
	.error "gText_Rom_5CB931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB931) < 0x13
	.space 0x13 - (. - gText_Rom_5CB931)
	.endif
