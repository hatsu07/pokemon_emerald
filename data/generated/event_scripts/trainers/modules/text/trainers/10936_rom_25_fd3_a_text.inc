	@ data/text/trainers.inc:2489 Route123_Text_KindraIntro (+1 aliases)
	.globl gText_Rom_25FD3A
gText_Rom_25FD3A: @ 0x0825FD3A
	.string "おくりびやまは……\nポケモンの たましいが ねむるところ……\lあなたの ポケモンも ねむる……?{EOS}"
	.if (. - gText_Rom_25FD3A) > 0x31
	.error "gText_Rom_25FD3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FD3A) < 0x31
	.space 0x31 - (. - gText_Rom_25FD3A)
	.endif
