	@ data/maps/MauvilleCity/scripts.inc:594 MauvilleCity_Text_WattsonWontBeChallenge
	.globl gText_Rom_1DE3C9
gText_Rom_1DE3C9: @ 0x081DE3C9
	.string "テッセン『なーに\nおまえさんなら だいじょうぶ じゃ\pちなみに ニューキンセツの いりぐちは\n110ばんどうろで なみのりを して\lすぐの ところに あるからのう\pでは よろしく たのんだぞ!\nわっはははは!{EOS}"
	.if (. - gText_Rom_1DE3C9) > 0x69
	.error "gText_Rom_1DE3C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE3C9) < 0x69
	.space 0x69 - (. - gText_Rom_1DE3C9)
	.endif
