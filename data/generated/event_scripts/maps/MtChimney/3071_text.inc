	@ data/maps/MtChimney/scripts.inc:662 MtChimney_Text_KeepMakingMoreLand
	.globl gText_Rom_2154E5
gText_Rom_2154E5: @ 0x082154E5
	.string "もっと もっと だいちを ふやすぜ!!{EOS}"
	.if (. - gText_Rom_2154E5) > 0x14
	.error "gText_Rom_2154E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2154E5) < 0x14
	.space 0x14 - (. - gText_Rom_2154E5)
	.endif
