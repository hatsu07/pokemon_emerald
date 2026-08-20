	@ data/maps/MtPyre_Summit/scripts.inc:514 MtPyre_Summit_Text_OrbsHaveBeenTaken
	.globl gText_Rom_2173D9
gText_Rom_2173D9: @ 0x082173D9
	.string "あやしげな ふたりの おとこに うばわれた\nあいいろのたまと べにいろのたま……\pふたつが はなればなれ では\nきっと よくないことが おこる……{EOS}"
	.if (. - gText_Rom_2173D9) > 0x4a
	.error "gText_Rom_2173D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2173D9) < 0x4a
	.space 0x4a - (. - gText_Rom_2173D9)
	.endif
