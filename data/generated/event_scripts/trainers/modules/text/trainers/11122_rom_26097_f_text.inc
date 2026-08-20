	@ data/text/trainers.inc:2765 Route125_Text_KimIntro (+1 aliases)
	.globl gText_Rom_26097F
gText_Rom_26097F: @ 0x0826097F
	.string "マホ『あさせのほらあなに\nへんな じいさんが いるんだって!\lあなたも あいにいく とちゅう?{EOS}"
	.if (. - gText_Rom_26097F) > 0x30
	.error "gText_Rom_26097F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26097F) < 0x30
	.space 0x30 - (. - gText_Rom_26097F)
	.endif
