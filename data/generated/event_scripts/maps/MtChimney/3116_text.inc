	@ data/maps/MtChimney/scripts.inc:769 MtChimney_Text_ShelbyRegister
	.globl gText_Rom_21585E
gText_Rom_21585E: @ 0x0821585E
	.string "マゴと たたかってる ようで たのしかった\nよかったら また あいてを しておくれ!{EOS}"
	.if (. - gText_Rom_21585E) > 0x2b
	.error "gText_Rom_21585E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21585E) < 0x2b
	.space 0x2b - (. - gText_Rom_21585E)
	.endif
