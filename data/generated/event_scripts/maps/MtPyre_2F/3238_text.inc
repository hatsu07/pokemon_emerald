	@ data/maps/MtPyre_2F/scripts.inc:96 MtPyre_2F_Text_DezDefeat (+1 aliases)
	.globl gText_Rom_2164CB
gText_Rom_2164CB: @ 0x082164CB
	.string "マコ『あーん こわーい!{EOS}"
	.if (. - gText_Rom_2164CB) > 0xd
	.error "gText_Rom_2164CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2164CB) < 0xd
	.space 0xd - (. - gText_Rom_2164CB)
	.endif
