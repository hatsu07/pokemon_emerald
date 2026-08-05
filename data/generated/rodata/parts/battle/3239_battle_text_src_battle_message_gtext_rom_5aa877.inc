	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA877
gText_Rom_5AA877: @ 0x085AA877
	.string "あがった！$"
	.if (. - gText_Rom_5AA877) > 0x6
	.error "gText_Rom_5AA877 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA877) < 0x6
	.space 0x6 - (. - gText_Rom_5AA877)
	.endif
	@ Decoded text from ROM range: offset=0x5AA87D, size=0x6
	.string "がくっと　$"
