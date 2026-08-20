	@ data/maps/MtPyre_3F/scripts.inc:83 MtPyre_3F_Text_GabrielleRematchIntro (+1 aliases)
	.globl gText_Rom_2167F8
gText_Rom_2167F8: @ 0x082167F8
	.string "あら あなたは……\nそだてた ポケモン みせてくれるの?{EOS}"
	.if (. - gText_Rom_2167F8) > 0x1d
	.error "gText_Rom_2167F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2167F8) < 0x1d
	.space 0x1d - (. - gText_Rom_2167F8)
	.endif
