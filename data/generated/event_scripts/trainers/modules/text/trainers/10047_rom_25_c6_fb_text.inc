	@ data/text/trainers.inc:1187 Route113_Text_MadelineRematchIntro (+1 aliases)
	.globl gText_Rom_25C6FB
gText_Rom_25C6FB: @ 0x0825C6FB
	.string "おひさしぶりね\nよろしかったら しょうぶ しません?$"
	.if (. - gText_Rom_25C6FB) > 0x1b
	.error "gText_Rom_25C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6FB) < 0x1b
	.space 0x1b - (. - gText_Rom_25C6FB)
	.endif
