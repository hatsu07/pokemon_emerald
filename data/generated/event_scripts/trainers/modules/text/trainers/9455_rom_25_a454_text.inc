	@ data/text/trainers.inc:338 Route105_Text_ImaniIntro (+1 aliases)
	.globl gText_Rom_25A454
gText_Rom_25A454: @ 0x0825A454
	.string "あおい そら……\nひろい うみ……\lのどか よねー……$"
	.if (. - gText_Rom_25A454) > 0x1c
	.error "gText_Rom_25A454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A454) < 0x1c
	.space 0x1c - (. - gText_Rom_25A454)
	.endif
