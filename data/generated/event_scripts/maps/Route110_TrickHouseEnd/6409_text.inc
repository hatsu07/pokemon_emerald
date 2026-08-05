	@ data/maps/Route110_TrickHouseEnd/scripts.inc:274 Route110_TrickHouseEnd_Text_AllNightPolishingFloors
	.globl gText_Rom_23DC16
gText_Rom_23DC16: @ 0x0823DC16
	.string "てつやで ゆかを みがいたのに……\pわがはい より すごい! のかも……"
	.byte EOS
	.if (. - gText_Rom_23DC16) > 0x25
	.error "gText_Rom_23DC16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DC16) < 0x25
	.space 0x25 - (. - gText_Rom_23DC16)
	.endif
