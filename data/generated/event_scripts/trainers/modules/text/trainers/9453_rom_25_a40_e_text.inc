	@ data/text/trainers.inc:335 Route105_Text_PostBattle
	.globl gText_Rom_25A40E
gText_Rom_25A40E: @ 0x0825A40E
	.string "みずの なかでは たいじゅうが\n10ぶんの1 くらいに なるのよ\pと すると いま わたしは……\nいけない! たいじゅうが バレちゃうわ!{EOS}"
	.if (. - gText_Rom_25A40E) > 0x46
	.error "gText_Rom_25A40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A40E) < 0x46
	.space 0x46 - (. - gText_Rom_25A40E)
	.endif
