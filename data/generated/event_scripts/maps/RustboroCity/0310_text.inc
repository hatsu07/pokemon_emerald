	@ data/maps/RustboroCity/scripts.inc:1256 RustboroCity_Text_CuttersHouse
	.globl gText_Rom_1DFC05
gText_Rom_1DFC05: @ 0x081DFC05
	.string "「いあいぎりオヤジの いえ」{EOS}"
	.if (. - gText_Rom_1DFC05) > 0xf
	.error "gText_Rom_1DFC05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFC05) < 0xf
	.space 0xf - (. - gText_Rom_1DFC05)
	.endif
