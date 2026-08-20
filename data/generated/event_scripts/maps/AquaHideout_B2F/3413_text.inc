	@ data/maps/AquaHideout_B2F/scripts.inc:98 AquaHideout_B2F_Text_MattPostBattle
	.globl gText_Rom_218165
gText_Rom_218165: @ 0x08218165
	.string "ウヒョヒョ……!\pリーダーは どこかの かいていにある\nどうくつへ しゅっぱつ したぜ!\pおいかける つもりなら ミナモの さきに\nひろがる でっかい うみを\lさがしまわって みるが いいぜ!\pそれで みつかれば いいけどな……\nウヒョヒョヒョ!{EOS}"
	.if (. - gText_Rom_218165) > 0x7c
	.error "gText_Rom_218165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218165) < 0x7c
	.space 0x7c - (. - gText_Rom_218165)
	.endif
