	@ data/maps/GraniteCave_1F/scripts.inc:20 GraniteCave_1F_Text_GetsDarkAheadHereYouGo
	.globl gText_Rom_213F18
gText_Rom_213F18: @ 0x08213F18
	.string "おい おまえ\nこのさきは くらいから\lたんけん するのも たいへん だぞ!\pさっきの おとこ……\nダイゴって いったっけか?\pあいつは フラッシュが つかえたから\nだいじょうぶ だろうが……\pうむ! やまおとこは であった\nあいてに やさしく するのが モットー!\lこれを ゆずってやると するか!{EOS}"
	.if (. - gText_Rom_213F18) > 0x96
	.error "gText_Rom_213F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213F18) < 0x96
	.space 0x96 - (. - gText_Rom_213F18)
	.endif
