	@ data/text/trainers.inc:1082 Route111_Text_BiancaIntro (+1 aliases)
	.globl gText_Rom_25C283
gText_Rom_25C283: @ 0x0825C283
	.string "あなたは キンセツの ほうから きたの?\nじゃ たいりょくも バッチリね!$"
	.if (. - gText_Rom_25C283) > 0x26
	.error "gText_Rom_25C283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C283) < 0x26
	.space 0x26 - (. - gText_Rom_25C283)
	.endif
