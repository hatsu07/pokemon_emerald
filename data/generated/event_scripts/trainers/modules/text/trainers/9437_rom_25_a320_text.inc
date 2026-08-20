	@ data/text/trainers.inc:311 Route105_Text_LuisIntro (+1 aliases)
	.globl gText_Rom_25A320
gText_Rom_25A320: @ 0x0825A320
	.string "よかった! こどもが\nおぼれているのかと しんぱい したよ!\pだいじょうぶ そうだから しょうぶ だな!{EOS}"
	.if (. - gText_Rom_25A320) > 0x35
	.error "gText_Rom_25A320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A320) < 0x35
	.space 0x35 - (. - gText_Rom_25A320)
	.endif
