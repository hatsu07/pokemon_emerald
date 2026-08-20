	@ data/text/trainers.inc:2042 Route119_Text_PhilIntro (+1 aliases)
	.globl gText_Rom_25EAFD
gText_Rom_25EAFD: @ 0x0825EAFD
	.string "ぼくの とりポケモンの じつりょくを\nみせて あげるよ!{EOS}"
	.if (. - gText_Rom_25EAFD) > 0x1d
	.error "gText_Rom_25EAFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAFD) < 0x1d
	.space 0x1d - (. - gText_Rom_25EAFD)
	.endif
