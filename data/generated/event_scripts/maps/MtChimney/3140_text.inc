	@ data/maps/MtChimney/scripts.inc:823 MtChimney_Text_ShirleyPostBattle
	.globl gText_Rom_2159E8
gText_Rom_2159E8: @ 0x082159E8
	.string "もういちど おんせんに はいらなきゃ!\nあなたも いっしょに はいる?\pなんてねっ!{EOS}"
	.if (. - gText_Rom_2159E8) > 0x2b
	.error "gText_Rom_2159E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2159E8) < 0x2b
	.space 0x2b - (. - gText_Rom_2159E8)
	.endif
