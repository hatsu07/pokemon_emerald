	@ data/maps/MtPyre_3F/scripts.inc:63 MtPyre_3F_Text_GabrielleIntro (+1 aliases)
	.globl gText_Rom_216753
gText_Rom_216753: @ 0x08216753
	.string "あなたは なぜ ここへ……?{EOS}"
	.if (. - gText_Rom_216753) > 0xf
	.error "gText_Rom_216753 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216753) < 0xf
	.space 0xf - (. - gText_Rom_216753)
	.endif
