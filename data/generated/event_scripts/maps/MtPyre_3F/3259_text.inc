	@ data/maps/MtPyre_3F/scripts.inc:41 MtPyre_3F_Text_WilliamDefeat (+1 aliases)
	.globl gText_Rom_2166BB
gText_Rom_2166BB: @ 0x082166BB
	.string "アップ アップ……{EOS}"
	.if (. - gText_Rom_2166BB) > 0xa
	.error "gText_Rom_2166BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2166BB) < 0xa
	.space 0xa - (. - gText_Rom_2166BB)
	.endif
