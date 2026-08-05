	@ data/text/tv.inc:1207 GabbyAndTy_Text_DontGiveUpKeepingEyeOut
	.globl gText_Rom_2531EC
gText_Rom_2531EC: @ 0x082531EC
	.string "マリ『そう……\pでも これからも がんばってね!\nあなたのこと ちゅうもく してるわ!"
	.byte EOS
	.if (. - gText_Rom_2531EC) > 0x2c
	.error "gText_Rom_2531EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2531EC) < 0x2c
	.space 0x2c - (. - gText_Rom_2531EC)
	.endif
