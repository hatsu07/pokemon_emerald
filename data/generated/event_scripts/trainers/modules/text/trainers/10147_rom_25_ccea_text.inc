	@ data/text/trainers.inc:1337 Route114_Text_SteveRematchDefeat (+1 aliases)
	.globl gText_Rom_25CCEA
gText_Rom_25CCEA: @ 0x0825CCEA
	.string "ああ ポケモン みることが できて\nしあわせ だ……{EOS}"
	.if (. - gText_Rom_25CCEA) > 0x1b
	.error "gText_Rom_25CCEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CCEA) < 0x1b
	.space 0x1b - (. - gText_Rom_25CCEA)
	.endif
