	@ data/text/trainers.inc:1100 Route112_Text_TrentIntro (+1 aliases)
	.globl gText_Rom_25C329
gText_Rom_25C329: @ 0x0825C329
	.string "やまのぼりで きたえた オレの あしこし\nちょっとや そっとじゃ くじけないぜ!{EOS}"
	.if (. - gText_Rom_25C329) > 0x29
	.error "gText_Rom_25C329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C329) < 0x29
	.space 0x29 - (. - gText_Rom_25C329)
	.endif
