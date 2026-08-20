	@ data/text/trainers.inc:1583 Route116_Text_JosePostBattle
	.globl gText_Rom_25D6D2
gText_Rom_25D6D2: @ 0x0825D6D2
	.string "むしポケモンは しんかが はやいから\nつよく なるのも はやい!{EOS}"
	.if (. - gText_Rom_25D6D2) > 0x21
	.error "gText_Rom_25D6D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6D2) < 0x21
	.space 0x21 - (. - gText_Rom_25D6D2)
	.endif
