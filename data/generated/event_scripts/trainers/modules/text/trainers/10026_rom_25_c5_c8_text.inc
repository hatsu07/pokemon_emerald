	@ data/text/trainers.inc:1157 Route113_Text_JaylenIntro (+1 aliases)
	.globl gText_Rom_25C5C8
gText_Rom_25C5C8: @ 0x0825C5C8
	.string "この あたりが わりと すずしいの\nなんでか しってるかい?$"
	.if (. - gText_Rom_25C5C8) > 0x1f
	.error "gText_Rom_25C5C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C5C8) < 0x1f
	.space 0x1f - (. - gText_Rom_25C5C8)
	.endif
