	@ data/text/trainers.inc:1649 Route116_Text_SarahPostBattle
	.globl gText_Rom_25D9F8
gText_Rom_25D9F8: @ 0x0825D9F8
	.string "なにふじゆう ない くらし ですけど\nポケモンの ことだけは\lおもいどおりに なりません のね$"
	.if (. - gText_Rom_25D9F8) > 0x30
	.error "gText_Rom_25D9F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D9F8) < 0x30
	.space 0x30 - (. - gText_Rom_25D9F8)
	.endif
