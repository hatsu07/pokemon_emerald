	@ data/text/apprentice.inc:262 gText_ApprenticeThanksNoHeldItem1
	.globl gText_Rom_26EC4E
gText_Rom_26EC4E: @ 0x0826EC4E
	.string "わかったー じゃあ そうするー!\nせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_26EC4E) > 0x1c
	.error "gText_Rom_26EC4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC4E) < 0x1c
	.space 0x1c - (. - gText_Rom_26EC4E)
	.endif
