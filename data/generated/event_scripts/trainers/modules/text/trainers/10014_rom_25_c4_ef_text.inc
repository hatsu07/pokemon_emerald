	@ data/text/trainers.inc:1139 Route112_Text_BryantIntro (+1 aliases)
	.globl gText_Rom_25C4EF
gText_Rom_25C4EF: @ 0x0825C4EF
	.string "ほのおの ぬけみちで つかまえた\nホカホカの ポケモン みせてやろー!{EOS}"
	.if (. - gText_Rom_25C4EF) > 0x24
	.error "gText_Rom_25C4EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C4EF) < 0x24
	.space 0x24 - (. - gText_Rom_25C4EF)
	.endif
