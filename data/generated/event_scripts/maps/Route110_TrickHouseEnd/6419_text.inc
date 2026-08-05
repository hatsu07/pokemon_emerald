	@ data/maps/Route110_TrickHouseEnd/scripts.inc:289 Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward
	.globl gText_Rom_23DDE3
gText_Rom_23DDE3: @ 0x0823DDE3
	.string "よしっ あんたに\nほうびを やろう!"
	.byte EOS
	.if (. - gText_Rom_23DDE3) > 0x13
	.error "gText_Rom_23DDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DDE3) < 0x13
	.space 0x13 - (. - gText_Rom_23DDE3)
	.endif
