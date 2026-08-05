	@ data/text/trainers.inc:1166 Route113_Text_DillonIntro (+1 aliases)
	.globl gText_Rom_25C629
gText_Rom_25C629: @ 0x0825C629
	.string "やまの ふんかは\nちきゅうが いきている しょうこ!$"
	.if (. - gText_Rom_25C629) > 0x1b
	.error "gText_Rom_25C629 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C629) < 0x1b
	.space 0x1b - (. - gText_Rom_25C629)
	.endif
