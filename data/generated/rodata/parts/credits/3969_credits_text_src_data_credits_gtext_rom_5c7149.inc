	@ src/data/credits.h:189 sCreditsText_SachikoNakamichi
	.globl gText_Rom_5C7149
gText_Rom_5C7149: @ 0x085C7149
	.string "なかみち さちこ$"
	.if (. - gText_Rom_5C7149) > 0x9
	.error "gText_Rom_5C7149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7149) < 0x9
	.space 0x9 - (. - gText_Rom_5C7149)
	.endif
