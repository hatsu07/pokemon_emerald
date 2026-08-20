	@ data/text/trainers.inc:1868 Route118_Text_RosePostRematch
	.globl gText_Rom_25E3D4
gText_Rom_25E3D4: @ 0x0825E3D4
	.string "あまいかおりを うまく つかうと\nポケモンが さそわれて やってくるわね{EOS}"
	.if (. - gText_Rom_25E3D4) > 0x25
	.error "gText_Rom_25E3D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3D4) < 0x25
	.space 0x25 - (. - gText_Rom_25E3D4)
	.endif
