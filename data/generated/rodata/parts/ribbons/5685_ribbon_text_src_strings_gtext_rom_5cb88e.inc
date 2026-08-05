	@ src/strings.c:545 gText_AndMakeAMessage (+1 aliases)
	.globl gText_Rom_5CB88E
gText_Rom_5CB88E: @ 0x085CB88E
	.string "メッセージを つくろう!$"
	.if (. - gText_Rom_5CB88E) > 0xd
	.error "gText_Rom_5CB88E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB88E) < 0xd
	.space 0xd - (. - gText_Rom_5CB88E)
	.endif
	@ Decoded text from ROM range: offset=0x5CB89B, size=0x16
	.string "7もじの　ことばは　1ぎょうに　2つまで！$"
