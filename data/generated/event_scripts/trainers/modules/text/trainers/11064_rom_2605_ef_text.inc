	@ data/text/trainers.inc:2681 Route124_Text_RoyRematchDefeat (+1 aliases)
	.globl gText_Rom_2605EF
gText_Rom_2605EF: @ 0x082605EF
	.string "コウ『うわぁ……\nまた ねえちゃんに おこられる……$"
	.if (. - gText_Rom_2605EF) > 0x1b
	.error "gText_Rom_2605EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2605EF) < 0x1b
	.space 0x1b - (. - gText_Rom_2605EF)
	.endif
