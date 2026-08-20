	@ data/text/trainers.inc:719 Route109_Text_ElijahIntro (+1 aliases)
	.globl gText_Rom_25B329
gText_Rom_25B329: @ 0x0825B329
	.string "こうはの おれさまには\nこんな ポケモンが おにあいだぜ!{EOS}"
	.if (. - gText_Rom_25B329) > 0x1e
	.error "gText_Rom_25B329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B329) < 0x1e
	.space 0x1e - (. - gText_Rom_25B329)
	.endif
