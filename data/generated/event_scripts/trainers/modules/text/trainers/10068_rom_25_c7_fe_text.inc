	@ data/text/trainers.inc:1217 Route113_Text_LungIntro (+1 aliases)
	.globl gText_Rom_25C7FE
gText_Rom_25C7FE: @ 0x0825C7FE
	.string "みつけてくれて ありがとう!\nでも しょうぶは べつだよ!$"
	.if (. - gText_Rom_25C7FE) > 0x1e
	.error "gText_Rom_25C7FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7FE) < 0x1e
	.space 0x1e - (. - gText_Rom_25C7FE)
	.endif
