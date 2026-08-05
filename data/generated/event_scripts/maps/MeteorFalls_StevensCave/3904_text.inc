	@ data/maps/MeteorFalls_StevensCave/scripts.inc:42 MeteorFalls_StevensCave_Text_StevenDefeat (+1 aliases)
	.globl gText_Rom_21D2B0
gText_Rom_21D2B0: @ 0x0821D2B0
	.string "きみは……\nこれほどまでに つよくなって いたのか"
	.byte EOS
	.if (. - gText_Rom_21D2B0) > 0x1a
	.error "gText_Rom_21D2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D2B0) < 0x1a
	.space 0x1a - (. - gText_Rom_21D2B0)
	.endif
