	@ data/text/trainers.inc:1982 Route119_Text_KentIntro (+1 aliases)
	.globl gText_Rom_25E853
gText_Rom_25E853: @ 0x0825E853
	.string "モノマネ だいすきな ひとが\nあつまって つくった モノマネサークル!\pであった そのとき\nしょうぶが はじまる!{EOS}"
	.if (. - gText_Rom_25E853) > 0x3a
	.error "gText_Rom_25E853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E853) < 0x3a
	.space 0x3a - (. - gText_Rom_25E853)
	.endif
