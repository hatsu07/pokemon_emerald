	@ data/maps/LilycoveCity/scripts.inc:720 LilycoveCity_Text_FasterSpinBetterPokeblocks
	.globl gText_Rom_1E13C0
gText_Rom_1E13C0: @ 0x081E13C0
	.string "みんなで こうそくで まわし まくるんだ\pすっげー はやいと\nすっげー いいポロックが できるらしいぜ!{EOS}"
	.if (. - gText_Rom_1E13C0) > 0x35
	.error "gText_Rom_1E13C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E13C0) < 0x35
	.space 0x35 - (. - gText_Rom_1E13C0)
	.endif
