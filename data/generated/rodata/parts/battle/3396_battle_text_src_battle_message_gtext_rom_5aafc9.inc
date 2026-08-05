	@ src/battle_message.c:126 sText_PkmnGoodComeBack
	.globl gText_Rom_5AAFC9
gText_Rom_5AAFC9: @ 0x085AAFC9
	.string "{B_BUFF1} よくやった！\nもどれ！$"
	.if (. - gText_Rom_5AAFC9) > 0xf
	.error "gText_Rom_5AAFC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFC9) < 0xf
	.space 0xf - (. - gText_Rom_5AAFC9)
	.endif
