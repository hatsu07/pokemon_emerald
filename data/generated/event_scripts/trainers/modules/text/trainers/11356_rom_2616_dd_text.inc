	@ data/text/trainers.inc:3113 Route130_Text_RodneyPostBattle
	.globl gText_Rom_2616DD
gText_Rom_2616DD: @ 0x082616DD
	.string "きびしい たたかいを くぐりぬけてきた\nいい めを しているぜ!{EOS}"
	.if (. - gText_Rom_2616DD) > 0x21
	.error "gText_Rom_2616DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2616DD) < 0x21
	.space 0x21 - (. - gText_Rom_2616DD)
	.endif
