	@ data/maps/RusturfTunnel/scripts.inc:457 RusturfTunnel_Text_BoyfriendOnOtherSideOfRock
	.globl gText_Rom_213CF3
gText_Rom_213CF3: @ 0x08213CF3
	.string "この いわの むこうに……\nわたしの かれが いるの\pかれ…… わたしに あうため だけに\nトンネルを ほってるわけ じゃないわ\pみんなの ために\nてを きずつけながらも がんばってるの$"
	.if (. - gText_Rom_213CF3) > 0x5e
	.error "gText_Rom_213CF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213CF3) < 0x5e
	.space 0x5e - (. - gText_Rom_213CF3)
	.endif
