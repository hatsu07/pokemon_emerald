	@ data/maps/RustboroCity/scripts.inc:1237 RustboroCity_Text_GymSign
	.globl gText_Rom_1DFB54
gText_Rom_1DFB54: @ 0x081DFB54
	.string "カナズミ シティ ポケモンジム\nリーダー ツツジ\lいわに ときめく ゆうとうせい!{EOS}"
	.if (. - gText_Rom_1DFB54) > 0x2a
	.error "gText_Rom_1DFB54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFB54) < 0x2a
	.space 0x2a - (. - gText_Rom_1DFB54)
	.endif
