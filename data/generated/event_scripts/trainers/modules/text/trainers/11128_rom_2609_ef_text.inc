	@ data/text/trainers.inc:2774 Route125_Text_KimNotEnoughMons (+1 aliases)
	.globl gText_Rom_2609EF
gText_Rom_2609EF: @ 0x082609EF
	.string "マホ『ダメだって!\nポケモン 2ひき いないと ダメだって!{EOS}"
	.if (. - gText_Rom_2609EF) > 0x1f
	.error "gText_Rom_2609EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2609EF) < 0x1f
	.space 0x1f - (. - gText_Rom_2609EF)
	.endif
