	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:356 Route110_TrickHousePuzzle7_Text_AlvaroIntro (+1 aliases)
	.globl gText_Rom_2403D0
gText_Rom_2403D0: @ 0x082403D0
	.string "きみが どんどん\nちかづいて くるのを みていたぜ!$"
	.if (. - gText_Rom_2403D0) > 0x1b
	.error "gText_Rom_2403D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403D0) < 0x1b
	.space 0x1b - (. - gText_Rom_2403D0)
	.endif
