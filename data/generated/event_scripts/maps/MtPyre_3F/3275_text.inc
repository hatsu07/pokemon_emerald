	@ data/maps/MtPyre_3F/scripts.inc:78 MtPyre_3F_Text_GabrielleRegister
	.globl gText_Rom_2167D1
gText_Rom_2167D1: @ 0x082167D1
	.string "あなたの ポケモンが そだったら\nみてみたいわ……\lさあ ポケナビを だして{EOS}"
	.if (. - gText_Rom_2167D1) > 0x27
	.error "gText_Rom_2167D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2167D1) < 0x27
	.space 0x27 - (. - gText_Rom_2167D1)
	.endif
