	@ src/data/credits.h:156 sCreditsText_SuguruNakatsui
	.globl gText_Rom_5C701F
gText_Rom_5C701F: @ 0x085C701F
	.string "なかつい すぐる$"
	.if (. - gText_Rom_5C701F) > 0x9
	.error "gText_Rom_5C701F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C701F) < 0x9
	.space 0x9 - (. - gText_Rom_5C701F)
	.endif
