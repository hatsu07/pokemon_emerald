	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:84 RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase
	.globl gText_Rom_20398A
gText_Rom_20398A: @ 0x0820398A
	.string "いまは {STR_VAR_1} って\nことばを つかってるんだけど\pおもしろそうな ことば\nみつけて きたの?{EOS}"
	.if (. - gText_Rom_20398A) > 0x2f
	.error "gText_Rom_20398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20398A) < 0x2f
	.space 0x2f - (. - gText_Rom_20398A)
	.endif
