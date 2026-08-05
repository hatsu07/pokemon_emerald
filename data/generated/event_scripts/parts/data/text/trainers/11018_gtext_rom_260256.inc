	@ data/text/trainers.inc:2612 Route124_Text_JennyRematchIntro (+1 aliases)
	.globl gText_Rom_260256
gText_Rom_260256: @ 0x08260256
	.string "こうして うみに うかんでいると\nトレーナーが いどんで くるのよね!$"
	.if (. - gText_Rom_260256) > 0x24
	.error "gText_Rom_260256 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260256) < 0x24
	.space 0x24 - (. - gText_Rom_260256)
	.endif
