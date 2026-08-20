	@ data/maps/Route103/scripts.inc:349 Route103_Text_ShortcutToOldale
	.globl gText_Rom_1E70DC
gText_Rom_1E70DC: @ 0x081E70DC
	.string "ここから うみを わたっていけば\nコトキタウンまで ちかみちが できるぞ!\pふふふ おとくな じょうほう だろ?{EOS}"
	.if (. - gText_Rom_1E70DC) > 0x39
	.error "gText_Rom_1E70DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E70DC) < 0x39
	.space 0x39 - (. - gText_Rom_1E70DC)
	.endif
