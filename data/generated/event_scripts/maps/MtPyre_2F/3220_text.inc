	@ data/maps/MtPyre_2F/scripts.inc:49 MtPyre_2F_Text_TumbledFromFloorAbove
	.globl gText_Rom_216301
gText_Rom_216301: @ 0x08216301
	.string "アイタタタ…… ゆかの そこかしこに\nあなが あいているのに きづかないで\lおじさん うえから おちてしまったよ{EOS}"
	.if (. - gText_Rom_216301) > 0x39
	.error "gText_Rom_216301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216301) < 0x39
	.space 0x39 - (. - gText_Rom_216301)
	.endif
