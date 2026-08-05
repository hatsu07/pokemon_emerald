	@ data/text/apprentice.inc:463 gText_ApprenticeItemAlreadyRecommended14
	.globl gText_Rom_26FF41
gText_Rom_26FF41: @ 0x0826FF41
	.string "それは も もう きいた じゃないか\pて てを ぬかないでくれ!\nワシに はじを かかせないで くれ!\pあ…… それとも\n{STR_VAR_2}は なにも\lもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_Rom_26FF41) > 0x58
	.error "gText_Rom_26FF41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FF41) < 0x58
	.space 0x58 - (. - gText_Rom_26FF41)
	.endif
