	@ data/text/trainers.inc:1220 Route113_Text_LungDefeat (+1 aliases)
	.globl gText_Rom_25C81C
gText_Rom_25C81C: @ 0x0825C81C
	.string "にんぽう かざんばい がくれ!\p…… って もう おわり?{EOS}"
	.if (. - gText_Rom_25C81C) > 0x1e
	.error "gText_Rom_25C81C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C81C) < 0x1e
	.space 0x1e - (. - gText_Rom_25C81C)
	.endif
