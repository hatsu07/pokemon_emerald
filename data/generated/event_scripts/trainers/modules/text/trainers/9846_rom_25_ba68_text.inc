	@ data/text/trainers.inc:902 Route111_Text_DrewIntro (+1 aliases)
	.globl gText_Rom_25BA68
gText_Rom_25BA68: @ 0x0825BA68
	.string "おっ! ゴーゴーゴーグル にあってるね!\nでも ぼくの ほうが にあってるだろ?\lどっちが にあうか しょうぶだよ!$"
	.if (. - gText_Rom_25BA68) > 0x3b
	.error "gText_Rom_25BA68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA68) < 0x3b
	.space 0x3b - (. - gText_Rom_25BA68)
	.endif
