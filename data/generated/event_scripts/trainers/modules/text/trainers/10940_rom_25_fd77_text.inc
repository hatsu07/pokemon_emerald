	@ data/text/trainers.inc:2495 Route123_Text_KindraPostBattle
	.globl gText_Rom_25FD77
gText_Rom_25FD77: @ 0x0825FD77
	.string "おくりびやまは……\nポケモンの たましいが ねむるところ……\pきっと たましいを なぐさめる\nちからに あふれてるのよ……$"
	.if (. - gText_Rom_25FD77) > 0x3e
	.error "gText_Rom_25FD77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FD77) < 0x3e
	.space 0x3e - (. - gText_Rom_25FD77)
	.endif
