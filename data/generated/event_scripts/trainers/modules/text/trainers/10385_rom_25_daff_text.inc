	@ data/text/trainers.inc:1676 Route116_Text_JohnsonPostBattle
	.globl gText_Rom_25DAFF
gText_Rom_25DAFF: @ 0x0825DAFF
	.string "まけちゃった から\nぼくの たんパン かしてあげても いーよ!{EOS}"
	.if (. - gText_Rom_25DAFF) > 0x20
	.error "gText_Rom_25DAFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DAFF) < 0x20
	.space 0x20 - (. - gText_Rom_25DAFF)
	.endif
