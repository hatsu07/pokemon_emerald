	@ data/text/apprentice.inc:580 gText_ApprenticeMonThanks0
	.globl gText_Rom_270E34
gText_Rom_270E34: @ 0x08270E34
	.string "グスっ わ わかりました!\nあ ごめんなさい うれしくて なみだが……\pぼく がんばって {STR_VAR_1}を\nつかまえてみます!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_270E34) > 0x4d
	.error "gText_Rom_270E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270E34) < 0x4d
	.space 0x4d - (. - gText_Rom_270E34)
	.endif
