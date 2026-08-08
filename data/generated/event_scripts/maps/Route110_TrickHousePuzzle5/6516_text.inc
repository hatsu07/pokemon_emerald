	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:913 Route110_TrickHousePuzzle5_Text_CorrectGoThrough
	.globl gText_Rom_23F97A
gText_Rom_23F97A: @ 0x0823F97A
	.string "オメデトウ セイカイ デース!\nサキヘ ドウゾ!$"
	.if (. - gText_Rom_23F97A) > 0x19
	.error "gText_Rom_23F97A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F97A) < 0x19
	.space 0x19 - (. - gText_Rom_23F97A)
	.endif
